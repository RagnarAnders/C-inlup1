#include "GameController.h"

namespace spel {

	GameController::GameController()
	{
	}

	GameController::~GameController()
	{
	}
	void GameController::processInput()
	{
		SDL_Event event;
		while (SDL_PollEvent(&event)) {
			switch (event.type) {
			case SDL_MOUSEBUTTONDOWN: break;
			case SDL_MOUSEBUTTONUP: break;
			case SDL_KEYDOWN: break;
			case SDL_KEYUP: break;
			}//switch
		}//while
	}
}