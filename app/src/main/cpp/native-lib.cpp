#include <jni.h>

static int counter = 0;

extern "C" JNIEXPORT jint
JNICALL
Java_com_sunil_ndkcounter_MainActivity_counterFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    counter++;
    return counter;
}
