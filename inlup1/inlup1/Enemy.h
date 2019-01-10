#ifndef ENEMY_H
#define ENEMY_H

#include "Sprite.h"

namespace spel {
	class Enemy : public Sprite
	{
	public:
		
		~Enemy();
		static Enemy* getInstance(std::string path, SDL_Renderer* ren);
		void makeTexture(std::string path, SDL_Renderer* ren);
	private:
		Enemy(std::string path, SDL_Renderer* ren);
	};
}
#endif // !ENEMY_H