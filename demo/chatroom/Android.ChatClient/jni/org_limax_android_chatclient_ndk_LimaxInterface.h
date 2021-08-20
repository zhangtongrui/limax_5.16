/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_limax_android_chatclient_ndk_LimaxInterface */

#ifndef _Included_org_limax_android_chatclient_ndk_LimaxInterface
#define _Included_org_limax_android_chatclient_ndk_LimaxInterface
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_limax_android_chatclient_ndk_LimaxInterface
 * Method:    initializeLimaxLib
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_limax_android_chatclient_ndk_LimaxInterface_initializeLimaxLib
  (JNIEnv *, jclass);

/*
 * Class:     org_limax_android_chatclient_ndk_LimaxInterface
 * Method:    startLogin
 * Signature: (Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;I)V
 */
JNIEXPORT void JNICALL Java_org_limax_android_chatclient_ndk_LimaxInterface_startLogin
  (JNIEnv *, jclass, jstring, jstring, jstring, jstring, jint);

/*
 * Class:     org_limax_android_chatclient_ndk_LimaxInterface
 * Method:    closeLogin
 * Signature: (Lorg/limax/android/chatclient/ndk/LimaxInterface/DataNotify;)V
 */
JNIEXPORT void JNICALL Java_org_limax_android_chatclient_ndk_LimaxInterface_closeLogin
  (JNIEnv *, jclass, jobject);

/*
 * Class:     org_limax_android_chatclient_ndk_LimaxInterface
 * Method:    sendMessage
 * Signature: (Ljava/lang/String;Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_limax_android_chatclient_ndk_LimaxInterface_sendMessage
  (JNIEnv *, jclass, jstring, jstring);

/*
 * Class:     org_limax_android_chatclient_ndk_LimaxInterface
 * Method:    getFieldValue
 * Signature: (Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_limax_android_chatclient_ndk_LimaxInterface_getFieldValue
  (JNIEnv *, jclass, jstring, jstring);

/*
 * Class:     org_limax_android_chatclient_ndk_LimaxInterface
 * Method:    idleProcess
 * Signature: (Lorg/limax/android/chatclient/ndk/LimaxInterface/DataNotify;)V
 */
JNIEXPORT void JNICALL Java_org_limax_android_chatclient_ndk_LimaxInterface_idleProcess
  (JNIEnv *, jclass, jobject);

/*
 * Class:     org_limax_android_chatclient_ndk_LimaxInterface
 * Method:    getSessionId
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_limax_android_chatclient_ndk_LimaxInterface_getSessionId
  (JNIEnv *, jclass);

#ifdef __cplusplus
}
#endif
#endif
