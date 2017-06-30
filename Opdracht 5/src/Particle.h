#pragma once

#include "ofMain.h"

class Particle {
	public:

		float radius;
	
		float angle;
		float randomValue;
		ofVec2f startPosition; 
		ofPoint position;
		ofVec2f speed;
		Particle(int startX, int startY);
		ofColor centerColour, middleColour, outerColour;
		void Draw();
		virtual void Handle();
		void SetColors(ofColor center, ofColor middle, ofColor outer);
};

