#define GAMECONTROLLER_H
#ifdef GAMECONTROLLER_H
#include "WinRenderer.h"

namespace spel {
	class GameController
	{
	public:
		GameController();
		~GameController();
		bool processInput(std::vector<Sprite*> sp);
	
	};
}
#endif GAMECONTROLLER_H