#define GAMEENGINE_H
#ifdef GAMEENGINE_H
#include "GameController.h"

namespace spel {
	class GameEngine
	{
	public:
		void add(Player* newplayer);
		void run(); //loop som kör de olika del-looparna
		GameEngine();
		~GameEngine();
		void setEnemyPath(std::string path);
		std::string getEnemyPath() const; // varför är den const?
		void tick(unsigned long interval);
	protected: // vi har ingen protteced så den bordes ta bort
	private:
		Player *player;
		std::string enemyPath;
		std::vector<Sprite*> sprits; //här skapas listan för första gången?
	};
}
#endif // GAMEENGINE_H
