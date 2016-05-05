package kevin4z.dynamicjni;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {

    NativeMethod mNativeMethod = new NativeMethod();

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        int sum = mNativeMethod.nativeAddTest(10,20);
        TextView tv = new TextView(this);
        tv.setText("2 + 3 = " + Integer.toString(sum));
        setContentView(tv);
    }
}
