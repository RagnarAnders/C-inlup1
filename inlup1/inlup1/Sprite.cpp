#include "Sprite.h"


namespace spel {
	
	Sprite::Sprite(std::string path)
	{
		makeTexture(path);
	}

	void Sprite::draw() const {
		SDL_RenderCopy(winRen.getRen(), texture, NULL, &rekt
);
	}

	


	//Sprite * Sprite::getInstance(const SDL_Rect & r) //den här kanske vi inte ska ha alls, ifall vi ska ha underklasser
	//{
	//	return new Sprite(r);
	//}

	Sprite * Sprite::getInstance(std::string path) {
		//s.rekt = ;
		return new Sprite(path);
	}

	Sprite::~Sprite()
	{
	}
	void Sprite::makeTexture(std::string path) //skapar texturen
	{
		//SDL_Surface surface = IMG_Load(path.c_str());


		textSurf = IMG_Load(path.c_str());
		rekt = { 0,0,textSurf->w, textSurf->h };
		texture = SDL_CreateTextureFromSurface(winRen.getRen(), textSurf);
		SDL_FreeSurface(textSurf);
	}
}