#include "Spawn.h"


namespace spel {
	
	void Spawn::create(std::vector <Sprite*> *sp, std::string path)
	{

		Enemy *e = Enemy::getInstance(path, winRen.getRen());
		sp->push_back(e);
		
	}
	Spawn::Spawn()
	{
	}


	Spawn::~Spawn()
	{
	}
}