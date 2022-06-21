#include "ofMain.h"
#include "ofApp.h"

////========================================================================
//int main( ){
//    ofSetupOpenGL(1920,1080,OF_WINDOW);            // <-------- setup the GL context
//
//    // this kicks off the running of my app
//    // can be OF_WINDOW or OF_FULLSCREEN
//    // pass in width and height too:
//    ofRunApp(new ofApp());
//
//}

int main() {
    ofGLFWWindowSettings settings;

    //���C���E�B���h�E�̏����L�q
    //�E�B���h�E�̕��A����
//    settings.width = 1920;
//    settings.height = 1080;
    settings.decorated = false;
    settings.setSize(1920, 1080);
    //�E�B���h�E��\��������W�i����̍��W���w��j
    settings.setPosition(ofVec2f(0, 0));
    shared_ptr<ofAppBaseWindow> mainWindow = ofCreateWindow(settings);


    //App�̐���
    shared_ptr<ofApp> mainApp(new ofApp);

    ofRunApp(mainWindow, mainApp);


    ofRunMainLoop();
}

