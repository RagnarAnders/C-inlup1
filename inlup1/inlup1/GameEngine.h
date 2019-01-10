#define GAMEENGINE_H
#ifdef GAMEENGINE_H
#include "GameController.h"

namespace spel {
	class GameEngine
	{
	public:
		void add(Player* newplayer);
		void run();
		GameEngine();
		~GameEngine();
		void setEnemyPath(std::string path);
		std::string getEnemyPath() const;
		void tick(unsigned long interval);
	protected:
	private:
		Player *player;
		std::string enemyPath;
		std::vector<Sprite*> sprits;
	};
}
#endif // GAMEENGINE_H
