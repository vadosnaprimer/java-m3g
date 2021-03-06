#include <jni.h>
#include <iostream>
#include <sstream>
#include "java-m3g.hpp"
#include "java-m3g-common.hpp"
#include "m3g/m3g.hpp"
using namespace std;
using namespace m3g;

/*
 * Class:     org_karlsland_m3g_PolygonMode
 * Method:    jni_initialize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_PolygonMode_jni_1initialize
  (JNIEnv* env, jobject thiz)
{
    //cout << "Java-PolygonMode: initialize is called.\n";
    PolygonMode* pmode = NULL;
    __TRY__;
    pmode = new PolygonMode ();
    __CATCH__;
    if (env->ExceptionOccurred ()) {
        return;
    }
    setNativePointer  (env, thiz, pmode);
    bindJavaReference (env, thiz, pmode);
}

/*
 * Class:     org_karlsland_m3g_PolygonMode
 * Method:    jni_finalize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_PolygonMode_jni_1finalize
  (JNIEnv* env, jobject thiz)
{
    //cout << "Java-PolygonMode: finalize is called.\n";
    PolygonMode* pmode = (PolygonMode*)getNativePointer (env, thiz);
    releaseJavaReference (env, pmode);
    addUsedObject (pmode);
}

/*
 * Class:     org_karlsland_m3g_PolygonMode
 * Method:    jni_getCulling
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_PolygonMode_jni_1getCulling
  (JNIEnv* env, jobject thiz)
{
    //cout << "Java-PolygonMode: getCulling is called.\n";
    PolygonMode* pmode = (PolygonMode*)getNativePointer (env, thiz);
    int culling = 0;
    __TRY__;
    culling = pmode->getCulling ();
    __CATCH__;
    return culling;
}

/*
 * Class:     org_karlsland_m3g_PolygonMode
 * Method:    jni_getShading
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_PolygonMode_jni_1getShading
  (JNIEnv* env, jobject thiz)
{
    //cout << "Java-PolygonMode: getShading is called.\n";
    PolygonMode* pmode = (PolygonMode*)getNativePointer (env, thiz);
    int shading = 0;
    __TRY__;
    shading = pmode->getShading ();
    __CATCH__;
    return shading;
}

/*
 * Class:     org_karlsland_m3g_PolygonMode
 * Method:    jni_getWinding
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_PolygonMode_jni_1getWinding
  (JNIEnv* env, jobject thiz)
{
    //cout << "Java-PolygonMode: getWinding is called.\n";
    PolygonMode* pmode = (PolygonMode*)getNativePointer (env, thiz);
    int winding = 0;
    __TRY__;
    winding = pmode->getWinding ();
    __CATCH__;
    return winding;
}

/*
 * Class:     org_karlsland_m3g_PolygonMode
 * Method:    jni_isLocalCameraLightingEnabled
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_org_karlsland_m3g_PolygonMode_jni_1isLocalCameraLightingEnabled
  (JNIEnv* env, jobject thiz)
{
    //cout << "Java-PolygonMode: isLocalCameraLightingEnabled is called.\n";
    PolygonMode* pmode = (PolygonMode*)getNativePointer (env, thiz);
    bool enabled = false;
    __TRY__;
    enabled = pmode->isLocalCameraLightingEnabled ();
    __CATCH__;
    return enabled;
}

/*
 * Class:     org_karlsland_m3g_PolygonMode
 * Method:    jni_isPerspectiveCorrectionEnabled
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_org_karlsland_m3g_PolygonMode_jni_1isPerspectiveCorrectionEnabled
  (JNIEnv* env, jobject thiz)
{
    //cout << "Java-PolygonMode: isPerspectiveCorrectionEnabled is called.\n";
    PolygonMode* pmode = (PolygonMode*)getNativePointer (env, thiz);
    bool enabled = false;
    __TRY__;
    enabled = pmode->isPerspectiveCorrectionEnabled ();
    __CATCH__;
    return enabled;
}

/*
 * Class:     org_karlsland_m3g_PolygonMode
 * Method:    jni_isTwoSidedLightingEnabled
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_org_karlsland_m3g_PolygonMode_jni_1isTwoSidedLightingEnabled
  (JNIEnv* env, jobject thiz)
{
    //cout << "Java-PolygonMode: isTwoSidedLightingEnabled is called.\n";
    PolygonMode* pmode = (PolygonMode*)getNativePointer (env, thiz);
    bool enabled = false;
    __TRY__;
    enabled = pmode->isTwoSidedLightingEnabled ();
    __CATCH__;
    return enabled;
}

/*
 * Class:     org_karlsland_m3g_PolygonMode
 * Method:    jni_setCulling
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_PolygonMode_jni_1setCulling
  (JNIEnv* env, jobject thiz, jint culling)
{
    //cout << "Java-PolygonMode: setCulling is called.\n";
    PolygonMode* pmode = (PolygonMode*)getNativePointer (env, thiz);
    __TRY__;
    pmode->setCulling (culling);
    __CATCH__;
}

/*
 * Class:     org_karlsland_m3g_PolygonMode
 * Method:    jni_setLocalCameraLightingEnable
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_PolygonMode_jni_1setLocalCameraLightingEnable
  (JNIEnv* env, jobject thiz, jboolean enable)
{
    //cout << "Java-PolygonMode: setLocalCameraLighting is called.\n";
    PolygonMode* pmode = (PolygonMode*)getNativePointer (env, thiz);
    __TRY__;
    pmode->setLocalCameraLightingEnable (enable);
    __CATCH__;
}

/*
 * Class:     org_karlsland_m3g_PolygonMode
 * Method:    jni_setPerspectiveCorrectionEnable
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_PolygonMode_jni_1setPerspectiveCorrectionEnable
  (JNIEnv* env, jobject thiz, jboolean enable)
{
    //cout << "Java-PolygonMode: setPerspectiveCorrectionEnable is called.\n";
    PolygonMode* pmode = (PolygonMode*)getNativePointer (env, thiz);
    __TRY__;
    pmode->setPerspectiveCorrectionEnable (enable);
    __CATCH__;
}

/*
 * Class:     org_karlsland_m3g_PolygonMode
 * Method:    jni_setShading
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_PolygonMode_jni_1setShading
  (JNIEnv* env, jobject thiz, jint shading)
{
    //cout << "Java-PolygonMode: setShading is called.\n";
    PolygonMode* pmode = (PolygonMode*)getNativePointer (env, thiz);
    __TRY__;
    pmode->setShading (shading);
    __CATCH__;
}

/*
 * Class:     org_karlsland_m3g_PolygonMode
 * Method:    jni_setTwoSidedLightingEnable
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_PolygonMode_jni_1setTwoSidedLightingEnable
  (JNIEnv* env, jobject thiz, jboolean enable)
{
    //cout << "Java-PolygonMode: setTwoSidedLightingEnable is called.\n";
    PolygonMode* pmode = (PolygonMode*)getNativePointer (env, thiz);
    __TRY__;
    pmode->setTwoSidedLightingEnable (enable);
    __CATCH__;
}

/*
 * Class:     org_karlsland_m3g_PolygonMode
 * Method:    jni_setWinding
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_PolygonMode_jni_1setWinding
  (JNIEnv* env, jobject thiz, jint winding)
{
    //cout << "Java-PolygonMode: setWinding is called.\n";
    PolygonMode* pmode = (PolygonMode*)getNativePointer (env, thiz);
    __TRY__;
    pmode->setWinding (winding);
    __CATCH__;
}

/*
 * Class:     org_karlsland_m3g_PolygonMode
 * Method:    jni_print
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_karlsland_m3g_PolygonMode_jni_1print
  (JNIEnv* env, jobject thiz)
{
    //cout << "Java-PolygonMode: print is called.\n";
    PolygonMode* pmode = (PolygonMode*)getNativePointer (env, thiz);
    ostringstream oss;
    __TRY__;
    pmode->print (oss);
    __CATCH__;
    return env->NewStringUTF (oss.str().c_str());
}


void Java_new_PolygonMode         (JNIEnv* env, m3g::Object3D* obj)
{
    //cout << "Java-Loader: build java PolygonMode.\n";
    PolygonMode* pmode     = dynamic_cast<PolygonMode*>(obj);
    jobject      pmode_obj = allocJavaObject (env, "org/karlsland/m3g/PolygonMode");
    setNativePointer  (env, pmode_obj, pmode);
    bindJavaReference (env, pmode_obj, pmode);

    Java_build_Object3D    (env, pmode_obj, pmode);
    Java_build_PolygonMode (env, pmode_obj, pmode);

    env->DeleteLocalRef (pmode_obj);
}

void Java_build_PolygonMode (JNIEnv* env, jobject pmode_obj, m3g::PolygonMode* pmode)
{
    // nothing to do
}
