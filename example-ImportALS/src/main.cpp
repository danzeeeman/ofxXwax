#include "ofApp.h"
#include "ofAppGlutWindow.h"

int main() {
	ofAppGlutWindow window;
	ofSetupOpenGL(&window, 1024, 128, OF_WINDOW);
	ofRunApp(new ofApp());
}