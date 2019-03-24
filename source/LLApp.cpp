#include "LLApp.h"
#include <cassert>

LLApp::LLApp(string title, int x, int y, int width, int height)
{
	int init_ret = SDL_Init(SDL_INIT_EVERYTHING);
	assert(init_ret != -1);
	m_hwnd = SDL_CreateWindow(title.c_str(), x, y, width, height, SDL_WINDOW_RESIZABLE);
	m_renderer = SDL_CreateRenderer(m_hwnd, -1, SDL_RENDERER_ACCELERATED);
}

LLApp::~LLApp()
{
}

int LLApp::load_image() 
{
	SDL_Surface *bb = SDL_LoadBMP("Background.bmp");
}

void LLApp::draw_map() 
{

}

int LLApp::event_loop()
{
	SDL_Event event;
	bool quit = false;
	while (quit == false)
	{
		if (SDL_WaitEvent(&event))
		{
			switch (event.type)
			{
			case SDL_QUIT:
				SDL_DestroyWindow(m_hwnd);
				quit = true;
				break;
			case SDL_RENDER_TARGETS_RESET:

				break;
			default:
				break;
			}
		}
		SDL_RenderClear(m_renderer);
		SDL_RenderPresent(m_renderer);
	}
	return true;
}