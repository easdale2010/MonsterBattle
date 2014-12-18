#pragma once
#include <SDL_ttf.h>
#include <SDL_opengl.h>
class Label
{
	
	private:
		GLuint texID;
		GLuint height;
		GLuint width;
		TTF_Font* textFont;	// SDL type for True-Type font rendering
	public:
		void textToTexture(char *str);
		void drawLabel(float x, float y);
		int powerOfTwo(int x);
		Label(){ };
		~Label(){ };
};

