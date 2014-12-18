#pragma once
#include <ctime>
#include <iostream>
#include <sstream>
#include"Label.h"
#include"GameState.h"

class Game
{
private:
	float xpos;
	float ypos;
	float xsize;
	float ysize;

	float targetXPos;
	float targetYPos;
	float targetXSize;
	float targetYSize;

	int score;

	clock_t lastTime; // clock_t is an integer type
	clock_t currentTime; // use this to track time between frames

	TTF_Font* textFont;	// SDL type for True-Type font rendering

	// SDL projects do not automatically work with the console window. 
	// On windows with visual studio, the following line is required to use console output

	// data for labels
	GLuint playerLabel;
	GLuint targetLabel;
	int width;
	int height;
	int playerWidth, playerHeight;
	int targetWidth, targetHeight;

	SDL_GLContext glContext; // OpenGL context handle
	SDL_Window *window; // Create window and render context

	void exitFatalError(char *message);
	SDL_Window * setupRC(SDL_GLContext &context);
	void glInit(void);
	int powerOfTwo(int x);
	GLuint createString(const char *str);
	void displayString(float x, float y, GLuint textureID, int w, int h);
	void deleteString(GLuint textureID);
	void draw();
	void handleSDLEvent(SDL_Event const &sdlEvent);

	Label Player;
	Label Target;

public:
	Game();
	void run();
	void init();
};

