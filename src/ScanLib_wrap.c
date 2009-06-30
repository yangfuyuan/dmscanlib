/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 1.3.39
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#define SWIGJAVA

/* -----------------------------------------------------------------------------
 *  This section contains generic SWIG labels for method/variable
 *  declarations/attributes, and other compiler dependent labels.
 * ----------------------------------------------------------------------------- */

/* template workaround for compilers that cannot correctly implement the C++ standard */
#ifndef SWIGTEMPLATEDISAMBIGUATOR
# if defined(__SUNPRO_CC) && (__SUNPRO_CC <= 0x560)
#  define SWIGTEMPLATEDISAMBIGUATOR template
# elif defined(__HP_aCC)
/* Needed even with `aCC -AA' when `aCC -V' reports HP ANSI C++ B3910B A.03.55 */
/* If we find a maximum version that requires this, the test would be __HP_aCC <= 35500 for A.03.55 */
#  define SWIGTEMPLATEDISAMBIGUATOR template
# else
#  define SWIGTEMPLATEDISAMBIGUATOR
# endif
#endif

/* inline attribute */
#ifndef SWIGINLINE
# if defined(__cplusplus) || (defined(__GNUC__) && !defined(__STRICT_ANSI__))
#   define SWIGINLINE inline
# else
#   define SWIGINLINE
# endif
#endif

/* attribute recognised by some compilers to avoid 'unused' warnings */
#ifndef SWIGUNUSED
# if defined(__GNUC__)
#   if !(defined(__cplusplus)) || (__GNUC__ > 3 || (__GNUC__ == 3 && __GNUC_MINOR__ >= 4))
#     define SWIGUNUSED __attribute__ ((__unused__)) 
#   else
#     define SWIGUNUSED
#   endif
# elif defined(__ICC)
#   define SWIGUNUSED __attribute__ ((__unused__)) 
# else
#   define SWIGUNUSED 
# endif
#endif

#ifndef SWIG_MSC_UNSUPPRESS_4505
# if defined(_MSC_VER)
#   pragma warning(disable : 4505) /* unreferenced local function has been removed */
# endif 
#endif

#ifndef SWIGUNUSEDPARM
# ifdef __cplusplus
#   define SWIGUNUSEDPARM(p)
# else
#   define SWIGUNUSEDPARM(p) p SWIGUNUSED 
# endif
#endif

/* internal SWIG method */
#ifndef SWIGINTERN
# define SWIGINTERN static SWIGUNUSED
#endif

/* internal inline SWIG method */
#ifndef SWIGINTERNINLINE
# define SWIGINTERNINLINE SWIGINTERN SWIGINLINE
#endif

/* exporting methods */
#if (__GNUC__ >= 4) || (__GNUC__ == 3 && __GNUC_MINOR__ >= 4)
#  ifndef GCC_HASCLASSVISIBILITY
#    define GCC_HASCLASSVISIBILITY
#  endif
#endif

#ifndef SWIGEXPORT
# if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
#   if defined(STATIC_LINKED)
#     define SWIGEXPORT
#   else
#     define SWIGEXPORT __declspec(dllexport)
#   endif
# else
#   if defined(__GNUC__) && defined(GCC_HASCLASSVISIBILITY)
#     define SWIGEXPORT __attribute__ ((visibility("default")))
#   else
#     define SWIGEXPORT
#   endif
# endif
#endif

/* calling conventions for Windows */
#ifndef SWIGSTDCALL
# if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
#   define SWIGSTDCALL __stdcall
# else
#   define SWIGSTDCALL
# endif 
#endif

/* Deal with Microsoft's attempt at deprecating C standard runtime functions */
#if !defined(SWIG_NO_CRT_SECURE_NO_DEPRECATE) && defined(_MSC_VER) && !defined(_CRT_SECURE_NO_DEPRECATE)
# define _CRT_SECURE_NO_DEPRECATE
#endif

/* Deal with Microsoft's attempt at deprecating methods in the standard C++ library */
#if !defined(SWIG_NO_SCL_SECURE_NO_DEPRECATE) && defined(_MSC_VER) && !defined(_SCL_SECURE_NO_DEPRECATE)
# define _SCL_SECURE_NO_DEPRECATE
#endif



/* Fix for jlong on some versions of gcc on Windows */
#if defined(__GNUC__) && !defined(__INTEL_COMPILER)
  typedef long long __int64;
#endif

