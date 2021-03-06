package org.karlsland.m3g.sample;

import javax.media.opengl.GL;
import javax.media.opengl.GLAutoDrawable;
import javax.media.opengl.GLEventListener;



public class GLRenderer implements GLEventListener {

   private GL gl;

   public void init(GLAutoDrawable drawable) {
       // 初期化処理
       gl = drawable.getGL ();
       gl.glEnable (GL.GL_DEPTH_TEST);
   }

   public void reshape(GLAutoDrawable drawable,
                       int x, int y, 
                       int width, int height) {
       // 描画領域変更処理
   }

   public void display(GLAutoDrawable drawable) {
       // 描画処理
       gl.glClearColor (0.5f,0.5f,0.5f,1);
       gl.glClear (GL.GL_COLOR_BUFFER_BIT | GL.GL_DEPTH_BUFFER_BIT);

       gl.glBegin (GL.GL_TRIANGLE_STRIP);
       gl.glColor3f  (0,0,1);
       gl.glVertex3f (0.5f, -0.5f, 0);
       gl.glVertex3f (0.5f,  0.5f, 0);
       gl.glVertex3f (-0.5f,-0.5f, 0);
       gl.glVertex3f (-0.5f, 0.5f, 0);
       gl.glEnd ();
   }

   public void displayChanged(GLAutoDrawable drawable,
                              boolean modeChanged,
                              boolean deviceChanged) {
       // 
   }

   public void keybord (int key) {
       System.out.println (key+"のキーが押された");
       if (key == 'q') {
           System.exit (0);
       }
   }


}



