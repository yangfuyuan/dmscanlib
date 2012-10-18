/*
 * DecodedWell.h
 *
 *  Created on: 2012-10-12
 *      Author: loyola
 */

#include "WellDecoder.h"
#include "dib/Dib.h"
#include "Decoder.h"
#include "geometry.h"

#include <sstream>
#include <glog/logging.h>
#include <glog/raw_logging.h>

#ifdef _VISUALC_
#   include <functional>
#endif

WellDecoder::WellDecoder(const Decoder & _decoder,
		unique_ptr<const WellRectangle<unsigned>> _wellRectangle) :
		decoder(_decoder), wellRectangle(std::move(_wellRectangle)),
		boundingBox(std::move(wellRectangle->getRectangle().getBoundingBox()))
{
	VLOG(3) << "constructor: bounding box: " << *boundingBox
			<< ", rect: " << wellRectangle->getRectangle();
}

WellDecoder::~WellDecoder() {
}

/*
 * This method runs in its own thread.
 */
void WellDecoder::run() {
    wellImage = std::move(decoder.getWorkingImage().crop(*boundingBox));
    decoder.decodeWellRect(*wellImage, *this);
    if (!message.empty()) {
    	VLOG(3) << "run: " << *this;
    } else {
    	VLOG(3) << "run: "<< wellRectangle->getLabel() << " - could not be decoded";
    }
}

void WellDecoder::setMessage(const char * message, int messageLength) {
   this->message.assign(message, messageLength);
}

const Rect<unsigned> & WellDecoder::getDecodedRectangle() const {
	CHECK_NOTNULL(decodedRect.get());
	return *decodedRect;
}

// the rectangle passed in is in coordinates of the cropped image,
// the rectangle has to be translated into the coordinates of the overall
// image
void WellDecoder::setDecodeRectangle(const Rect<unsigned> & rect) {
	decodedRect = std::move(rect.translate(boundingBox->points[0]));
}

ostream & operator<<(ostream &os, WellDecoder & m) {
    os << m.getLabel() << ": \"" << m.getMessage() << "\" "<< *m.boundingBox;
    return os;
}