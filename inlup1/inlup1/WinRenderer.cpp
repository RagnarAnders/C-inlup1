#include "WinRenderer.h"

namespace spel {

	WinRenderer::WinRenderer()
	{
		SDL_Init(SDL_INIT_EVERYTHING);
		win = SDL_CreateWindow("Spel", 100, 100, 800, 600, 0);
		ren = SDL_CreateRenderer(win, -1, 0);
		SDL_SetRenderDrawColor(ren, 200, 0, 0, 255);
	}


	WinRenderer::~WinRenderer()
	{
		SDL_DestroyWindow(win);
		SDL_DestroyRenderer(ren);
		SDL_Quit();
	}

	void WinRenderer::render(std::vector<Sprite*> sp)
	{
		
		SDL_RenderClear(ren);
		for (Sprite* s : sp) {
			s->draw(getRen());
		}
		
		SDL_RenderPresent(ren);
	}

	

	WinRenderer winRen;

}