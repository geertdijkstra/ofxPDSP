#pragma once

#include "ofMain.h"
#include "ofxPDSP.h"
#include "synths.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);

        // pdsp modules
        pdsp::Engine            engine;
        SineBleep               lead;
        BassSynth               bass;
        
        std::vector<pdsp::Sequence>  lead_seqs;
        std::vector<pdsp::Sequence>  bass_seqs;
        
        pdsp::SeqChange         alternate;
        bool                    alternate_flag;
        
        int                     seq_mode;
        
        std::atomic<bool>       quantize;
        std::atomic<double>     quantime;

};