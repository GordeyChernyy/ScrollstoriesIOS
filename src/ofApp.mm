#include "ofApp.h"
float touchDownY;
float touchUpY;
float t_ustoreY;
int slider;
float t;
float rootTime = 0;
bool move = false;
float oldY;
float newY;
int scTime;
bool mouseup = false;
float inertia;
int scInterval = 500;
float speed;
float timestore;
float tempstore;
float tempstore2;
float tempstore3;
float tempstore4;
float tempstore5;
float tempstore6;
float tempstore7;
vector<ofVec2f> coord;
vector<int> rotation;
vector<float> randomscale;
vector<ofColor> swatch;
//--------------------------------------------------------------
void ofApp::setup(){	
    ofSetVerticalSync(true);
    body.loadFont("Verdana.ttf", 21, true, true);
    title.loadFont("Verdana.ttf", 34, true, true);
    image.loadImage("text1.png");
    image1.loadImage("must1.png");
    image2.loadImage("must2.png");
    image3.loadImage("must3.png");
    image4.loadImage("sad.png");
    image5.loadImage("learn.png");
    image6.loadImage("howto.png");
    image7.loadImage("howtosad.png");
    image8.loadImage("read.png");
    image9.loadImage("psiholog.png");
    image10.loadImage("travel.png");
    image11.loadImage("ashram.png");
    image12.loadImage("door.png");
    image13.loadImage("doorimg.png");
    image14.loadImage("doorinside.png");
    image15.loadImage("open.png");
    image16.loadImage("title.png");

    gui.setup();
    gui.setSize(ofGetWidth(), 400);
    gui.setDefaultWidth(ofGetWidth());
    gui.setDefaultHeight(40);
    
    bHide = true;
    gui.add(p1.setup( "p1", 8293, 8293, 10000 ));
    gui.add(p2.setup( "p2", 5, -1000, 1000 ));
    gui.add(p3.setup( "p3", 5, -300, 300 ));
    gui.add(p4.setup( "p4", 300, -2000, 2000 ));
    gui.add(p5.setup( "p5", 300, -2000, 2000 ));
    gui.add(p6.setup( "p6", 300, -2000, 2000 ));
    gui.add(l1.setup( "l1", 0.001, 0, 5 ));
    gui.add(l2.setup( "l2", 0.001, -1, 1 ));
    gui.add(l3.setup( "l3", 0.001, -1, 1 ));
    generatecoord();
}

