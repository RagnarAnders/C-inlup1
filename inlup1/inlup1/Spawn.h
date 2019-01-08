#ifndef SPAWN_H
#define SPAWN_H
#include "WinRenderer.h"
namespace spel {
	class Spawn
	{
	public:
		void create(std::vector<Sprite*> *sp, std::string path);
		void update();
		Spawn();
		~Spawn();
	private:
		
	};

}
#endif // !SPAWN_H