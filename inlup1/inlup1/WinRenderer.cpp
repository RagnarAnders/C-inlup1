#include "WinRenderer.h"

namespace spel {

	WinRenderer::WinRenderer()
	{
		SDL_Init(SDL_INIT_EVERYTHING);
		if (SDL_Init == nullptr) {
			std::cerr << "FEL(Init_Everthing): " << SDL_GetError() << std::endl;
		}
		win = SDL_CreateWindow("Spel", 100, 100, 800, 600, 0);
		if (win == nullptr) {
			std::cerr << "FEL(Window): " << SDL_GetError() << std::endl;
		}
		ren = SDL_CreateRenderer(win, -1, 0);
		if (ren == nullptr) {
			std::cerr << "FEL(Renderer): " << SDL_GetError() << std::endl;
		}
		SDL_SetRenderDrawColor(ren, 200, 0, 0, 255);
	}

	WinRenderer::~WinRenderer()
	{
		std::cout << "winRen";
		SDL_RenderClear(ren);
		SDL_DestroyWindow(win);
		SDL_DestroyRenderer(ren);
		SDL_Quit();
	}

	void WinRenderer::render(std::vector<Sprite*> sp, Player* p)
	{	
		SDL_RenderClear(ren);
		for (Sprite* s : sp) {
			s->draw(getRen());
		}
		p->draw(getRen());
		SDL_RenderPresent(ren);
	}
	WinRenderer winRen;
}