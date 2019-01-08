#include "GameEngine.h"
#define FPS 60

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
		GameController controller;
		Spawn spawn;
		bool quit = false;
		do
		{
			unsigned long interval = 16;
			quit = controller.processInput(sprits);//vectorn ska skickas med i den här parametern
			spawn.create(&sprits, getEnemyPath());
			
			winRen.render(sprits);
			tick(interval);
			
		} while (!quit);
	}

	GameEngine::~GameEngine()
	{
	}

	void GameEngine::setEnemyPath(std::string path)
	{
		enemyPath = path;
	}

	

	std::string GameEngine::getEnemyPath() const
	{
		return std::string(enemyPath);
	}

	void GameEngine::tick(unsigned long interval)
	{
		auto timer = SDL_GetTicks();
		//DWORD startTime = GetTickCount();

		while (SDL_GetTicks() < (timer + interval))
		{
			//Väntar bara
		}
	}
	
}