/* Fix for jlong on 64-bit x86 Solaris */
#if defined(__x86_64)
# ifdef _LP64
#   undef _LP64
# endif
#endif

#include <jni.h>
#include <stdlib.h>
#include <string.h>


/* Support for throwing Java exceptions */
typedef enum {
  SWIG_JavaOutOfMemoryError = 1, 
  SWIG_JavaIOException, 
  SWIG_JavaRuntimeException, 
  SWIG_JavaIndexOutOfBoundsException,
  SWIG_JavaArithmeticException,
  SWIG_JavaIllegalArgumentException,
  SWIG_JavaNullPointerException,
  SWIG_JavaDirectorPureVirtual,
  SWIG_JavaUnknownError
} SWIG_JavaExceptionCodes;

typedef struct {
  SWIG_JavaExceptionCodes code;
  const char *java_exception;
} SWIG_JavaExceptions_t;


static void SWIGUNUSED SWIG_JavaThrowException(JNIEnv *jenv, SWIG_JavaExceptionCodes code, const char *msg) {
  jclass excep;
  static const SWIG_JavaExceptions_t java_exceptions[] = {
    { SWIG_JavaOutOfMemoryError, "java/lang/OutOfMemoryError" },
    { SWIG_JavaIOException, "java/io/IOException" },
    { SWIG_JavaRuntimeException, "java/lang/RuntimeException" },
    { SWIG_JavaIndexOutOfBoundsException, "java/lang/IndexOutOfBoundsException" },
    { SWIG_JavaArithmeticException, "java/lang/ArithmeticException" },
    { SWIG_JavaIllegalArgumentException, "java/lang/IllegalArgumentException" },
    { SWIG_JavaNullPointerException, "java/lang/NullPointerException" },
    { SWIG_JavaDirectorPureVirtual, "java/lang/RuntimeException" },
    { SWIG_JavaUnknownError,  "java/lang/UnknownError" },
    { (SWIG_JavaExceptionCodes)0,  "java/lang/UnknownError" } };
  const SWIG_JavaExceptions_t *except_ptr = java_exceptions;

  while (except_ptr->code != code && except_ptr->code)
    except_ptr++;

  (*jenv)->ExceptionClear(jenv);
  excep = (*jenv)->FindClass(jenv, except_ptr->java_exception);
  if (excep)
    (*jenv)->ThrowNew(jenv, excep, msg);
}


/* Contract support */

#define SWIG_contract_assert(nullreturn, expr, msg) if (!(expr)) {SWIG_JavaThrowException(jenv, SWIG_JavaIllegalArgumentException, msg); return nullreturn; } else


extern int slIsTwainAvailable();
extern int slSelectSourceAsDefault();
extern int slConfigScannerBrightness(int brightness);
extern int slConfigScannerContrast(int contrast);
extern int slConfigPlateFrame(unsigned plateNum, double left, double top,
        double right, double bottom);
extern int slScanImage(unsigned dpi, double left, double top,
        double right, double bottom, char * filename);
extern int slScanPlate(unsigned dpi, unsigned plateNum, char * filename);
extern int slCalibrateToPlate(unsigned dpi, unsigned plateNum);
extern int slDecodePlate(unsigned dpi, unsigned plateNum);
extern int slDecodeImage(unsigned plateNum, char * filename);


