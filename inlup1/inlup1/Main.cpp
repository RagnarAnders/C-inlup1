#include "GameEngine.h"
using namespace spel;
int main(int argc, char ** argv) {
	GameEngine engine;
	engine.add(Player::getInstance("c:/images/notPressed.jpg", winRen.getRen()));
	
	GameController controller;
	controller.setSpeed(5); // den här delen fungar EJ

	engine.setEnemyPath("c:/images/gubbe.bmp");
	engine.run();

	return 0;
}