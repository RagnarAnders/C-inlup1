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
<<<<<<< HEAD
<<<<<<< HEAD
		void setPSpeed(int x) {
			playerSpeed = x;
		}
		void setESpeed(int x) {
			enemySpeed = x;
		}
=======
	protected:
>>>>>>> parent of 5719012... Kommentarer och Speed funktion
=======
	protected:
>>>>>>> parent of 5719012... Kommentarer och Speed funktion
	private:
		int playerSpeed = 0, enemySpeed = 0;
		Player *player;
		std::string enemyPath;
		std::vector<Sprite*> sprits;
	};
}
#endif // GAMEENGINE_H
