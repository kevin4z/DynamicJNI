LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE    := test
LOCAL_SRC_FILES := nativeJNI.cpp
LOCAL_C_INCLUDES += $(JAVA_HOME)/include

include $(BUILD_SHARED_LIBRARY)