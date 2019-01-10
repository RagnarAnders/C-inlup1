#define GAMECONTROLLER_H
#ifdef GAMECONTROLLER_H
#include "Spawn.h"

namespace spel {
	class GameController
	{
	public:
		GameController();
		~GameController();
		bool processInput(std::vector<Sprite*> *sp);
	
	};
}
#endif GAMECONTROLLER_H