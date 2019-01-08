#include "GameController.h"

namespace spel {

	GameController::~GameController()
	{
	}
	void GameController::processInput(Sprite* s)
	{
		SDL_Event event;
		while (SDL_PollEvent(&event)) {
			int moveX =0, moveY= 0;
			switch (event.type) {
			case SDL_MOUSEBUTTONDOWN: break;
				switch (event.key.keysym.sym) {
				case SDLK_UP: moveY = -1;
				break;
				case SDLK_DOWN: moveY = 1;
				break;
			case SDLK_RIGHT: moveX = 1; break;
			case SDLK_LEFT:moveX =- 1; break;
				}
			case SDL_MOUSEBUTTONUP: break;
			case SDL_KEYDOWN: break;
			case SDL_KEYUP: break;
			}//switch
			SDL_RenderClear(winRen.getRen());
			
				s->setRekt(moveX, moveY);
				s->draw();
		
			SDL_RenderPresent(winRen.getRen());
		}//while
	}
}