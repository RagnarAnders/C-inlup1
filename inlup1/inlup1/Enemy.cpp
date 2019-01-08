#include "Enemy.h"


namespace spel {
	Enemy * Enemy::getInstance(std::string path, SDL_Renderer * ren)
	{
		return new Enemy(path, ren);
	}

	Enemy::Enemy(std::string path, SDL_Renderer* ren) :Sprite(path, ren)
	{
	}


	Enemy::~Enemy()
	{
	}
}