#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT jint JNICALL Java_edu_ualberta_med_biobank_scanlib_ScanLibJNI_slIsTwainAvailable(JNIEnv *jenv, jclass jcls) {
  jint jresult = 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  result = (int)slIsTwainAvailable();
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_edu_ualberta_med_biobank_scanlib_ScanLibJNI_slSelectSourceAsDefault(JNIEnv *jenv, jclass jcls) {
  jint jresult = 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  result = (int)slSelectSourceAsDefault();
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_edu_ualberta_med_biobank_scanlib_ScanLibJNI_slConfigScannerBrightness(JNIEnv *jenv, jclass jcls, jint jarg1) {
  jint jresult = 0 ;
  int arg1 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  arg1 = (int)jarg1; 
  result = (int)slConfigScannerBrightness(arg1);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_edu_ualberta_med_biobank_scanlib_ScanLibJNI_slConfigScannerContrast(JNIEnv *jenv, jclass jcls, jint jarg1) {
  jint jresult = 0 ;
  int arg1 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  arg1 = (int)jarg1; 
  result = (int)slConfigScannerContrast(arg1);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_edu_ualberta_med_biobank_scanlib_ScanLibJNI_slConfigPlateFrame(JNIEnv *jenv, jclass jcls, jlong jarg1, jdouble jarg2, jdouble jarg3, jdouble jarg4, jdouble jarg5) {
  jint jresult = 0 ;
  unsigned int arg1 ;
  double arg2 ;
  double arg3 ;
  double arg4 ;
  double arg5 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  arg1 = (unsigned int)jarg1; 
  arg2 = (double)jarg2; 
  arg3 = (double)jarg3; 
  arg4 = (double)jarg4; 
  arg5 = (double)jarg5; 
  result = (int)slConfigPlateFrame(arg1,arg2,arg3,arg4,arg5);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_edu_ualberta_med_biobank_scanlib_ScanLibJNI_slScanImage(JNIEnv *jenv, jclass jcls, jlong jarg1, jdouble jarg2, jdouble jarg3, jdouble jarg4, jdouble jarg5, jstring jarg6) {
  jint jresult = 0 ;
  unsigned int arg1 ;
  double arg2 ;
  double arg3 ;
  double arg4 ;
  double arg5 ;
  char *arg6 = (char *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  arg1 = (unsigned int)jarg1; 
  arg2 = (double)jarg2; 
  arg3 = (double)jarg3; 
  arg4 = (double)jarg4; 
  arg5 = (double)jarg5; 
  arg6 = 0;
  if (jarg6) {
    arg6 = (char *)(*jenv)->GetStringUTFChars(jenv, jarg6, 0);
    if (!arg6) return 0;
  }
  result = (int)slScanImage(arg1,arg2,arg3,arg4,arg5,arg6);
  jresult = (jint)result; 
  if (arg6) (*jenv)->ReleaseStringUTFChars(jenv, jarg6, (const char *)arg6);
  return jresult;
}


SWIGEXPORT jint JNICALL Java_edu_ualberta_med_biobank_scanlib_ScanLibJNI_slScanPlate(JNIEnv *jenv, jclass jcls, jlong jarg1, jlong jarg2, jstring jarg3) {
  jint jresult = 0 ;
  unsigned int arg1 ;
  unsigned int arg2 ;
  char *arg3 = (char *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  arg1 = (unsigned int)jarg1; 
  arg2 = (unsigned int)jarg2; 
  arg3 = 0;
  if (jarg3) {
    arg3 = (char *)(*jenv)->GetStringUTFChars(jenv, jarg3, 0);
    if (!arg3) return 0;
  }
  result = (int)slScanPlate(arg1,arg2,arg3);
  jresult = (jint)result; 
  if (arg3) (*jenv)->ReleaseStringUTFChars(jenv, jarg3, (const char *)arg3);
  return jresult;
}


SWIGEXPORT jint JNICALL Java_edu_ualberta_med_biobank_scanlib_ScanLibJNI_slCalibrateToPlate(JNIEnv *jenv, jclass jcls, jlong jarg1, jlong jarg2) {
  jint jresult = 0 ;
  unsigned int arg1 ;
  unsigned int arg2 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  arg1 = (unsigned int)jarg1; 
  arg2 = (unsigned int)jarg2; 
  result = (int)slCalibrateToPlate(arg1,arg2);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_edu_ualberta_med_biobank_scanlib_ScanLibJNI_slDecodePlate(JNIEnv *jenv, jclass jcls, jlong jarg1, jlong jarg2) {
  jint jresult = 0 ;
  unsigned int arg1 ;
  unsigned int arg2 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  arg1 = (unsigned int)jarg1; 
  arg2 = (unsigned int)jarg2; 
  result = (int)slDecodePlate(arg1,arg2);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_edu_ualberta_med_biobank_scanlib_ScanLibJNI_slDecodeImage(JNIEnv *jenv, jclass jcls, jlong jarg1, jstring jarg2) {
  jint jresult = 0 ;
  unsigned int arg1 ;
  char *arg2 = (char *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  arg1 = (unsigned int)jarg1; 
  arg2 = 0;
  if (jarg2) {
    arg2 = (char *)(*jenv)->GetStringUTFChars(jenv, jarg2, 0);
    if (!arg2) return 0;
  }
  result = (int)slDecodeImage(arg1,arg2);
  jresult = (jint)result; 
  if (arg2) (*jenv)->ReleaseStringUTFChars(jenv, jarg2, (const char *)arg2);
  return jresult;
}


#ifdef __cplusplus
}
#endif
