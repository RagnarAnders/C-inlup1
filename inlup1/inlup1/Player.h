#ifndef PLAYER_H
#define PLAYER_H

#pragma once
#include "Sprite.h"
namespace spel {
	class Player : public Sprite
	{
	public:
		static Player* getInstance(std::string path, SDL_Renderer* ren);
		~Player();
	private:
		Player(std::string path, SDL_Renderer* ren);
	};

}
#endif // !PLAYER_H
