#include "GameEngine.h"
using namespace spel;
int main(int argc, char ** argv) {
	GameEngine engine;
	engine.add(Player::getInstance("c:/images/Spider-Man.png", winRen.getRen()));

	engine.setEnemyPath("c:/images/gubbe.bmp");
	engine.run();

	return 0;
}