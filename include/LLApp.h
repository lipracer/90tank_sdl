#ifndef __LLAPP_H__
#define __LLAPP_H__

#include <string>
#include "SDL.h"

using namespace std;

class LLApp
{
public:
	LLApp(string title, int x, int y, int width = 500, int height = 500);
	~LLApp();
	int event_loop();
private:
	int load_image();
	void draw_map();
private:
	SDL_Window *m_hwnd;
	SDL_Renderer *m_renderer;
};

#endif