#define GAMECONTROLLER_H
#ifdef GAMECONTROLLER_H
#include "sprite.h"

namespace spel {
	class GameController
	{
	public:
		~GameController();
		void processInput(Sprite* s);
	
	};
}
#endif GAMECONTROLLER_H