//--------------------------------------------------------------
void ofApp::update(){
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofBackground(9,208,220);
    if (mouseup) inertia *=0.9;
    rootTime += inertia;
    touchUpY += inertia;
    ofSetColor(255);
    
    
    //____________________  SCENES ________________________________
    
    if (rootTime>-900 && rootTime<300) { // title
        float pos = rootTime+ofGetHeight();
    
        ofPushMatrix();
        ofTranslate(0, pos);
            int op;
            if (rootTime<-667) {
                op = 255+(rootTime + 667);
            }else{
                op = 255;
            }
        
            ofSetColor(255,255,255, op);
            image16.draw(ofGetWidth()/2, -200);
        
            ofSetColor(253,238,223,op);
        
            ofRect(0,20,ofGetWidth(),40);
        ofPopMatrix();
    } // title
    if (rootTime>-1088 && rootTime<-200) {
        float pos;
        int nultime = rootTime+200;
        if(rootTime<-595){
            pos = speed;
        }else{
            pos = nultime*2;
            speed = pos;
        }
        int nultime2 = rootTime+736;
        float scale = 1;
        int pos3 = 0;;
        if (rootTime<-736) {
            scale = 1-((1-nultime2)*0.002);
            pos3 = -nultime2*1.5;
        }
        ofPushMatrix(); ofTranslate(0, pos);
            ofPushMatrix(); ofTranslate((ofGetWidth()-314)/2+pos3,ofGetHeight() );ofScale(scale, scale);
                Obj.shadow();
                Obj.feet();
                Obj.lhand();
                Obj.body();
                ofPushMatrix();
                Obj.rhand();
                Obj.head();
                Obj.moutheyes();
                Obj.nose();
            ofPopMatrix();
        ofPopMatrix();
        float pos2;
        
        pos2 = (rootTime+450)*4;
        ofPushMatrix(); ofTranslate(0, pos2);
        ofSetColor(255);
        image.draw(0,ofGetHeight());
        ofPopMatrix();
        
    } // tolik
    if (rootTime>-1236 && rootTime<-675) {
        float pos;
        int nulltime = rootTime+675;
        pos = -nulltime*3;
        
            ofPushMatrix(); ofTranslate(pos, pos);ofRotate(-45);
        
                ofPushMatrix(); ofTranslate(-100,-1019);
                    Obj.musthand(ofColor(237,90,68), ofColor(251,127,98));
                ofPopMatrix();
                ofSetColor(255);
                image1.draw(-171, 0);
                image2.draw(182, -731);
            ofPopMatrix();
       
        ofPushMatrix(); ofTranslate(-pos/1.2, pos/1.2);ofRotate(45);
        ofPushMatrix(); ofTranslate(ofGetWidth()+100,-1200);
        Obj.musthand(ofColor(165,24,67), ofColor(207,67,108));
        
        ofPopMatrix();
        ofSetColor(255);
        image3.draw(ofGetWidth()+11, -942);
        ofPopMatrix();

    } // must hands
    if (rootTime>-1942 && rootTime<-1236) {
        float pos;
        float pos2 = rootTime+1282;
        float scale;
        int nulltime = rootTime+1236;
        if(rootTime<-1394){
            scale = tempstore;
            if (rootTime<-1557) {
                pos = (rootTime+1557)*3 + tempstore2;
            }else{
                pos = rootTime+1394;
                tempstore2 = pos;
            }
        }else{
            scale = 0.0857143+((1-nulltime)*0.0514286);
            tempstore = scale;
            pos = 0;
        }
        
        ofPushMatrix();
        ofTranslate((ofGetWidth()-153)/2, ((ofGetWidth()-214)/2)+pos);
        ofTranslate(153/2, 214/2, 0); // move pivot 153 214
        ofScale(scale, scale);
        
            ofPushMatrix();
            ofTranslate(-153/2, -214/2);// move back pivot
                Obj.p_shadow();
                Obj.p_handbody();
                Obj.p_feetarms();
                Obj.p_head();
                Obj.p_eyes();
                Obj.p_nose();
            ofPopMatrix();
        ofPopMatrix();
        ofSetColor(255);
        image4.draw(0, pos2*1.82+ofGetHeight());
    } // pechalka
    if (rootTime>-2355 && rootTime<-1403) {
        float pos; // sleza
        float pos2 = rootTime+1655;
        
        if (rootTime<-2168) {
            pos = -(rootTime+2168)*2+tempstore3;
        }else{
            pos = (rootTime+1403)/10;
            tempstore3 = pos;
        }
        
        ofPushMatrix();
        ofTranslate(300, pos);
            ofPushMatrix();
            ofTranslate(-80, 114);// move back pivot
                Obj.sleza();
            ofPopMatrix();
        ofPopMatrix();
        
        ofSetColor(255);
        image5.draw(0, pos2*1.82+ofGetHeight()); // тебя никто не учил
        
        
    } // sleza
    if (rootTime>-2900 && rootTime<-2260) {
        float scale2;
        float pos;
        if (rootTime<-2528) {
            pos = rootTime+2528;
        }else{
            pos = 0;
        }
        if (rootTime<-2305) {
            scale2 = tempstore4;
        }else{
            scale2 = 0.31875+((1-(rootTime+2260))*0.031875);
            tempstore4 =  scale2;
        }
        ofPushMatrix();
        ofTranslate((ofGetWidth()-331)/2+pos*5, (ofGetHeight()-127)/2); // move image
        ofTranslate(331/2, 127/2, 0); // move point
        ofScale(scale2, scale2);
            ofPushMatrix();
            ofTranslate(-331/2, -127/2);// move back
            if (rootTime<-2323) {
                image7.draw(0,0);
            }else{
                image6.draw(0,0); // w=331 h=127
            }
            ofPopMatrix();
        ofPopMatrix();
    } // byt soboi
    if (rootTime>-3374 && rootTime<-1795){
        float pos = rootTime+1795+ofGetHeight();
        float pos2 = rootTime+2771;
        if (rootTime>-3174) {
            for (int i=0; i<coord.size(); i++) {
                ofPushMatrix();
                ofTranslate(coord[i]+pos*randomscale[i]*2);
                ofRotate(rotation[i]+pos/6);
                ofScale(randomscale[i], randomscale[i]);
                Obj.book(ofColor(swatch[i]));
                ofPopMatrix();
            }
        }
        
        ofSetColor(255);
        if (rootTime<-2771) {
            image8.draw(pos2*2+ofGetWidth(), ofGetHeight()/2);
        }
    } // books
    if (rootTime>-5593 && rootTime<-3174){ // psiholog
        float pos = rootTime+3174;
        float pos2 = rootTime+3512;
        float pos4 = rootTime+4107;
        float pos3;
        if (rootTime<-3808) {
            if (rootTime<-4990) {
                pos3 = tempstore5+(rootTime+4990)*5;
            }else{
                pos3 = tempstore5;
            }
        }else{
            pos3 = pos;
            tempstore5 = pos3;
        }
        if (rootTime>-4071) { // psiholog
            ofPushMatrix();
            ofTranslate(pos+ofGetWidth(), (ofGetHeight()-318)/2);
            Obj.psiholog(); // 503 318
            ofPopMatrix();
        }
        if (rootTime<-4107 &&rootTime>-5074) { // airplane
            ofPushMatrix();
            ofTranslate(pos4+ofGetWidth(), ofGetHeight()/4);
            for (int i=0; i<7; i++) {
                ofPushMatrix();
                if(rootTime<-4840){
                    ofTranslate(121*i,(rootTime+4840)*i);
                }else{
                    ofTranslate(121*i,0);
                }
                Obj.airplane();
                ofPopMatrix();
            }
             // 503 318
            ofPopMatrix();
        }
        ofPushMatrix(); // client
        ofTranslate(pos3+ofGetWidth(), (ofGetHeight()-318)/2);
        Obj.client(); // 503 318
        ofPopMatrix();
        ofSetColor(255); // txt psiholog
        image9.draw(0, pos2+ofGetHeight());
        image10.draw(0, rootTime+5121);
    }
    if (rootTime>-7847 && rootTime<-5074) {
        float pos = rootTime+5074;
        
        ofPushMatrix();
        ofTranslate((ofGetWidth()-526)/2, ofGetHeight()+pos/2 );
        Obj.med_smoke();
        Obj.med_shadow();
        ofPopMatrix();
        
        ofPushMatrix();
        ofTranslate((ofGetWidth()-418)/2, ofGetHeight()+pos/2); //pos
        ofTranslate(217, 412); // move pivot
        ofRotate(sin(rootTime/92)*11);
            ofPushMatrix();
            ofTranslate(-217, -412);
            Obj.meditate(); // 418
            ofPopMatrix();
        ofPopMatrix();
        ofSetColor(255);
        image11.draw(0, (rootTime+5976));
    }
    if (rootTime>-9161 && rootTime<-7847){
        float pos = rootTime+7847;
        for (int i=0; i<coord.size(); i++) {
            ofPushMatrix();
            ofTranslate(0, ofGetHeight());
            ofTranslate(coord[i].x, pos*randomscale[i]*2);
            ofScale(randomscale[i], randomscale[i]);
            image13.draw(0, 0);
            ofPopMatrix();
        }
        ofSetColor(255);
        image12.draw(0, (rootTime+8928));
    }
    if (rootTime>-15500 && rootTime<-8293){
        float pos = (rootTime+8293)/1.5;
        float scale;
        float rot;
        if (rootTime<-9554) {
            scale = 1-(rootTime+9554)*0.002;
            pos = tempstore6;
        }else{
            scale = 1;
            tempstore6 = pos;
        }
        if (rootTime<-11521) {
            if (rootTime<-11883) {
                rot = tempstore7;
            }else{
                rot = (rootTime+11521)*0.46875;
                tempstore7 = rot;
            }
        }else{
            rot = 0;
        }
        ofPushMatrix();
        ofTranslate(314/2, 613/2);
        ofTranslate((ofGetWidth()-314)/2,ofGetHeight()+pos );
        ofScale(scale, scale);
            ofPushMatrix();
                ofTranslate(-314/2, -613/2);
                Obj.shadow();
                Obj.feet();
                Obj.lhand();
                Obj.body();
                Obj.rhand();
                Obj.head();
                Obj.moutheyes();
                Obj.nose();
                ofTranslate(115, 225);
                ofSetColor(255);
                ofRect(0,0,83,158);
                ofRotateY(rot);
                Obj.d_doska();
                ofTranslate(0,0,0.2);
                Obj.d_kolco();
                ofTranslate(0,0,3);
                Obj.d_hand();
            ofPopMatrix();
        ofPopMatrix();
        
        ofSetColor(255);
        image14.draw(0, rootTime+9386);
        
    
        
        
        if (rootTime<-12878) {
            int op = -(rootTime+12878)/10;
            ofSetColor(255, 255, 255,op);
            image15.draw((ofGetWidth()-375)/2, ofGetHeight()/2);
        }
        
        
    }
    //_____________________________________________________________
    
   // if( bHide ){
   //     gui.draw();
   // }
    ofLog(OF_LOG_NOTICE, "rootTime %f", rootTime);
    //ofLog(OF_LOG_NOTICE, "mx %d my %d", mouseX, mouseY);
}
void ofApp::generatecoord (){
    vector<ofColor> colors;
    

    colors.push_back(ofColor(244,126,97));
    colors.push_back(ofColor(31,190,152));
    colors.push_back(ofColor(249,195,55));
    colors.push_back(ofColor(203,101,124));
    colors.push_back(ofColor(98,48,109));
    colors.push_back(ofColor(245,156,38));
    
    for (int i =0; i< 9; i++) {
        float x = ofRandom(ofGetWidth());
        float y = ofRandom(ofGetHeight());
        ofVec2f c;
        c.set(x, y);
        coord.push_back(c);
        rotation.push_back(ofRandom(0,180));
        swatch.push_back(colors[ofRandom(5)]);
        randomscale.push_back(ofRandom(0.5, 1.3));
    }
    
}
//--------------------------------------------------------------
void ofApp::exit(){

}

