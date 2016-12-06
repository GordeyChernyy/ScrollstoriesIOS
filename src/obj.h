//
//  obj.h
//  Scrollstories
//
//  Created by Zerc on 12/7/14.
//
//

#ifndef Scrollstories_obj_h
#define Scrollstories_obj_h

class obj{
    public:

    // sc 1 width = 314 heigth = 613 
    void shadow(){
        ofFill();
        ofSetColor(5,177,187);
        ofBeginShape();
        ofVertex(314,565);
        ofBezierVertex(314,592,243,613,157,613);
        ofBezierVertex(70,613,0,592,0,565);
        ofBezierVertex(0,539,70,517,157,517);
        ofBezierVertex(243,517,314,539,314,565);
        ofEndShape();
    }
    void feet(){
        ofFill();
        ofSetColor(238,90,69);
        ofBeginShape();
        ofVertex(111,565);
        ofVertex(76,565);
        ofVertex(76,410);
        ofVertex(111,410);
        ofVertex(111,565);
        ofEndShape();
        
        ofFill();
        ofSetColor(175,48,77);
        ofBeginShape();
        ofVertex(229,565);
        ofVertex(190,565);
        ofVertex(190,410);
        ofVertex(229,410);
        ofVertex(229,565);
        ofEndShape();
    }
    void lhand(){
        ofFill();
        ofSetColor(98,48,109);
        ofBeginShape();
        ofVertex(269,343);
        ofVertex(231,352);
        ofVertex(190,169);
        ofVertex(228,161);
        ofVertex(269,343);
        ofEndShape();
        
        ofFill();
        ofSetColor(245,155,38);
        ofBeginShape();
        ofVertex(230,351);
        ofVertex(252,370);
        ofVertex(268,342);
        ofVertex(230,351);
        ofEndShape();
        
        

    }
    void body(){
        ofFill();
        ofSetColor(98,48,109);
        ofBeginShape();
        ofVertex(154,410);
        ofVertex(76,410);
        ofVertex(76,167);
        ofVertex(154,167);
        ofVertex(154,410);
        ofEndShape();
        
        ofFill();
        ofSetColor(69,34,78);
        ofBeginShape();
        ofVertex(229,410);
        ofVertex(151,410);
        ofVertex(151,167);
        ofVertex(229,167);
        ofVertex(229,410);
        ofEndShape();
        
    }
    void rhand(){
        ofFill();
        ofSetColor(69,34,78);
        ofBeginShape();
        ofVertex(81,352);
        ofVertex(42,346);
        ofVertex(71,161);
        ofVertex(110,167);
        ofVertex(81,352);
        ofEndShape();
        
        ofFill();
        ofSetColor(249,195,55);
        ofBeginShape();
        ofVertex(42,346);
        ofVertex(56,372);
        ofVertex(81,352);
        ofVertex(42,346);
        ofEndShape();
    }
    void head(){
        ofFill();
        ofSetColor(249,195,55);
        ofBeginShape();
        ofVertex(153,200);
        ofBezierVertex(97,200,53,155,53,100);
        ofBezierVertex(53,44,97,0,153,0);
        ofVertex(153,200);
        ofEndShape();
        
        ofFill();
        ofSetColor(245,155,38);
        ofBeginShape();
        ofVertex(153,0);
        ofBezierVertex(208,0,253,44,253,100);
        ofBezierVertex(253,155,208,200,153,200);
        ofVertex(153,0);
        ofEndShape();
        
    }
    void moutheyes(){
        ofFill();
        ofSetColor(97,48,99);
        ofBeginShape();
        ofVertex(124,77);
        ofBezierVertex(124,81,121,84,118,84);
        ofBezierVertex(114,84,111,81,111,77);
        ofBezierVertex(111,74,114,71,118,71);
        ofBezierVertex(121,71,124,74,124,77);
        ofEndShape();
        
        ofFill();
        ofSetColor(97,48,99);
        ofBeginShape();
        ofVertex(190,77);
        ofBezierVertex(190,81,187,84,184,84);
        ofBezierVertex(180,84,177,81,177,77);
        ofBezierVertex(177,74,180,71,184,71);
        ofBezierVertex(187,71,190,74,190,77);
        ofEndShape();
        
        ofFill();
        ofSetColor(254,237,224);
        ofBeginShape();
        ofVertex(115,139);
        ofBezierVertex(139,146,173,149,187,139);
        ofBezierVertex(167,168,136,167,115,139);
        ofEndShape();
        
    }
    void nose(){
        ofFill();
        ofSetColor(229,99,144);
        ofBeginShape();
        ofVertex(153,79);
        ofBezierVertex(143,112,128,120,128,120);
        ofVertex(153,120);
        ofVertex(153,79);
        ofEndShape();
    }
    void musthand(ofColor col1, ofColor col2){
        ofFill();
        ofSetColor(col1);
        ofBeginShape();
        ofVertex(140,0);
        ofVertex(140,999);
        ofBezierVertex(140,1011,148,1019,160,1019);
        ofBezierVertex(171,1019,180,1011,180,999);
        ofBezierVertex(180,1011,188,1019,200,1019);
        ofBezierVertex(211,1019,220,1011,220,999);
        ofVertex(220,0);
        ofVertex(140,0);
        ofEndShape();
        
        ofFill();
        ofSetColor(col2);
        ofBeginShape();
        ofVertex(140,999);
        ofBezierVertex(140,1011,131,1019,120,1019);
        ofBezierVertex(108,1019,99,1011,99,999);
        ofVertex(99,1099);
        ofBezierVertex(99,1111,91,1119,79,1119);
        ofBezierVertex(68,1119,59,1111,59,1099);
        ofVertex(59,999);
        ofVertex(59,939);
        ofVertex(59,912);
        ofVertex(32,935);
        ofBezierVertex(24,942,11,941,4,932);
        ofBezierVertex(-2,924,-1,911,7,904);
        ofVertex(59,859);
        ofVertex(59,0);
        ofVertex(140,0);
        ofVertex(140,999);
        ofEndShape();

    } // height 1019
    // w = 153 px
    void p_shadow(){
        ofFill();
        ofSetColor(5,177,187);
        ofBeginShape();
        ofVertex(153,191);
        ofBezierVertex(153,204,119,214,76,214);
        ofBezierVertex(34,214,0,204,0,191);
        ofBezierVertex(0,178,34,167,76,167);
        ofBezierVertex(119,167,153,178,153,191);
        ofEndShape();
    }
    void p_feetarms(){
        ofFill();
        ofSetColor(238,90,69);
        ofBeginShape();
        ofVertex(67,180);
        ofVertex(37,180);
        ofVertex(37,103);
        ofVertex(67,103);
        ofVertex(67,180);
        ofEndShape();
        
        ofFill();
        ofSetColor(249,195,55);
        ofBeginShape();
        ofVertex(27,143);
        ofVertex(50,129);
        ofVertex(29,107);
        ofVertex(27,143);
        ofEndShape();
        
        ofFill();
        ofSetColor(175,48,77);
        ofBeginShape();
        ofVertex(113,180);
        ofVertex(81,180);
        ofVertex(81,103);
        ofVertex(113,103);
        ofVertex(113,180);
        ofEndShape();
        
        ofFill();
        ofSetColor(93,15,41);
        ofBeginShape();
        ofVertex(113,193);
        ofVertex(81,193);
        ofVertex(81,179);
        ofVertex(113,179);
        ofVertex(113,193);
        ofEndShape();
        
        ofFill();
        ofSetColor(175,48,77);
        ofBeginShape();
        ofVertex(68,193);
        ofVertex(37,193);
        ofVertex(37,179);
        ofVertex(68,179);
        ofVertex(68,193);
        ofEndShape();
        
        ofFill();
        ofSetColor(245,155,38);
        ofBeginShape();
        ofVertex(119,111);
        ofVertex(106,132);
        ofVertex(131,140);
        ofVertex(119,111);
        ofEndShape();
        
        
}
    void p_handbody(){ofFill();
        ofSetColor(98,48,109);
        ofBeginShape();
        ofVertex(75,140);
        ofVertex(37,140);
        ofVertex(37,81);
        ofVertex(75,81);
        ofVertex(75,140);
        ofEndShape();
        
        ofFill();
        ofSetColor(98,48,109);
        ofBeginShape();
        ofVertex(145,136);
        ofVertex(123,140);
        ofVertex(108,75);
        ofVertex(130,70);
        ofVertex(145,136);
        ofEndShape();
        
        ofFill();
        ofSetColor(69,34,78);
        ofBeginShape();
        ofVertex(27,139);
        ofVertex(5,136);
        ofVertex(16,69);
        ofVertex(38,73);
        ofVertex(27,139);
        ofEndShape();
        
        ofFill();
        ofSetColor(69,34,78);
        ofBeginShape();
        ofVertex(112,140);
        ofVertex(74,140);
        ofVertex(74,81);
        ofVertex(112,81);
        ofVertex(112,140);
        ofEndShape();
        
        
}
    void p_head(){ofFill();
        ofSetColor(249,195,55);
        ofBeginShape();
        ofVertex(74,97);
        ofBezierVertex(47,97,25,75,25,48);
        ofBezierVertex(25,21,47,0,74,0);
        ofVertex(74,97);
        ofEndShape();
        
        ofFill();
        ofSetColor(245,155,38);
        ofBeginShape();
        ofVertex(74,0);
        ofBezierVertex(101,0,123,21,123,48);
        ofBezierVertex(123,75,101,97,74,97);
        ofVertex(74,0);
        ofEndShape();
        
        
}
    void p_eyes(){ofFill();
        ofSetColor(97,48,99);
        ofBeginShape();
        ofVertex(61,74);
        ofBezierVertex(61,75,59,77,57,77);
        ofBezierVertex(56,77,54,75,54,74);
        ofBezierVertex(54,72,56,70,57,70);
        ofBezierVertex(59,70,61,72,61,74);
        ofEndShape();
        
        ofFill();
        ofSetColor(97,48,99);
        ofBeginShape();
        ofVertex(93,74);
        ofBezierVertex(93,75,91,77,90,77);
        ofBezierVertex(88,77,86,75,86,74);
        ofBezierVertex(86,72,88,70,90,70);
        ofBezierVertex(91,70,93,72,93,74);
        ofEndShape();
        
        
}
    void p_nose(){
        ofFill();
        ofSetColor(229,99,144);
        ofBeginShape();
        ofVertex(74,85);
        ofVertex(82,100);
        ofVertex(74,97);
        ofVertex(74,85);
        ofEndShape();
        
        
}
    void sleza(){ofFill();
        ofSetColor(253,238,223);
        ofBeginShape();
        ofVertex(16,0);
        ofBezierVertex(0,17,-9,51,16,51);
        ofVertex(16,0);
        ofEndShape();
        
        ofFill();
        ofSetColor(252,226,202);
        ofBeginShape();
        ofVertex(16,0);
        ofBezierVertex(33,17,42,51,16,51);
        ofVertex(16,0);
        ofEndShape();
        
        
}
    void book(ofColor col){
        ofFill();
        ofSetColor(252,226,202);
        ofBeginShape();
        ofVertex(169,99);
        ofVertex(169,18);
        ofBezierVertex(169,18,84,-23,84,18);
        ofVertex(84,99);
        ofVertex(169,99);
        ofEndShape();
        
        ofFill();
        ofSetColor(253,238,223);
        ofBeginShape();
        ofVertex(0,99);
        ofVertex(84,99);
        ofVertex(84,18);
        ofVertex(84,18);
        ofBezierVertex(84,-23,0,18,0,18);
        ofVertex(0,99);
        ofEndShape();
        
        ofFill();
        ofSetColor(253,238,223);
        ofBeginShape();
        ofVertex(169,99);
        ofBezierVertex(141,71,85,57,85,99);
        ofVertex(169,99);
        ofEndShape();
        
        ofFill();
        ofSetColor(252,226,202);
        ofBeginShape();
        ofVertex(1,99);
        ofBezierVertex(29,71,85,57,85,99);
        ofVertex(1,99);
        ofEndShape();
        
        ofFill();
        ofSetColor(col);
        ofBeginShape();
        ofVertex(0,106);
        ofVertex(169,106);
        ofVertex(169,98);
        ofVertex(0,98);
        ofVertex(0,106);
        ofEndShape();
        
        

        
        
}
    void psiholog(){
        ofFill();
        ofSetColor(69,34,78);
        ofBeginShape();
        ofVertex(166,233);
        ofVertex(166,212);
        ofVertex(51,212);
        ofVertex(51,233);
        ofVertex(166,233);
        ofEndShape();
        
        ofFill();
        ofSetColor(5,177,187);
        ofBeginShape();
        ofVertex(31,293);
        ofBezierVertex(31,307,67,318,112,318);
        ofBezierVertex(157,318,194,307,194,293);
        ofBezierVertex(194,279,157,268,112,268);
        ofBezierVertex(67,268,31,279,31,293);
        ofEndShape();
        
        ofFill();
        ofSetColor(254,237,224);
        ofBeginShape();
        ofVertex(89,223);
        ofVertex(128,214);
        ofVertex(98,91);
        ofVertex(59,101);
        ofVertex(89,223);
        ofEndShape();
        
        ofFill();
        ofSetColor(254,237,224);
        ofBeginShape();
        ofVertex(133,183);
        ofVertex(154,187);
        ofVertex(166,133);
        ofVertex(145,128);
        ofVertex(133,183);
        ofEndShape();
        
        ofFill();
        ofSetColor(252,226,202);
        ofBeginShape();
        ofVertex(126,178);
        ofVertex(134,159);
        ofVertex(44,122);
        ofVertex(36,141);
        ofVertex(126,178);
        ofEndShape();
        
        ofFill();
        ofSetColor(69,34,78);
        ofBeginShape();
        ofVertex(166,213);
        ofVertex(145,213);
        ofVertex(145,288);
        ofVertex(166,288);
        ofVertex(166,213);
        ofEndShape();
        
        ofFill();
        ofSetColor(98,48,109);
        ofBeginShape();
        ofVertex(155,201);
        ofVertex(140,214);
        ofVertex(176,254);
        ofVertex(191,241);
        ofVertex(155,201);
        ofEndShape();
        
        ofFill();
        ofSetColor(252,226,202);
        ofBeginShape();
        ofVertex(51,233);
        ofVertex(90,223);
        ofVertex(60,101);
        ofVertex(21,110);
        ofVertex(51,233);
        ofEndShape();
        
        ofFill();
        ofSetColor(249,195,55);
        ofBeginShape();
        ofVertex(64,117);
        ofBezierVertex(91,110,109,82,102,55);
        ofBezierVertex(95,27,67,10,39,16);
        ofVertex(64,117);
        ofEndShape();
        
        ofFill();
        ofSetColor(245,155,38);
        ofBeginShape();
        ofVertex(39,16);
        ofBezierVertex(11,23,-5,51,1,79);
        ofBezierVertex(8,107,36,124,64,117);
        ofVertex(39,16);
        ofEndShape();
        
        ofFill();
        ofSetColor(249,195,55);
        ofBeginShape();
        ofVertex(134,159);
        ofVertex(142,172);
        ofVertex(126,178);
        ofVertex(134,159);
        ofEndShape();
        
        ofFill();
        ofSetColor(252,226,202);
        ofBeginShape();
        ofVertex(84,52);
        ofBezierVertex(86,61,95,66,104,64);
        ofBezierVertex(113,62,119,53,117,44);
        ofBezierVertex(114,35,105,29,96,31);
        ofBezierVertex(87,33,82,43,84,52);
        ofEndShape();
        
        ofFill();
        ofSetColor(229,99,144);
        ofBeginShape();
        ofVertex(91,55);
        ofVertex(98,78);
        ofVertex(112,74);
        ofVertex(91,55);
        ofEndShape();
        
        ofFill();
        ofSetColor(254,237,224);
        ofBeginShape();
        ofVertex(65,56);
        ofBezierVertex(67,65,76,71,85,69);
        ofBezierVertex(94,66,100,57,97,48);
        ofBezierVertex(95,39,86,34,77,36);
        ofBezierVertex(68,38,63,47,65,56);
        ofEndShape();
        
        
        
}
    void client(){
        ofFill();
        ofSetColor(5,177,187);
        ofBeginShape();
        ofVertex(533,293);
        ofBezierVertex(533,307,496,318,451,318);
        ofBezierVertex(406,318,370,307,370,293);
        ofBezierVertex(370,279,406,268,451,268);
        ofBezierVertex(496,268,533,279,533,293);
        ofEndShape();
        
        ofFill();
        ofSetColor(98,48,109);
        ofBeginShape();
        ofVertex(467,212);
        ofVertex(427,212);
        ofVertex(427,86);
        ofVertex(467,86);
        ofVertex(467,212);
        ofEndShape();
        
        ofFill();
        ofSetColor(69,34,78);
        ofBeginShape();
        ofVertex(471,202);
        ofVertex(451,199);
        ofVertex(466,103);
        ofVertex(486,106);
        ofVertex(471,202);
        ofEndShape();
        
        ofFill();
        ofSetColor(175,48,77);
        ofBeginShape();
        ofVertex(392,233);
        ofVertex(392,212);
        ofVertex(506,212);
        ofVertex(506,233);
        ofVertex(392,233);
        ofEndShape();
        
        ofFill();
        ofSetColor(175,48,77);
        ofBeginShape();
        ofVertex(392,213);
        ofVertex(412,213);
        ofVertex(412,288);
        ofVertex(392,288);
        ofVertex(392,213);
        ofEndShape();
        
        ofFill();
        ofSetColor(69,34,78);
        ofBeginShape();
        ofVertex(506,212);
        ofVertex(466,212);
        ofVertex(466,86);
        ofVertex(506,86);
        ofVertex(506,212);
        ofEndShape();
        
        ofFill();
        ofSetColor(249,195,55);
        ofBeginShape();
        ofVertex(467,103);
        ofBezierVertex(438,103,415,80,415,51);
        ofBezierVertex(415,23,438,0,467,0);
        ofVertex(467,103);
        ofEndShape();
        
        ofFill();
        ofSetColor(245,155,38);
        ofBeginShape();
        ofVertex(467,0);
        ofBezierVertex(495,0,519,23,519,51);
        ofBezierVertex(519,80,495,103,467,103);
        ofVertex(467,0);
        ofEndShape();
        
        ofFill();
        ofSetColor(97,48,99);
        ofBeginShape();
        ofVertex(436,40);
        ofBezierVertex(436,42,434,43,432,43);
        ofBezierVertex(430,43,429,42,429,40);
        ofBezierVertex(429,38,430,37,432,37);
        ofBezierVertex(434,37,436,38,436,40);
        ofEndShape();
        
        ofFill();
        ofSetColor(254,237,224);
        ofBeginShape();
        ofVertex(419,72);
        ofBezierVertex(428,76,442,77,448,72);
        ofBezierVertex(440,87,427,86,419,72);
        ofEndShape();
        
        ofFill();
        ofSetColor(229,99,144);
        ofBeginShape();
        ofVertex(419,48);
        ofBezierVertex(414,58,406,61,406,61);
        ofVertex(419,61);
        ofVertex(419,48);
        ofEndShape();
        
        ofFill();
        ofSetColor(249,195,55);
        ofBeginShape();
        ofVertex(451,199);
        ofVertex(458,213);
        ofVertex(471,202);
        ofVertex(451,199);
        ofEndShape();
        
        
        
        

    }
    void airplane(){ofFill();
        ofSetColor(5,177,187);
        ofBeginShape();
        ofVertex(0,199);
        ofVertex(0,0);
        ofVertex(121,0);
        ofVertex(121,199);
        ofVertex(0,199);
        ofEndShape();
        
        ofFill();
        ofSetColor(254,237,224);
        ofBeginShape();
        ofVertex(91,213);
        ofBezierVertex(91,223,83,230,73,230);
        ofVertex(45,230);
        ofBezierVertex(36,230,28,223,28,213);
        ofVertex(28,163);
        ofBezierVertex(28,154,36,146,45,146);
        ofVertex(73,146);
        ofBezierVertex(83,146,91,154,91,163);
        ofVertex(91,213);
        ofEndShape();}
    void meditate(){
        
        ofFill();
        ofSetColor(98,48,109);
        ofBeginShape();
        ofVertex(220,433);
        ofVertex(142,433);
        ofVertex(142,190);
        ofVertex(220,190);
        ofVertex(220,433);
        ofEndShape();
        
        ofFill();
        ofSetColor(238,90,69);
        ofBeginShape();
        ofVertex(235,420);
        ofVertex(218,471);
        ofVertex(60,418);
        ofVertex(77,368);
        ofVertex(235,420);
        ofEndShape();
        
        ofFill();
        ofSetColor(69,34,78);
        ofBeginShape();
        ofVertex(295,433);
        ofVertex(217,433);
        ofVertex(217,190);
        ofVertex(295,190);
        ofVertex(295,433);
        ofEndShape();
        
        ofFill();
        ofSetColor(69,34,78);
        ofBeginShape();
        ofVertex(98,374);
        ofVertex(62,360);
        ofVertex(130,186);
        ofVertex(166,200);
        ofVertex(98,374);
        ofEndShape();
        
        ofFill();
        ofSetColor(249,195,55);
        ofBeginShape();
        ofVertex(62,360);
        ofVertex(69,389);
        ofVertex(98,374);
        ofVertex(62,360);
        ofEndShape();
        
        ofFill();
        ofSetColor(175,48,77);
        ofBeginShape();
        ofVertex(208,420);
        ofVertex(224,471);
        ofVertex(383,418);
        ofVertex(366,368);
        ofVertex(208,420);
        ofEndShape();
        
        ofFill();
        ofSetColor(98,48,109);
        ofBeginShape();
        ofVertex(377,357);
        ofVertex(341,372);
        ofVertex(272,198);
        ofVertex(308,183);
        ofVertex(377,357);
        ofEndShape();
        
        ofFill();
        ofSetColor(245,155,38);
        ofBeginShape();
        ofVertex(340,372);
        ofVertex(365,388);
        ofVertex(377,358);
        ofVertex(340,372);
        ofEndShape();
        
        ofFill();
        ofSetColor(249,195,55);
        ofBeginShape();
        ofVertex(218,223);
        ofBezierVertex(163,223,118,178,118,123);
        ofBezierVertex(118,67,163,23,218,23);
        ofVertex(218,223);
        ofEndShape();
        
        ofFill();
        ofSetColor(245,155,38);
        ofBeginShape();
        ofVertex(218,23);
        ofBezierVertex(274,23,318,67,318,123);
        ofBezierVertex(318,178,274,223,218,223);
        ofVertex(218,23);
        ofEndShape();
        
        ofFill();
        ofSetColor(97,48,99);
        ofBeginShape();
        ofVertex(192,81);
        ofBezierVertex(192,82,187,84,181,84);
        ofBezierVertex(174,84,169,82,169,81);
        ofBezierVertex(169,79,174,77,181,77);
        ofBezierVertex(187,77,192,79,192,81);
        ofEndShape();
        
        ofFill();
        ofSetColor(97,48,99);
        ofBeginShape();
        ofVertex(261,81);
        ofBezierVertex(261,82,256,84,250,84);
        ofBezierVertex(243,84,238,82,238,81);
        ofBezierVertex(238,79,243,77,250,77);
        ofBezierVertex(256,77,261,79,261,81);
        ofEndShape();
        
        ofFill();
        ofSetColor(229,99,144);
        ofBeginShape();
        ofVertex(218,90);
        ofBezierVertex(209,122,194,130,194,130);
        ofVertex(218,130);
        ofVertex(218,90);
        ofEndShape();
        
        
        
}
    void med_shadow(){
        ofFill();
        ofSetColor(5,177,187);
        ofBeginShape();
        ofVertex(418,418);
        ofBezierVertex(418,454,325,482,209,482);
        ofBezierVertex(93,482,0,454,0,418);
        ofBezierVertex(0,383,93,354,209,354);
        ofBezierVertex(325,354,418,383,418,418);
        ofEndShape();
    }
    void med_smoke(){
        ofFill();
        ofSetColor(201,56,97);
        ofBeginShape();
        ofVertex(504,432);
        ofVertex(438,432);
        ofVertex(438,399);
        ofVertex(504,399);
        ofVertex(504,432);
        ofEndShape();
        
        ofFill();
        ofSetColor(245,155,38);
        ofBeginShape();
        ofVertex(504,393);
        ofVertex(438,393);
        ofVertex(438,360);
        ofVertex(504,360);
        ofVertex(504,393);
        ofEndShape();
        
        ofFill();
        ofSetColor(245,192,102);
        ofBeginShape();
        ofVertex(504,419);
        ofVertex(438,419);
        ofVertex(438,405);
        ofVertex(504,405);
        ofVertex(504,419);
        ofEndShape();
        
        ofFill();
        ofSetColor(23,149,107);
        ofBeginShape();
        ofVertex(504,408);
        ofVertex(438,408);
        ofVertex(438,393);
        ofVertex(504,393);
        ofVertex(504,408);
        ofEndShape();
        
        ofFill();
        ofSetColor(253,238,223);
        ofBeginShape();
        ofVertex(477,349);
        ofBezierVertex(411,251,407,203,466,170);
        ofBezierVertex(543,127,379,60,463,0);
        ofBezierVertex(398,61,529,96,525,147);
        ofBezierVertex(522,191,454,202,447,238);
        ofBezierVertex(440,274,477,349,477,349);
        ofEndShape();
        
        

    }
    void door(){ofFill();
        ofSetColor(253,238,223);
        ofBeginShape();
        ofVertex(227,430);
        ofVertex(0,430);
        ofVertex(0,0);
        ofVertex(227,0);
        ofVertex(227,430);
        ofEndShape();
        
        ofFill();
        ofSetColor(252,226,202);
        ofBeginShape();
        ofVertex(194,196);
        ofVertex(27,196);
        ofVertex(27,22);
        ofVertex(194,22);
        ofVertex(194,196);
        ofEndShape();
        
        ofFill();
        ofSetColor(252,226,202);
        ofBeginShape();
        ofVertex(194,401);
        ofVertex(27,401);
        ofVertex(27,228);
        ofVertex(194,228);
        ofVertex(194,401);
        ofEndShape();
        
        ofFill();
        ofSetColor(175,48,77);
        ofBeginShape();
        ofVertex(207,214);
        ofVertex(171,222);
        ofVertex(168,212);
        ofVertex(205,203);
        ofVertex(207,214);
        ofEndShape();
        
        ofFill();
        ofSetColor(175,48,77);
        ofBeginShape();
        ofVertex(217,209);
        ofBezierVertex(217,215,211,221,205,221);
        ofBezierVertex(198,221,193,215,193,209);
        ofBezierVertex(193,202,198,197,205,197);
        ofBezierVertex(211,197,217,202,217,209);
        ofEndShape();
        
        

    }
    void d_doska(){
        ofFill();
        ofSetColor(253,238,223);
        ofRect(0,0,83,158);
        
        ofFill();
        ofSetColor(252,226,202);
        ofRect(10,8,61,64);
        
        ofFill();
        ofSetColor(252,226,202);
        ofRect(10,84,61,64);
    }
    void d_kolco(){
        ofFill();
        ofSetColor(175,48,77);
        ofBeginShape();
        ofVertex(80,77);
        ofBezierVertex(80,79,78,81,75,81);
        ofBezierVertex(73,81,71,79,71,77);
        ofBezierVertex(71,74,73,72,75,72);
        ofBezierVertex(78,72,80,74,80,77);
        ofEndShape();
    }
    void d_hand(){
        ofFill();
        ofSetColor(248,91,70);
        ofBeginShape();
        ofVertex(76,79);
        ofVertex(63,82);
        ofVertex(62,78);
        ofVertex(75,75);
        ofVertex(76,79);
        ofEndShape();
    }
};

#endif
