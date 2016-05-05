package kevin4z.dynamicjni;

public class NativeMethod {

    static {
        System.loadLibrary("test");
    }

    //
    // JNI methods
    //
    native int nativeAddTest(int a,int b);
}
