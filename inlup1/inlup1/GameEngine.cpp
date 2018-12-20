#include "GameEngine.h"
#include "WinRenderer.h"

namespace spel {

	GameEngine::GameEngine()
	{
	}

	void GameEngine::run()
	{
		SDL_SetRenderDrawColor(winRen.getRen(), 200, 0, 0, 255);
		bool quit = false;
		while (!quit) {

			//GameController.processInput();
			//Sprite.update();
			//winRen.Render();
			SDL_RenderClear(winRen.getRen());
			SDL_RenderPresent(winRen.getRen());
		}
	}

	GameEngine::~GameEngine()
	{
	}
	
}