#pragma once

#include "ofMain.h"
#include "ofxiOS.h"
#include "ofxiOSExtras.h"
#include "ofxTrueTypeFontUC.h"
#include "obj.h"
#include "ofxGui.h"
class ofApp : public ofxiOSApp {
	
    public:
        void setup();
        void update();
        void draw();
        void exit();
	
        void touchDown(ofTouchEventArgs & touch);
        void touchMoved(ofTouchEventArgs & touch);
        void touchUp(ofTouchEventArgs & touch);
        void touchDoubleTap(ofTouchEventArgs & touch);
        void touchCancelled(ofTouchEventArgs & touch);

        void lostFocus();
        void gotFocus();
        void gotMemoryWarning();
        void deviceOrientationChanged(int newOrientation);
    
        void generatecoord ();
    
        ofxPanel gui;
        bool bHide;
        ofxIntSlider p1;
        ofxIntSlider p2;
        ofxIntSlider p3;
        ofxIntSlider p4;
        ofxIntSlider p5;
        ofxIntSlider p6;
        ofxFloatSlider l1;
        ofxFloatSlider l2;
        ofxFloatSlider l3;
    
        ofxTrueTypeFontUC body;
        ofxTrueTypeFontUC title;
        obj Obj;
    
        ofImage image;
        ofImage image1;
        ofImage image2;
        ofImage image3;
        ofImage image4;
        ofImage image5;
        ofImage image6;
        ofImage image7;
        ofImage image8;
        ofImage image9;
        ofImage image10;
        ofImage image11;
        ofImage image12;
        ofImage image13;
        ofImage image14;
        ofImage image15;
        ofImage image16;
};

