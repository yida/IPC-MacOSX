/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class ipc_java_IPC */

#ifndef _Included_ipc_java_IPC
#define _Included_ipc_java_IPC
#ifdef __cplusplus
extern "C" {
#endif
#undef ipc_java_IPC_IPC_WAIT_FOREVER
#define ipc_java_IPC_IPC_WAIT_FOREVER -1LL
#undef ipc_java_IPC_TRIGGER_FOREVER
#define ipc_java_IPC_TRIGGER_FOREVER -1LL
#undef ipc_java_IPC_IPC_Error
#define ipc_java_IPC_IPC_Error 0L
#undef ipc_java_IPC_IPC_OK
#define ipc_java_IPC_IPC_OK 1L
#undef ipc_java_IPC_IPC_Timeout
#define ipc_java_IPC_IPC_Timeout 2L
#undef ipc_java_IPC_IPC_No_Error
#define ipc_java_IPC_IPC_No_Error 0L
#undef ipc_java_IPC_IPC_Not_Connected
#define ipc_java_IPC_IPC_Not_Connected 1L
#undef ipc_java_IPC_IPC_Not_Initialized
#define ipc_java_IPC_IPC_Not_Initialized 2L
#undef ipc_java_IPC_IPC_Message_Not_Defined
#define ipc_java_IPC_IPC_Message_Not_Defined 3L
#undef ipc_java_IPC_IPC_Not_Fixed_Length
#define ipc_java_IPC_IPC_Not_Fixed_Length 4L
#undef ipc_java_IPC_IPC_Message_Lengths_Differ
#define ipc_java_IPC_IPC_Message_Lengths_Differ 5L
#undef ipc_java_IPC_IPC_Argument_Out_Of_Range
#define ipc_java_IPC_IPC_Argument_Out_Of_Range 6L
#undef ipc_java_IPC_IPC_Null_Argument
#define ipc_java_IPC_IPC_Null_Argument 7L
#undef ipc_java_IPC_IPC_Illegal_Formatter
#define ipc_java_IPC_IPC_Illegal_Formatter 8L
#undef ipc_java_IPC_IPC_Mismatched_Formatter
#define ipc_java_IPC_IPC_Mismatched_Formatter 9L
#undef ipc_java_IPC_IPC_Wrong_Buffer_Length
#define ipc_java_IPC_IPC_Wrong_Buffer_Length 10L
#undef ipc_java_IPC_IPC_Communication_Error
#define ipc_java_IPC_IPC_Communication_Error 11L
#undef ipc_java_IPC_IPC_Silent
#define ipc_java_IPC_IPC_Silent 0L
#undef ipc_java_IPC_IPC_Print_Warnings
#define ipc_java_IPC_IPC_Print_Warnings 1L
#undef ipc_java_IPC_IPC_Print_Errors
#define ipc_java_IPC_IPC_Print_Errors 2L
#undef ipc_java_IPC_IPC_Exit_On_Errors
#define ipc_java_IPC_IPC_Exit_On_Errors 3L
/*
 * Class:     ipc_java_IPC
 * Method:    IPC_initialize
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_ipc_java_IPC_IPC_1initialize
  (JNIEnv *, jclass);

/*
 * Class:     ipc_java_IPC
 * Method:    IPC_connectModule
 * Signature: (Ljava/lang/String;Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_ipc_java_IPC_IPC_1connectModule
  (JNIEnv *, jclass, jstring, jstring);

/*
 * Class:     ipc_java_IPC
 * Method:    IPC_connect
 * Signature: (Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_ipc_java_IPC_IPC_1connect
  (JNIEnv *, jclass, jstring);

/*
 * Class:     ipc_java_IPC
 * Method:    IPC_disconnect
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_ipc_java_IPC_IPC_1disconnect
  (JNIEnv *, jclass);

/*
 * Class:     ipc_java_IPC
 * Method:    IPC_isConnected
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_ipc_java_IPC_IPC_1isConnected
  (JNIEnv *, jclass);

/*
 * Class:     ipc_java_IPC
 * Method:    IPC_isModuleConnected
 * Signature: (Ljava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_ipc_java_IPC_IPC_1isModuleConnected
  (JNIEnv *, jclass, jstring);

/*
 * Class:     ipc_java_IPC
 * Method:    IPC_defineMsg
 * Signature: (Ljava/lang/String;Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_ipc_java_IPC_IPC_1defineMsg
  (JNIEnv *, jclass, jstring, jstring);

/*
 * Class:     ipc_java_IPC
 * Method:    IPC_isMsgDefined
 * Signature: (Ljava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_ipc_java_IPC_IPC_1isMsgDefined
  (JNIEnv *, jclass, jstring);

/*
 * Class:     ipc_java_IPC
 * Method:    IPC_dataLength
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_ipc_java_IPC_IPC_1dataLength
  (JNIEnv *, jclass, jlong);

/*
 * Class:     ipc_java_IPC
 * Method:    IPC_msgInstanceName
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_ipc_java_IPC_IPC_1msgInstanceName
  (JNIEnv *, jclass, jlong);

/*
 * Class:     ipc_java_IPC
 * Method:    IPC_msgInstanceFormatter
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_ipc_java_IPC_IPC_1msgInstanceFormatter
  (JNIEnv *, jclass, jlong);

/*
 * Class:     ipc_java_IPC
 * Method:    IPC_subscribe
 * Signature: (Ljava/lang/String;Ljava/lang/String;I)I
 */
JNIEXPORT jint JNICALL Java_ipc_java_IPC_IPC_1subscribe
  (JNIEnv *, jclass, jstring, jstring, jint);

/*
 * Class:     ipc_java_IPC
 * Method:    IPC_unsubscribe
 * Signature: (Ljava/lang/String;Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_ipc_java_IPC_IPC_1unsubscribe
  (JNIEnv *, jclass, jstring, jstring);

/*
 * Class:     ipc_java_IPC
 * Method:    IPC_subscribeFD
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_ipc_java_IPC_IPC_1subscribeFD
  (JNIEnv *, jclass, jint);

/*
 * Class:     ipc_java_IPC
 * Method:    IPC_unsubscribeFD
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_ipc_java_IPC_IPC_1unsubscribeFD
  (JNIEnv *, jclass, jint);

/*
 * Class:     ipc_java_IPC
 * Method:    IPC_publish
 * Signature: (Ljava/lang/String;IJ)I
 */
JNIEXPORT jint JNICALL Java_ipc_java_IPC_IPC_1publish
  (JNIEnv *, jclass, jstring, jint, jlong);

/*
 * Class:     ipc_java_IPC
 * Method:    IPC_listen
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_ipc_java_IPC_IPC_1listen
  (JNIEnv *, jclass, jlong);

/*
 * Class:     ipc_java_IPC
 * Method:    IPC_listenClear
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_ipc_java_IPC_IPC_1listenClear
  (JNIEnv *, jclass, jlong);

/*
 * Class:     ipc_java_IPC
 * Method:    IPC_listenWait
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_ipc_java_IPC_IPC_1listenWait
  (JNIEnv *, jclass, jlong);

/*
 * Class:     ipc_java_IPC
 * Method:    IPC_handleMessage
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_ipc_java_IPC_IPC_1handleMessage
  (JNIEnv *, jclass, jlong);

/*
 * Class:     ipc_java_IPC
 * Method:    IPC_dispatch
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_ipc_java_IPC_IPC_1dispatch
  (JNIEnv *, jclass);

/*
 * Class:     ipc_java_IPC
 * Method:    IPC_perror
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_ipc_java_IPC_IPC_1perror
  (JNIEnv *, jclass, jstring);

/*
 * Class:     ipc_java_IPC
 * Method:    IPC_setCapacity
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_ipc_java_IPC_IPC_1setCapacity
  (JNIEnv *, jclass, jint);

/*
 * Class:     ipc_java_IPC
 * Method:    IPC_setMsgQueueLength
 * Signature: (Ljava/lang/String;I)I
 */
JNIEXPORT jint JNICALL Java_ipc_java_IPC_IPC_1setMsgQueueLength
  (JNIEnv *, jclass, jstring, jint);

/*
 * Class:     ipc_java_IPC
 * Method:    IPC_setMsgPriority
 * Signature: (Ljava/lang/String;I)I
 */
JNIEXPORT jint JNICALL Java_ipc_java_IPC_IPC_1setMsgPriority
  (JNIEnv *, jclass, jstring, jint);

/*
 * Class:     ipc_java_IPC
 * Method:    IPC_setVerbosity
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_ipc_java_IPC_IPC_1setVerbosity
  (JNIEnv *, jclass, jint);

/*
 * Class:     ipc_java_IPC
 * Method:    IPC_subscribeConnect
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_ipc_java_IPC_IPC_1subscribeConnect
  (JNIEnv *, jclass);

/*
 * Class:     ipc_java_IPC
 * Method:    IPC_subscribeDisconnect
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_ipc_java_IPC_IPC_1subscribeDisconnect
  (JNIEnv *, jclass);

/*
 * Class:     ipc_java_IPC
 * Method:    IPC_unsubscribeConnect
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_ipc_java_IPC_IPC_1unsubscribeConnect
  (JNIEnv *, jclass);

/*
 * Class:     ipc_java_IPC
 * Method:    IPC_unsubscribeDisconnect
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_ipc_java_IPC_IPC_1unsubscribeDisconnect
  (JNIEnv *, jclass);

/*
 * Class:     ipc_java_IPC
 * Method:    IPC_subscribeHandlerChange
 * Signature: (Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_ipc_java_IPC_IPC_1subscribeHandlerChange
  (JNIEnv *, jclass, jstring);

/*
 * Class:     ipc_java_IPC
 * Method:    IPC_unsubscribeHandlerChange
 * Signature: (Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_ipc_java_IPC_IPC_1unsubscribeHandlerChange
  (JNIEnv *, jclass, jstring);

/*
 * Class:     ipc_java_IPC
 * Method:    IPC_numHandlers
 * Signature: (Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_ipc_java_IPC_IPC_1numHandlers
  (JNIEnv *, jclass, jstring);

/*
 * Class:     ipc_java_IPC
 * Method:    IPC_respond
 * Signature: (JLjava/lang/String;IJ)I
 */
JNIEXPORT jint JNICALL Java_ipc_java_IPC_IPC_1respond
  (JNIEnv *, jclass, jlong, jstring, jint, jlong);

/*
 * Class:     ipc_java_IPC
 * Method:    IPC_queryNotify
 * Signature: (Ljava/lang/String;IJI)I
 */
JNIEXPORT jint JNICALL Java_ipc_java_IPC_IPC_1queryNotify
  (JNIEnv *, jclass, jstring, jint, jlong, jint);

/*
 * Class:     ipc_java_IPC
 * Method:    IPC_queryResponse
 * Signature: (Ljava/lang/String;IJLipc/java/IPC/queryResponse;J)I
 */
JNIEXPORT jint JNICALL Java_ipc_java_IPC_IPC_1queryResponse
  (JNIEnv *, jclass, jstring, jint, jlong, jobject, jlong);

/*
 * Class:     ipc_java_IPC
 * Method:    IPC_defineFormat
 * Signature: (Ljava/lang/String;Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_ipc_java_IPC_IPC_1defineFormat
  (JNIEnv *, jclass, jstring, jstring);

/*
 * Class:     ipc_java_IPC
 * Method:    IPC_checkMsgFormats
 * Signature: (Ljava/lang/String;Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_ipc_java_IPC_IPC_1checkMsgFormats
  (JNIEnv *, jclass, jstring, jstring);

/*
 * Class:     ipc_java_IPC
 * Method:    IPC_getContext
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_ipc_java_IPC_IPC_1getContext
  (JNIEnv *, jclass);

/*
 * Class:     ipc_java_IPC
 * Method:    IPC_setContext
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_ipc_java_IPC_IPC_1setContext
  (JNIEnv *, jclass, jlong);

/*
 * Class:     ipc_java_IPC
 * Method:    IPC_freeByteArray
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_ipc_java_IPC_IPC_1freeByteArray
  (JNIEnv *, jclass, jlong);

/*
 * Class:     ipc_java_IPC
 * Method:    IPC_msgFormatter
 * Signature: (Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_ipc_java_IPC_IPC_1msgFormatter
  (JNIEnv *, jclass, jstring);

/*
 * Class:     ipc_java_IPC
 * Method:    IPC_addTimer
 * Signature: (JJI)I
 */
JNIEXPORT jint JNICALL Java_ipc_java_IPC_IPC_1addTimer
  (JNIEnv *, jclass, jlong, jlong, jint);

/*
 * Class:     ipc_java_IPC
 * Method:    IPC_addTimerGetRef
 * Signature: (JJI)I
 */
JNIEXPORT jint JNICALL Java_ipc_java_IPC_IPC_1addTimerGetRef
  (JNIEnv *, jclass, jlong, jlong, jint);

/*
 * Class:     ipc_java_IPC
 * Method:    IPC_removeTimer
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_ipc_java_IPC_IPC_1removeTimer
  (JNIEnv *, jclass, jint);

/*
 * Class:     ipc_java_IPC
 * Method:    IPC_removeTimerByRef
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_ipc_java_IPC_IPC_1removeTimerByRef
  (JNIEnv *, jclass, jlong);

/*
 * Class:     ipc_java_IPC
 * Method:    IPC_timeInMillis
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_ipc_java_IPC_IPC_1timeInMillis
  (JNIEnv *, jclass);

#ifdef __cplusplus
}
#endif
#endif
/* Header for class ipc_java_IPC_handlerHashData */

#ifndef _Included_ipc_java_IPC_handlerHashData
#define _Included_ipc_java_IPC_handlerHashData
#ifdef __cplusplus
extern "C" {
#endif
#ifdef __cplusplus
}
#endif
#endif
/* Header for class ipc_java_IPC_queryResponse */

#ifndef _Included_ipc_java_IPC_queryResponse
#define _Included_ipc_java_IPC_queryResponse
#ifdef __cplusplus
extern "C" {
#endif
#ifdef __cplusplus
}
#endif
#endif
/* Header for class ipc_java_IPC_TIMER_REF */

#ifndef _Included_ipc_java_IPC_TIMER_REF
#define _Included_ipc_java_IPC_TIMER_REF
#ifdef __cplusplus
extern "C" {
#endif
#ifdef __cplusplus
}
#endif
#endif
/* Header for class ipc_java_IPC_TIMER_HANDLER_TYPE */

#ifndef _Included_ipc_java_IPC_TIMER_HANDLER_TYPE
#define _Included_ipc_java_IPC_TIMER_HANDLER_TYPE
#ifdef __cplusplus
extern "C" {
#endif
#ifdef __cplusplus
}
#endif
#endif
/* Header for class ipc_java_IPC_CHANGE_HANDLE_TYPE */

#ifndef _Included_ipc_java_IPC_CHANGE_HANDLE_TYPE
#define _Included_ipc_java_IPC_CHANGE_HANDLE_TYPE
#ifdef __cplusplus
extern "C" {
#endif
#ifdef __cplusplus
}
#endif
#endif
/* Header for class ipc_java_IPC_CONNECT_HANDLE_TYPE */

#ifndef _Included_ipc_java_IPC_CONNECT_HANDLE_TYPE
#define _Included_ipc_java_IPC_CONNECT_HANDLE_TYPE
#ifdef __cplusplus
extern "C" {
#endif
#ifdef __cplusplus
}
#endif
#endif
/* Header for class ipc_java_IPC_FD_HANDLER_TYPE */

#ifndef _Included_ipc_java_IPC_FD_HANDLER_TYPE
#define _Included_ipc_java_IPC_FD_HANDLER_TYPE
#ifdef __cplusplus
extern "C" {
#endif
#ifdef __cplusplus
}
#endif
#endif
/* Header for class ipc_java_IPC_HANDLER_TYPE */

#ifndef _Included_ipc_java_IPC_HANDLER_TYPE
#define _Included_ipc_java_IPC_HANDLER_TYPE
#ifdef __cplusplus
extern "C" {
#endif
#ifdef __cplusplus
}
#endif
#endif
/* Header for class ipc_java_IPC_IPC_CONTEXT */

#ifndef _Included_ipc_java_IPC_IPC_CONTEXT
#define _Included_ipc_java_IPC_IPC_CONTEXT
#ifdef __cplusplus
extern "C" {
#endif
#ifdef __cplusplus
}
#endif
#endif
/* Header for class ipc_java_IPC_MSG_INSTANCE */

#ifndef _Included_ipc_java_IPC_MSG_INSTANCE
#define _Included_ipc_java_IPC_MSG_INSTANCE
#ifdef __cplusplus
extern "C" {
#endif
#ifdef __cplusplus
}
#endif
#endif