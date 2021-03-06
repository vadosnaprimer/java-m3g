package org.karlsland.m3g;

public class Fog extends Object3D {

    public final static int EXPONENTIAL = 80;
    public final static int LINEAR      = 81;

    native private void   jni_initialize      ();
    native private void   jni_finalize        ();
    native private int    jni_getColor        ();
    native private float  jni_getDensity      ();
    native private float  jni_getFarDistance  ();
    native private int    jni_getMode         ();
    native private float  jni_getNearDistance ();
    native private void   jni_setColor        (int   RGB);
    native private void   jni_setDensity      (float density);
    native private void   jni_setLinear       (float near, float far);
    native private void   jni_setMode         (int   mode);
    native private String jni_print           ();

    public Fog () {
        jni_initialize ();
    }

    @Override
    protected void finalize () {
        jni_finalize ();
    }

    public int getColor () {
        return jni_getColor ();
    }

    public float getDensity () {
        return jni_getDensity ();
    }

    public float getFarDistance () {
        return jni_getFarDistance ();
    }

    public int getMode () {
        return jni_getMode ();
    }

    public float getNearDistance () {
        return jni_getNearDistance ();
    }

    public void setColor (int RGB) {
        jni_setColor (RGB);
    }

    public void setDensity (float density) {
        jni_setDensity (density);
    }

    public void setLinear (float near, float far) {
        jni_setLinear (near, far);
    }

    public void setMode (int mode) {
        jni_setMode (mode);
    }

    @Override
    public String toString () {
        return jni_print ();
    }


}