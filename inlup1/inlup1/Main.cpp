#include "GameEngine.h"
using namespace spel;
int main(int argc, char ** argv) {
	GameEngine engine;
	engine.add(Sprite::getInstance("c:/images/Spider-Man.png", winRen.getRen()));
	engine.add(Sprite::getInstance("c:/images/gubbe.bmp", winRen.getRen()));
	engine.run();

	return 0;
}