/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_winbaoxian_wybx_lamejni_SimpleLame */

#ifndef _Included_com_winbaoxian_wybx_lamejni_SimpleLame
#define _Included_com_winbaoxian_wybx_lamejni_SimpleLame
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_winbaoxian_wybx_lamejni_SimpleLame
 * Method:    init
 * Signature: (IIIII)V
 */
JNIEXPORT void JNICALL Java_com_winbaoxian_wybx_lamejni_SimpleLame_init
  (JNIEnv *, jclass, jint, jint, jint, jint, jint);

/*
 * Class:     com_winbaoxian_wybx_lamejni_SimpleLame
 * Method:    encode
 * Signature: ([S[SI[B)I
 */
JNIEXPORT jint JNICALL Java_com_winbaoxian_wybx_lamejni_SimpleLame_encode
  (JNIEnv *, jclass, jshortArray, jshortArray, jint, jbyteArray);

/*
 * Class:     com_winbaoxian_wybx_lamejni_SimpleLame
 * Method:    flush
 * Signature: ([B)I
 */
JNIEXPORT jint JNICALL Java_com_winbaoxian_wybx_lamejni_SimpleLame_flush
  (JNIEnv *, jclass, jbyteArray);

/*
 * Class:     com_winbaoxian_wybx_lamejni_SimpleLame
 * Method:    close
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_winbaoxian_wybx_lamejni_SimpleLame_close
  (JNIEnv *, jclass);

/*
 * Class:     com_winbaoxian_wybx_lamejni_SimpleLame
 * Method:    getVersion
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_winbaoxian_wybx_lamejni_SimpleLame_getVersion
  (JNIEnv *, jclass);

#ifdef __cplusplus
}
#endif
#endif