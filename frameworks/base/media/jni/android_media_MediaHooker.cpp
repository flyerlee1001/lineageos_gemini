/**
* add by flyer.
*/

#define LOG_NDEBUG 0
#define LOG_TAG "MediaHooker-JNI"
#include <utils/Log.h>

#include "media/MediaHooker.h"
#include "android_runtime/AndroidRuntime.h"
#include "android_runtime/Log.h"
#include "android_util_Binder.h"
#include "jni.h"
#include <nativehelper/JNIHelp.h>

#include <nativehelper/ScopedLocalRef.h>

namespace android {

struct fields_t {
    jfieldID context;
};

static fields_t gFields;
static Mutex sLock;

}
using namespace android;

static sp<MediaHooker> getMediaHooker(JNIEnv* env, jobject thiz)
{
    Mutex::Autolock l(sLock);
    MediaHooker* const p = (MediaHooker*)env->GetLongField(thiz, gFields.context);
    return sp<MediaHooker>(p);
}

static sp<MediaHooker> setMediaHooker(JNIEnv* env, jobject thiz, const sp<MediaHooker>& hooker)
{
    Mutex::Autolock l(sLock);
    sp<MediaHooker> old = (MediaHooker*)env->GetLongField(thiz, gFields.context);
    if (hooker.get()) {
        hooker->incStrong((void*)setMediaHooker);
    }
    if (old != 0) {
        old->decStrong((void*)setMediaHooker);
    }
    env->SetLongField(thiz, gFields.context, (jlong)hooker.get());
    return old;
}

static void android_media_MediaHooker_native_setup(JNIEnv *env, jobject thiz)
{
	ALOGV("android_media_MediaHooker_native_setup");
	sp<MediaHooker> mh = new MediaHooker();
	if (mh == NULL) {
        jniThrowException(env, "java/lang/RuntimeException", "Out of memory");
        return;
    }
	setMediaHooker(env, thiz, mh);
}

static void android_media_MediaHooker_native_init(JNIEnv *env)
{
    jclass clazz;

    clazz = env->FindClass("android/media/MediaHooker");
    if (clazz == NULL) {
        return;
    }

    gFields.context = env->GetFieldID(clazz, "mNativeContext", "J");
    if (gFields.context == NULL) {
        return;
    }

 //   fields.post_event = env->GetStaticMethodID(clazz, "postEventFromNative",
 //                                              "(Ljava/lang/Object;IIILjava/lang/Object;)V");
 //   if (fields.post_event == NULL) {
 //       return;
 //   }
}


static void android_media_MediaHooker_release(JNIEnv *env, jobject thiz) {
	ALOGV("android_media_MediaHooker_release");
    setMediaHooker(env, thiz, NULL);
}

static void android_media_MediaHooker_start(JNIEnv *env, jobject thiz) {
	ALOGV("android_media_MediaHooker_start");
    sp<MediaHooker> mh = getMediaHooker(env, thiz);
    if (mh == NULL ) {
        jniThrowException(env, "java/lang/IllegalStateException", NULL);
        return;
    }
    mh->start();
}

static void android_media_MediaHooker_stop(JNIEnv *env, jobject thiz) {
	ALOGV("android_media_MediaHooker_stop");
    android_media_MediaHooker_release(env, thiz);
}

static void android_media_MediaHooker_native_finalize(
        JNIEnv *env, jobject thiz) {
    android_media_MediaHooker_release(env, thiz);
}

static const JNINativeMethod gMethods[] = {
    { "start", "()V", (void *)android_media_MediaHooker_start },
    { "stop", "()V", (void *)android_media_MediaHooker_stop },
    { "release", "()V", (void *)android_media_MediaHooker_release },
    { "native_init", "()V", (void *)android_media_MediaHooker_native_init },
    { "native_setup", "()V", (void *)android_media_MediaHooker_native_setup },
    { "native_finalize", "()V", (void *)android_media_MediaHooker_native_finalize },
};

int register_android_media_MediaHooker(JNIEnv *env) {
    return AndroidRuntime::registerNativeMethods(env,
                "android/media/MediaHooker", gMethods, NELEM(gMethods));
}