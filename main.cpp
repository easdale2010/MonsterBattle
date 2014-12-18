#include <string>
#include"Game.h"

#if _DEBUG
#pragma comment(linker, "/subsystem:\"console\" /entry:\"WinMainCRTStartup\"")
#endif



int main(int argc, char *argv[])
{

	// SDL_GLContext glContext; // OpenGL context handle
	Game *newGame = new Game();

	newGame->init(); // initialise the OpenGL and game variables
	newGame->run();

	delete newGame;
	return 0;
}


