#include "GameEngine.h"
using namespace spel;
int main(int argc, char ** argv) {
	GameEngine engine;
	engine.add(Sprite::getInstance("c:/images/Spider-Man.png"));
	engine.run();

	return 0;
}