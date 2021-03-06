package org.karlsland.m3g;


public class Sprite3D extends Node {

    native private void       jni_initialize    (boolean scaled, Image2D image, Appearance appearance);
    native private void       jni_finalize      ();
    native private Appearance jni_getAppearance ();
    native private int        jni_getCropHeight ();
    native private int        jni_getCropWidth  ();
    native private int        jni_getCropX      ();
    native private int        jni_getCropY      ();
    native private Image2D    jni_getImage      ();
    native private boolean    jni_isScaled      ();
    native private void       jni_setAppearance (Appearance appearance);
    native private void       jni_setCrop       (int cropX, int cropY, int width, int height);
    native private void       jni_setImage      (Image2D image);
    native private String     jni_print         ();

    private Appearance appearance;
    private Image2D    image;

    public Sprite3D (boolean scaled, Image2D image, Appearance appearance) {
        this.image      = image;
        this.appearance = appearance;
        jni_initialize (scaled, image, appearance);        	
     }
    
    @Override
    protected void finalize () {
        jni_finalize ();
    }

    public Appearance getAppearance () {
        return jni_getAppearance ();
    }

    public int getCropHeight () {
        return jni_getCropHeight ();
    }

    public int getCropWidth () {
        return jni_getCropWidth ();
    }

    public int getCropX () {
        return jni_getCropX ();
    }

    public int getCropY () {
        return jni_getCropY ();
    }
    
    public Image2D getImage () {
        return jni_getImage ();
    }

    public boolean isScaled () {
        return jni_isScaled ();
    }

    public void setAppearance (Appearance appearance) {
        jni_setAppearance (appearance);
        this.appearance = appearance;
    }

    public void setCrop (int cropX, int cropY, int width, int height) {
        jni_setCrop (cropX, cropY, width, height);
    }

    public void setImage (Image2D image) {
        jni_setImage (image);
        this.image = image;
    }

    public String toString () {
        return jni_print ();
    }

}