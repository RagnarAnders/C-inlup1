#include "Player.h"


namespace spel {
	Player::Player(std::string path, SDL_Renderer* ren):Sprite(path, ren)
	{
	}


	Player * Player::getInstance(std::string path, SDL_Renderer * ren)
	{
		return new Player(path,ren);
	}

	Player::~Player()
	{
	}
}