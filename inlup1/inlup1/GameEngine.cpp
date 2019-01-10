#include "GameEngine.h"
#define FPS 60

namespace spel {
	void GameEngine::add(Player* newplayer)
	{
		
		player = newplayer;
	}
	GameEngine::GameEngine()
	{
	}

	void GameEngine::run()
	{
		GameController controller;
		Spawn spawn;
		int count = 0;
		bool quit = false;
		while (!quit)
		{
			
			unsigned long interval = 16;
			quit = controller.processInput(player);//vectorn ska skickas med i den här parametern
			if (count == 0 || count == 300 || count == 600) {
				spawn.create(&sprits, getEnemyPath());
			}
			count++;
			spawn.update(&sprits);
			winRen.render(sprits, player);
			tick(interval);
			if (count == 900)
				count = 0;
			
		}
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