package android.media;

public final class MediaHooker {

    private long mNativeContext;

	public MediaHooker() {
		native_setup();
	}

	private static native final void native_init();
    private native final void native_setup();
    private native final void native_finalize();

    static {
        System.loadLibrary("media_jni");
        native_init();
    }

	public native void start();

	public native void stop();

	public native void release();

	@Override
    protected void finalize() {
        native_finalize();
    }
}