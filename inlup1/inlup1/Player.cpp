#include "Player.h"


namespace spel {
	Player::Player(std::string path, SDL_Renderer* ren)
	{
		makeTexture(path, ren);
	}


	Player * Player::getInstance(std::string path, SDL_Renderer * ren)
	{
		return new Player(path,ren);
	}

	Player::~Player()
	{
	}
	void Player::makeTexture(std::string path, SDL_Renderer* ren) //skapar texturen
	{
		//SDL_Surface surface = IMG_Load(path.c_str());


		textSurf = IMG_Load(path.c_str());
		rekt = { 0,0,textSurf->w, textSurf->h };
		texture = SDL_CreateTextureFromSurface(ren, textSurf);
		SDL_FreeSurface(textSurf);
	}
}