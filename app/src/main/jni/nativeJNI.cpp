//
// Created by zhangzhuo on 2016/5/5 0005.
//
#include <jni.h>


extern "C" JNIEXPORT jint JNI_OnLoad(JavaVM *vm, void *reserved) {

    JNIEnv& env =  GetEnv(*vm,  jni_version_1_6);

    jclass& nativeMethod =  FindClass(env, "kevin4z/dynamicjni/NativeMethod");

    #define MAKE_NATIVE_METHOD(name, sig)  MakeNativeMethod<decltype(name), name>( #name, sig )
    RegisterNatives(env, nativeMethod, MAKE_NATIVE_METHOD(nativeAddTest, "(II)I"));

    return JNI_VERSION_1_6;
}
static jint nativeAddTest(JNIEnv *env, jobject thiz, jint a, jint b) {
    int result = a + b;
    return result;
}
