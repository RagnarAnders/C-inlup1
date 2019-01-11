#ifndef SPAWN_H
#define SPAWN_H
#include "WinRenderer.h"
#include <algorithm>
namespace spel {
	class Spawn
	{
	public:
		void create(std::vector<Sprite*> *sp, std::string path);
		void update(std::vector<Sprite*> *sp, int x);
		bool collision(std::vector<Sprite*> *sp, Player *p);
		void del(std::vector<Sprite*> *sp);
		Spawn();
		~Spawn();
	private:	
	};
}
#endif // !SPAWN_H