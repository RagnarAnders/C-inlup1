#define GAMEENGINE_H
#ifdef GAMEENGINE_H
#include <vector>
#include<SDL.h>

namespace spel {
	class GameEngine
	{
	public:
		GameEngine();
		~GameEngine();

		void run();
	};

}
#endif // GAMEENGINE_H
