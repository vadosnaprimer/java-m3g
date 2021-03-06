package org.karlsland.m3g.test;

import static org.junit.Assert.*;

import org.junit.Test;
import org.karlsland.m3g.Background;
import org.karlsland.m3g.Camera;
import org.karlsland.m3g.Object3D;
import org.karlsland.m3g.VertexArray;
import org.karlsland.m3g.VertexBuffer;
import org.karlsland.m3g.World;

public class TestWorld {

    static {
        System.loadLibrary ("jni-opengl");
    }
    
	@Test
	public void testInitialize() {
		World wld = new World();
		
		assertEquals (null, wld.getBackground());
		assertEquals (null, wld.getActiveCamera());
	}

	@Test
	public void testFinalize() {
		@SuppressWarnings("unused")
		World wld = new World();
		wld = null;
		System.gc();
	}

	@Test
	public void testSetActiveCamera() {
		World wld  = new World();
		Camera cam = new Camera();
		wld.setActiveCamera(cam);
		
		assertEquals(cam, wld.getActiveCamera());
	}

	@Test
	public void testSetBackground() {
		World wld     = new World();
		Background bg = new Background();

		wld.setBackground(bg);
		assertEquals(bg, wld.getBackground());
	}

	@Test
	public void testToString() {
		@SuppressWarnings("unused")
		World wld = new World();
		wld = null;
		System.gc();
	}
	
	@Test
	public void testGetReferences() {
		World      wld = new World();
		Background bg  = new Background();
		Camera     cam = new Camera();
		wld.setActiveCamera(cam);
		wld.setBackground(bg);

		Object3D[] references = {null, null};
	 	int n = wld.getReferences(references);

	 	assertEquals(2  , n);
	 	assertEquals(bg , references[0]);
	 	assertEquals(cam, references[1]);
	}

}
