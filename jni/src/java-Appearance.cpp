#include <jni.h>
#include <iostream>
#include <sstream>
#include "java-m3g.hpp"
#include "java-m3g-common.hpp"
#include "m3g/m3g.hpp"
using namespace std;
using namespace m3g;

/*
 * Class:     org_karlsland_m3g_Appearance
 * Method:    jni_initialize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Appearance_jni_1initialize
  (JNIEnv* env, jobject thiz)
{
    //cout << "Java-Appearance: initilize is called.\n";
    Appearance* app = NULL;
    __TRY__;
    app = new Appearance ();
    __CATCH__;
    if (env->ExceptionOccurred ()) {
        return;
    }
    setNativePointer  (env, thiz, app);
    bindJavaReference (env, thiz, app);
}

/*
 * Class:     org_karlsland_m3g_Appearance
 * Method:    jni_finalize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Appearance_jni_1finalize
  (JNIEnv* env, jobject thiz)
{
    //cout << "Java-Appearance: finalize is called.\n";
    Appearance* app = (Appearance*)getNativePointer (env, thiz);
    releaseJavaReference (env, app);
    addUsedObject (app);
}

/*
 * Class:     org_karlsland_m3g_Appearance
 * Method:    jni_getCompositingMode
 * Signature: ()Lorg/karlsland/m3g/CompositingMode;
 */
JNIEXPORT jobject JNICALL Java_org_karlsland_m3g_Appearance_jni_1getCompositingMode
  (JNIEnv* env, jobject thiz)
{
    //cout << "Java-Appearance: getCompositingMode is called.\n";
    Appearance*      app   = (Appearance*)getNativePointer (env, thiz);
    CompositingMode* cmode = NULL;
    __TRY__;
    cmode = app->getCompositingMode ();
    __CATCH__;
    return getJavaReference (env, cmode);
}

/*
 * Class:     org_karlsland_m3g_Appearance
 * Method:    jni_getFog
 * Signature: ()Lorg/karlsland/m3g/Fog;
 */
JNIEXPORT jobject JNICALL Java_org_karlsland_m3g_Appearance_jni_1getFog
  (JNIEnv* env, jobject thiz)
{
    //cout << "Java-Appearance: getFog is called.\n";
    Appearance* app = (Appearance*)getNativePointer (env, thiz);
    Fog*        fog = NULL;
    __TRY__;
    fog = app->getFog ();
    __CATCH__;
    return getJavaReference (env, fog);
}

/*
 * Class:     org_karlsland_m3g_Appearance
 * Method:    jni_getLayer
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_karlsland_m3g_Appearance_jni_1getLayer
  (JNIEnv* env, jobject thiz)
{
    //cout << "Java-Appearance: getLayer is called.\n";
    Appearance* app = (Appearance*)getNativePointer (env, thiz);
    int layer = 0;
    __TRY__;
    layer = app->getLayer ();
    __CATCH__;
    return layer;
}

/*
 * Class:     org_karlsland_m3g_Appearance
 * Method:    jni_getMaterial
 * Signature: ()Lorg/karlsland/m3g/Material;
 */
JNIEXPORT jobject JNICALL Java_org_karlsland_m3g_Appearance_jni_1getMaterial
  (JNIEnv* env, jobject thiz)
{
    //cout << "Java-Appearance: getMaterial is called.\n";
    Appearance* app = (Appearance*)getNativePointer (env, thiz);
    Material*   mat = NULL;
    __TRY__;
    mat = app->getMaterial ();
    __CATCH__;
    return getJavaReference (env, mat);
}

/*
 * Class:     org_karlsland_m3g_Appearance
 * Method:    jni_getPolygonMode
 * Signature: ()Lorg/karlsland/m3g/PolygonMode;
 */
