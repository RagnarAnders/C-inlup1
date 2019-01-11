#define GAMECONTROLLER_H
#ifdef GAMECONTROLLER_H
#include "Spawn.h"

namespace spel {
	class GameController
	{
	public:
		GameController();
		~GameController();
		bool processInput(Player *p, int speed);
	};
}
#endif GAMECONTROLLER_H