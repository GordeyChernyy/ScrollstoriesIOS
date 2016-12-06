#include "ofMain.h"
#include "ofApp.h"
#include "ofxiPhone.h"
#include "ofxiPhoneExtras.h"
int main(){
    ofAppiPhoneWindow * win = new ofAppiPhoneWindow();
    win->enableRetina();
    ofSetupOpenGL(win, 1024,768, OF_FULLSCREEN);
    ofRunApp(new ofApp());
}