JNIEXPORT jobject JNICALL Java_org_karlsland_m3g_Appearance_jni_1getPolygonMode
  (JNIEnv* env, jobject thiz)
{
    //cout << "Java-Appearance: getPolygonMode is called.\n";
    Appearance*  app   = (Appearance*)getNativePointer (env, thiz);
    PolygonMode* pmode = NULL;
    __TRY__;
    pmode = app->getPolygonMode ();
    __CATCH__;
    return getJavaReference (env, pmode);
}

/*
 * Class:     org_karlsland_m3g_Appearance
 * Method:    jni_getTexture
 * Signature: (I)Lorg/karlsland/m3g/Texture2D;
 */
JNIEXPORT jobject JNICALL Java_org_karlsland_m3g_Appearance_jni_1getTexture
  (JNIEnv* env, jobject thiz, jint index)
{
    //cout << "Java-Appearance: getTexture is called.\n";
    Appearance* app = (Appearance*)getNativePointer (env, thiz);
    Texture2D*  tex = NULL;
    __TRY__;
    tex = app->getTexture (index);
    __CATCH__;
    return getJavaReference (env, tex);
}


/*
 * Class:     org_karlsland_m3g_Appearance
 * Method:    jni_setCompositingMode
 * Signature: (Lorg/karlsland/m3g/CompositingMode;)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Appearance_jni_1setCompositingMode
  (JNIEnv* env, jobject thiz, jobject compositingMode)
{
    //cout << "Java-Appearance: getCompositingMode is called.\n";
    Appearance*      app   = (Appearance*)getNativePointer (env, thiz);
    CompositingMode* cmode = (CompositingMode*)getNativePointer (env, compositingMode);
    __TRY__;
    app->setCompositingMode (cmode);
    __CATCH__;
}

/*
 * Class:     org_karlsland_m3g_Appearance
 * Method:    jni_setFog
 * Signature: (Lorg/karlsland/m3g/Fog;)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Appearance_jni_1setFog
  (JNIEnv* env, jobject thiz, jobject fog)
{
    //cout << "Java-Appearance: setFog is called.\n";
    Appearance* app = (Appearance*)getNativePointer (env, thiz);
    Fog*        fg  = (Fog*)getNativePointer (env, fog);
    __TRY__;
    app->setFog (fg);
    __CATCH__;
}

/*
 * Class:     org_karlsland_m3g_Appearance
 * Method:    jni_setLayer
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Appearance_jni_1setLayer
  (JNIEnv* env, jobject thiz, jint layer)
{
    //cout << "Java-Appearance: setLayer is called.\n";
    Appearance* app = (Appearance*)getNativePointer (env, thiz);
    __TRY__;
    app->setLayer (layer);
    __CATCH__;
}

/*
 * Class:     org_karlsland_m3g_Appearance
 * Method:    jni_setMaterial
 * Signature: (Lorg/karlsland/m3g/Material;)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Appearance_jni_1setMaterial
  (JNIEnv* env, jobject thiz, jobject material)
{
    //cout << "Java-Appearance: setMaterial is called.\n";
    Appearance* app = (Appearance*)getNativePointer (env, thiz);
    Material*   mat = (Material*)getNativePointer (env, material);
    __TRY__;
    app->setMaterial (mat);
    __CATCH__;
}

/*
 * Class:     org_karlsland_m3g_Appearance
 * Method:    jni_setPolygonMode
 * Signature: (Lorg/karlsland/m3g/PolygonMode;)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Appearance_jni_1setPolygonMode
  (JNIEnv* env, jobject thiz, jobject polygonMode)
{
    //cout << "Java-Appearance: setPolygonMode is called.\n";
    Appearance*  app   = (Appearance*)getNativePointer (env, thiz);
    PolygonMode* pmode = (PolygonMode*)getNativePointer (env, polygonMode);
    __TRY__;
    app->setPolygonMode (pmode);
    __CATCH__;
}

/*
 * Class:     org_karlsland_m3g_Appearance
 * Method:    jni_setTexture
 * Signature: (ILorg/karlsland/m3g/Texture2D;)V
 */
