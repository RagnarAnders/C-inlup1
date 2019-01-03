#include "GameEngine.h"

namespace spel {
	void GameEngine::add(Sprite * sp)
	{
		sprits.push_back(sp);
	}
	GameEngine::GameEngine()
	{
	}

	void GameEngine::run()
	{
		
		bool quit = false;
		while (!quit) {

			GameController controller;
			controller.processInput(sprits);//vectorn ska skickas med i den här parametern
			//Sprite.update();
			winRen.render();
		}
	}

	GameEngine::~GameEngine()
	{
	}
	
}