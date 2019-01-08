#include "Sprite.h"


namespace spel {
	
	Sprite::Sprite(std::string path, SDL_Renderer* ren)
	{
		makeTexture(path, ren);
	}

	void Sprite::draw(SDL_Renderer* ren) const {
		SDL_RenderCopy(ren, texture, NULL, &rekt);
	}

	


	//Sprite * Sprite::getInstance(const SDL_Rect & r) //den här kanske vi inte ska ha alls, ifall vi ska ha underklasser
	//{
	//	return new Sprite(r);
	//}

	Sprite * Sprite::getInstance(std::string path, SDL_Renderer* ren) {
		//s.rekt = ;
		return new Sprite(path, ren);
	}

	Sprite::~Sprite()
	{
	}
	void Sprite::makeTexture(std::string path, SDL_Renderer* ren) //skapar texturen
	{
		//SDL_Surface surface = IMG_Load(path.c_str());


		textSurf = IMG_Load(path.c_str());
		rekt = { 0,0,textSurf->w, textSurf->h };
		texture = SDL_CreateTextureFromSurface(ren, textSurf);
		SDL_FreeSurface(textSurf);
	}
}