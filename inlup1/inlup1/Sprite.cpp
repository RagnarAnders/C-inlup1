#include "Sprite.h"


namespace spel {
	
	Sprite::Sprite() 
	{
		
	}

	void Sprite::draw(SDL_Renderer* ren) const {
		SDL_RenderCopy(ren, texture, NULL, &rekt);
	}

	SDL_Rect Sprite::setRekt(int x, int y)
	{
		
		rekt.x += x;
		rekt.y += y;
		return rekt; 
		
	}

	//void Sprite::makeTexture(std::string path, SDL_Renderer* ren) //skapar texturen
	//{
	//	//SDL_Surface surface = IMG_Load(path.c_str());


	//	textSurf = IMG_Load(path.c_str());
	//	rekt = {0,0,textSurf->w, textSurf->h };
	//	texture = SDL_CreateTextureFromSurface(ren, textSurf);
	//	SDL_FreeSurface(textSurf);
	//}


	Sprite::~Sprite()
	{
	}
	
}