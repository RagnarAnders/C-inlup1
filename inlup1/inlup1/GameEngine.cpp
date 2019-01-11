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
			quit = controller.processInput(player, playerSpeed);
			if (count == 0 || count == 300 || count == 600) {
				spawn.create(&sprits, getEnemyPath());
			}
			count++;
<<<<<<< HEAD
			spawn.update(&sprits, enemySpeed);
=======
			spawn.update(&sprits);
			winRen.render(sprits, player);
			tick(interval);
>>>>>>> parent of 5719012... Kommentarer och Speed funktion
			spawn.collision(&sprits, player);
			winRen.render(sprits, player);
			tick(interval);
			if (count == 900)
				count = 0;
		}
	}

	GameEngine::~GameEngine()
	{
		delete player;
		sprits.clear();
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

<<<<<<< HEAD
		while (SDL_GetTicks() < (timer + interval)) // den här metoden används inte? den här metoden skapar vår fps
=======
		while (SDL_GetTicks() < (timer + interval))
>>>>>>> parent of 5719012... Kommentarer och Speed funktion
		{
			//Väntar bara
		}
	}
}