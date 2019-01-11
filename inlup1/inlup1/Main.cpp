#include "GameEngine.h"
using namespace spel;
int main(int argc, char ** argv) {
	int speed;
	std::string spelarSprite, npcSprite;
	GameEngine engine;
	
	std::cout << "Skriv in spelar objektets spritelokation " << std::endl;
	std::cin >> spelarSprite;
	engine.add(Player::getInstance("c:/images/Spider-Man.jpg", winRen.getRen())); //måste ha en cin med en string istället för vår sprite och vi borde även lägga in en rektstorlekt
	
																				  
	//controller.setSpeed(5); // den här delen fungar EJ. Sitter på fel plats, borde vara en int i GameEngine som sedan skickas in i controllern
	
	
	std::cout << "Skriv in hastighet" << std::endl;
	std::cin >> speed;
	engine.setPSpeed(speed); // sätter hastigheten, behöver också en cin
	
	std::cin >> speed;
	engine.setESpeed(speed); //fienderns speed
	std::cout << "Skriv in npc Objektets sprit" << std::endl;
	std::cin >> npcSprite;
	engine.setEnemyPath("c:/images/gubbe.bmp");//måste ha en cin med sprite istället för vår sprite och vi borde även lägga in en rektstorlek
	engine.run();

	return 0;
}