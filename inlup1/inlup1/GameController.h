#define GAMECONTROLLER_H
#ifdef GAMECONTROLLER_H
#include <SDL.h>

namespace spel {
	class GameController
	{
	public:
		GameController();
		~GameController();
		void processInput();
	};
}
#endif GAMECONTROLLER_H