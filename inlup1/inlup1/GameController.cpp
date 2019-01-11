#include "GameController.h"

namespace spel {
	GameController::GameController()
	{
	}

	void GameController::setSpeed(int newSpeed) {
		newSpeed = speed;
	}

	GameController::~GameController()
	{
	}

	bool GameController::processInput(Player *p)
	{
		SDL_Event event;
		while (SDL_PollEvent(&event)) {
			int moveX =0, moveY= 0;
			
			switch (event.type) {
			case SDL_QUIT: return true; break;
			case SDL_KEYDOWN:
				switch (event.key.keysym.sym) {
				case SDLK_UP: moveY = -speed;
				break;
				case SDLK_DOWN: moveY = speed;
				break;
				case SDLK_RIGHT: moveX = speed;
				break;
				case SDLK_LEFT:moveX = - speed; 
				break;
				} break; //innre switch
			case SDL_KEYUP: break;
			}//yttre switch
			
			p->setRekt(moveX, moveY);
			SDL_RenderPresent(winRen.getRen());
		}//while
		return false;
	}
}