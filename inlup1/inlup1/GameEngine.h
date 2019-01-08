#define GAMEENGINE_H
#ifdef GAMEENGINE_H
#include "GameController.h"

namespace spel {
	class GameEngine
	{
	public:
		void add(Sprite* sp);
		void run();
		GameEngine();
		~GameEngine();
		void tick(unsigned long interval);
	protected:
	private:
		std::vector<Sprite*> sprits;
	};

}
#endif // GAMEENGINE_H