JNIEXPORT void JNICALL Java_org_karlsland_m3g_Appearance_jni_1setTexture
  (JNIEnv* env, jobject thiz, jint index, jobject texture)
{
    //cout << "Java-Appearance: setTexture is called.\n";
    Appearance* app = (Appearance*)getNativePointer (env, thiz);
    Texture2D*  tex = (Texture2D*)getNativePointer (env, texture);
    __TRY__;
    app->setTexture (index, tex);
    __CATCH__;
}

/*
 * Class:     org_karlsland_m3g_Appearance
 * Method:    jni_print
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_karlsland_m3g_Appearance_jni_1print
  (JNIEnv* env, jobject thiz)
{
    //cout << "Java-Appearance: print is called.\n";
    Appearance*   app = (Appearance*)getNativePointer (env, thiz);
    ostringstream oss;
    __TRY__;
    app->print (oss);
    __CATCH__;
    return env->NewStringUTF (oss.str().c_str());
}

void Java_new_Appearance          (JNIEnv* env, m3g::Object3D* obj)
{
    //cout << "Java-Loader: build java Appearance.\n";
    Appearance* app     = dynamic_cast<Appearance*>(obj);
    jobject     app_obj = allocJavaObject (env, "org/karlsland/m3g/Appearance");
    setNativePointer  (env, app_obj, app);
    bindJavaReference (env, app_obj, app);

    Java_build_Object3D   (env, app_obj, app);
    Java_build_Appearance (env, app_obj, app);

    env->DeleteLocalRef (app_obj);
}


void Java_build_Appearance (JNIEnv* env, jobject app_obj, m3g::Appearance* app)
{
    jclass   app_class           = env->GetObjectClass (app_obj);
    jfieldID app_polygonMode     = env->GetFieldID     (app_class, "polygonMode"    , "Lorg/karlsland/m3g/PolygonMode;");
    jfieldID app_compositingMode = env->GetFieldID     (app_class, "compositingMode", "Lorg/karlsland/m3g/CompositingMode;");
    jfieldID app_material        = env->GetFieldID     (app_class, "material"       , "Lorg/karlsland/m3g/Material;");
    jfieldID app_textures        = env->GetFieldID     (app_class, "textures"       , "Ljava/util/List;");
    jfieldID app_fog             = env->GetFieldID     (app_class, "fog"            , "Lorg/karlsland/m3g/Fog;");


    PolygonMode* pmode = app->getPolygonMode ();
    if (pmode) {
        env->SetObjectField (app_obj, app_polygonMode, getJavaReference(env, pmode));
    }

    CompositingMode* cmode = app->getCompositingMode ();
    if (cmode) {
        env->SetObjectField (app_obj, app_compositingMode, getJavaReference(env, cmode));
    }

    Material* mat = app->getMaterial ();
    if (mat) {
        env->SetObjectField (app_obj, app_material, getJavaReference(env, mat));
    }

    jclass    textures_class = env->FindClass   ("java/util/ArrayList");
    jmethodID textures_init  = env->GetMethodID (textures_class, "<init>", "()V");
    jmethodID textures_add   = env->GetMethodID (textures_class, "add", "(Ljava/lang/Object;)Z");
    jobject   textures_obj   = env->NewObject   (textures_class, textures_init);

    for (int i = 0; i < MAX_TEXTURE_UNITS; i++) {
        Texture2D* tex = app->getTexture (i);
        if (tex) {
            env->CallObjectMethod (textures_obj, textures_add, getJavaReference(env, tex));
        } else {
            env->CallObjectMethod (textures_obj, textures_add, (jobject)0);
        }
    }
    env->SetObjectField (app_obj, app_textures, textures_obj);

    Fog* fog = app->getFog ();
    if (fog) {
        env->SetObjectField (app_obj, app_fog, getJavaReference(env, fog));
    }

    env->DeleteLocalRef (app_class);
    env->DeleteLocalRef (textures_class);
    env->DeleteLocalRef (textures_obj);
}

