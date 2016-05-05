APP_ABI := x86 armeabi armeabi-v7a
NDK_TOOLCHAIN_VERSION := 4.9
# APP_STL := stlport_shared  --> does not seem to contain C++11 features
APP_STL := stlport_static

# Enable c++11 extentions in source code
APP_CPPFLAGS += -std=c++11