#define GAMEENGINE_H
#ifdef GAMEENGINE_H
#include "GameController.h"

namespace spel {
	class GameEngine
	{
	public:
		void add(Player* newplayer);
		void run(); //loop som k�r de olika del-looparna
		GameEngine();
		~GameEngine();
		void setEnemyPath(std::string path);
		std::string getEnemyPath() const; // varf�r �r den const?
		void tick(unsigned long interval);
	protected: // vi har ingen protteced s� den bordes ta bort
	private:
		Player *player;
		std::string enemyPath;
		std::vector<Sprite*> sprits; //h�r skapas listan f�r f�rsta g�ngen?
	};
}
#endif // GAMEENGINE_H
