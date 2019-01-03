#include "GameController.h"

namespace spel {

	GameController::~GameController()
	{
	}
	void GameController::processInput(std::vector<Sprite*> sp)
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
			for (Sprite *s : sp) { // använd denna lista för att flytta ner fiender
				s->setRekt(moveX, moveY);
				s->draw();
			}
			SDL_RenderPresent(winRen.getRen());
		}//while
	}
}