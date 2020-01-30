#include<iostream>
using namespace std;

#include<allegro5/allegro.h>
#include<allegro5/allegro_font.h>
#include<allegro5/allegro_ttf.h>

enum gamestates{INTRO, PLAYING, PAUSE, END};

int main() {

	int gamestate = INTRO;
	bool running = true;
	char input;

	while (running) {
		switch (gamestate) {
		case INTRO:
			cout << "welcome to the game!" << endl;
			cout << "press 's' to start" << endl << endl;
			break;
		case PLAYING:
			cout << "Beep Boop you're playing the game!" << endl;
			cout << "press 'p' to pause or 'q' to quit" << endl << endl;
			break;
		case PAUSE:
			cout << "Game paused." << endl;
			cout << "press 'c' to continue" << endl << endl;
			break;
		case END:
			cout << "The end, thanks for playing." << endl;
			running = false;
			break;
		default:
			cout << "you should never see this message." << endl;
		}//end switch

		if(running == true)
			cin >> input;

		if (gamestate == INTRO && input == 's')
			gamestate = PLAYING;
		if (gamestate == PLAYING && input == 'p')
			gamestate = PAUSE;
		if (gamestate == PLAYING && input == 'q')
			gamestate = END;
		if (gamestate == PAUSE && input == 'c')
			gamestate = PLAYING;
		

	}//end game loop
	cout << "goodbye." << endl;
}
