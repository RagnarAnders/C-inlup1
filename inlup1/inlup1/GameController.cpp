#include "GameController.h"

namespace spel {
	GameController::GameController()
	{
	}

	GameController::~GameController()
	{
	}
	bool GameController::processInput(std::vector<Sprite*> sp)
	{
		SDL_Event event;
		while (SDL_PollEvent(&event)) {
			int moveX =0, moveY= 0;
			switch (event.type) {
			case SDL_QUIT: return true; break;
			case SDL_KEYDOWN:
				switch (event.key.keysym.sym) {
				case SDLK_UP: moveY = -1;
				break;
				case SDLK_DOWN: moveY = 1;
				break;
				case SDLK_RIGHT: moveX = 1; break;
				case SDLK_LEFT:moveX =- 1; break;
				} break; //innre switch
			case SDL_KEYUP: break;
			}//yttre switch
			SDL_RenderClear(winRen.getRen());
			for (Sprite *s : sp) { // använd denna lista för att flytta ner fiender
				if(Player* p = dynamic_cast<Player*>(s))
				p->setRekt(moveX, moveY);
				//s->draw(); flyttas till renderer
			}
			SDL_RenderPresent(winRen.getRen());
		}//while
		return false;
	}
}