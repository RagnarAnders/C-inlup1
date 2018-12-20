#include "GameEngine.h"
#include "WinRenderer.h"

namespace spel {

	GameEngine::GameEngine()
	{
	}

	void GameEngine::run()
	{
		
		bool quit = false;
		while (!quit) {

			GameController controller;
			controller.processInput();
			//Sprite.update();
			winRen.render();

			SDL_Delay(5000);

			quit = true;
		}
	}

	GameEngine::~GameEngine()
	{
	}
	
}