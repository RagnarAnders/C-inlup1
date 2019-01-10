#include "Enemy.h"


namespace spel {
	Enemy * Enemy::getInstance(std::string path, SDL_Renderer * ren)
	{
		return new Enemy(path, ren);
	}

	Enemy::Enemy(std::string path, SDL_Renderer* ren)
	{
		makeTexture(path, ren);
	}


	Enemy::~Enemy()
	{
		
	}

	void Enemy::makeTexture(std::string path, SDL_Renderer* ren) //skapar texturen
	{
		//SDL_Surface surface = IMG_Load(path.c_str());


		textSurf = IMG_Load(path.c_str());
		rekt = { 600,0,textSurf->w, textSurf->h };
		texture = SDL_CreateTextureFromSurface(ren, textSurf);
		SDL_FreeSurface(textSurf);
	}
}