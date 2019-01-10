#define SPRITE_H
#ifdef SPRITE_H
#include <string>
#include <SDL_image.h>
#include <SDL.h>
#include <iostream>

namespace spel {
	class Sprite
	{
	public:
		virtual SDL_Rect setRekt(int x, int y);
		static Sprite* getInstance(std::string path, SDL_Renderer* ren);
		virtual ~Sprite();
		virtual SDL_Rect getRekt() { return rekt; }
		virtual void makeTexture(std::string path, SDL_Renderer* ren);
		virtual void draw(SDL_Renderer* ren) const;
	protected:
		Sprite(std::string path, SDL_Renderer* ren);
	private:
		SDL_Surface* textSurf;
		SDL_Rect rekt;
		SDL_Texture* texture;
		Sprite(const Sprite&) = delete;
		const Sprite& operator=(const Sprite&) = delete;
	};
}
#endif // SPRITE_H
