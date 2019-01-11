#define GAMECONTROLLER_H
#ifdef GAMECONTROLLER_H
#include "Spawn.h"

namespace spel {
	class GameController
	{
	public:
		GameController();
		~GameController();
		bool processInput(Player *p);
		void setSpeed(int newSpeed);
	private:
		int speed = 10;
	};
}
#endif GAMECONTROLLER_H