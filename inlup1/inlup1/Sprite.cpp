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

	Sprite::~Sprite()
	{
		SDL_DestroyTexture(texture);
		delete &rekt;
	}
}