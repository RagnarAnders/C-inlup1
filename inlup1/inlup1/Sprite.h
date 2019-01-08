#define SPRITE_H
#ifdef SPRITE_H
#include <string>
#include <SDL_image.h>
#include "WinRenderer.h"

namespace spel {
	class Sprite
	{
	public:
		SDL_Rect setRekt(int x, int y) { 
			rekt.x += x;
			rekt.y += y;
			return rekt; }
//		static Sprite* getInstance(const SDL_Rect &r);
		static Sprite* getInstance(std::string path);
		~Sprite();
		SDL_Rect getRekt() { return rekt; }
		void makeTexture(std::string path);
		void draw() const;
	protected:
		Sprite(std::string path);
	private:
		SDL_Surface* textSurf;
		SDL_Rect rekt;
		SDL_Texture* texture;
		Sprite(const Sprite&) = delete;
		const Sprite& operator=(const Sprite&) = delete;
	};
}
#endif // SPRITE_H