//--------------------------------------------------------------
void ofApp::touchDown(ofTouchEventArgs & touch){
    inertia = 0;
    mouseup = false;
    touchDownY = mouseY;
}

//--------------------------------------------------------------
void ofApp::touchMoved(ofTouchEventArgs & touch){
    
    inertia = 0;
    newY = mouseY - oldY;
    float move = mouseY-touchDownY;
    rootTime = touchUpY + move ;
    oldY = mouseY;
    if(rootTime>-78){rootTime = -78;}
    if(rootTime<-14308){rootTime = -14308;}
}

//--------------------------------------------------------------
void ofApp::touchUp(ofTouchEventArgs & touch){
    mouseup = true;
    inertia = newY;
    touchUpY = rootTime;
}


//--------------------------------------------------------------
void ofApp::touchDoubleTap(ofTouchEventArgs & touch){
    if(bHide){bHide = false;}else{bHide=true;}
}

//--------------------------------------------------------------
void ofApp::touchCancelled(ofTouchEventArgs & touch){
    
}

//--------------------------------------------------------------
void ofApp::lostFocus(){

}

//--------------------------------------------------------------
void ofApp::gotFocus(){

}

//--------------------------------------------------------------
void ofApp::gotMemoryWarning(){

}

//--------------------------------------------------------------
void ofApp::deviceOrientationChanged(int newOrientation){

}
