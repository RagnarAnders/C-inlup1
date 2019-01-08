#define GAMECONTROLLER_H
#ifdef GAMECONTROLLER_H
#include <vector>
#include "Sprite.h"

namespace spel {
	class GameController
	{
	public:
		~GameController();
		void processInput(std::vector<Sprite*> sp);
	
	};
}
#endif GAMECONTROLLER_H