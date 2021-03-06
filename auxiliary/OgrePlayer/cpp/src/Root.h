/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class vib_auxiliary_player_ogre_natives_Root */

#ifndef _Included_vib_auxiliary_player_ogre_natives_Root
#define _Included_vib_auxiliary_player_ogre_natives_Root
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     vib_auxiliary_player_ogre_natives_Root
 * Method:    _instanciate
 * Signature: (Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_vib_auxiliary_player_ogre_natives_Root__1instanciate
  (JNIEnv *, jclass, jstring, jstring, jstring);

/*
 * Class:     vib_auxiliary_player_ogre_natives_Root
 * Method:    _renderOneFrame
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_vib_auxiliary_player_ogre_natives_Root__1renderOneFrame
  (JNIEnv *, jobject, jlong);

/*
 * Class:     vib_auxiliary_player_ogre_natives_Root
 * Method:    _getSceneManager
 * Signature: (JLjava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_vib_auxiliary_player_ogre_natives_Root__1getSceneManager
  (JNIEnv *, jobject, jlong, jstring);

/*
 * Class:     vib_auxiliary_player_ogre_natives_Root
 * Method:    _setRenderSystem
 * Signature: (JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_vib_auxiliary_player_ogre_natives_Root__1setRenderSystem
  (JNIEnv *, jobject, jlong, jstring);

/*
 * Class:     vib_auxiliary_player_ogre_natives_Root
 * Method:    _shutdown
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_vib_auxiliary_player_ogre_natives_Root__1shutdown
  (JNIEnv *, jobject, jlong);

/*
 * Class:     vib_auxiliary_player_ogre_natives_Root
 * Method:    _createSceneManager
 * Signature: (JLjava/lang/String;Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_vib_auxiliary_player_ogre_natives_Root__1createSceneManager
  (JNIEnv *, jobject, jlong, jstring, jstring);

/*
 * Class:     vib_auxiliary_player_ogre_natives_Root
 * Method:    __fireFrameStarted
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_vib_auxiliary_player_ogre_natives_Root__1_1fireFrameStarted
  (JNIEnv *, jobject, jlong);

/*
 * Class:     vib_auxiliary_player_ogre_natives_Root
 * Method:    __fireFrameEnded
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_vib_auxiliary_player_ogre_natives_Root__1_1fireFrameEnded
  (JNIEnv *, jobject, jlong);

/*
 * Class:     vib_auxiliary_player_ogre_natives_Root
 * Method:    _detachRenderTarget
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_vib_auxiliary_player_ogre_natives_Root__1detachRenderTarget
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     vib_auxiliary_player_ogre_natives_Root
 * Method:    _initialise
 * Signature: (JZLjava/lang/String;Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_vib_auxiliary_player_ogre_natives_Root__1initialise
  (JNIEnv *, jobject, jlong, jboolean, jstring, jstring);

/*
 * Class:     vib_auxiliary_player_ogre_natives_Root
 * Method:    _createRenderWindow
 * Signature: (JLjava/lang/String;IIZJ)J
 */
JNIEXPORT jlong JNICALL Java_vib_auxiliary_player_ogre_natives_Root__1createRenderWindow
  (JNIEnv *, jobject, jlong, jstring, jint, jint, jboolean, jlong);

/*
 * Class:     vib_auxiliary_player_ogre_natives_Root
 * Method:    delete
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_vib_auxiliary_player_ogre_natives_Root_delete
  (JNIEnv *, jobject, jlong);

#ifdef __cplusplus
}
#endif
#endif
