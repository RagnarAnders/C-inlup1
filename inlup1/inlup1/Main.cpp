#include "GameEngine.h"
using namespace spel;
int main(int argc, char ** argv) {
	int speed;
	std::string spelarSprite, npcSprite;
	GameEngine engine;
<<<<<<< HEAD
	
	std::cout << "Skriv in spelar objektets spritelokation " << std::endl;
	std::cin >> spelarSprite;
	engine.add(Player::getInstance("c:/images/Spider-Man.jpg", winRen.getRen())); //m�ste ha en cin med en string ist�llet f�r v�r sprite och vi borde �ven l�gga in en rektstorlekt
	
																				  
	//controller.setSpeed(5); // den h�r delen fungar EJ. Sitter p� fel plats, borde vara en int i GameEngine som sedan skickas in i controllern
	
	
	std::cout << "Skriv in hastighet" << std::endl;
	std::cin >> speed;
	engine.setPSpeed(speed); // s�tter hastigheten, beh�ver ocks� en cin
	
	std::cin >> speed;
	engine.setESpeed(speed); //fienderns speed
	std::cout << "Skriv in npc Objektets sprit" << std::endl;
	std::cin >> npcSprite;
	engine.setEnemyPath("c:/images/gubbe.bmp");//m�ste ha en cin med sprite ist�llet f�r v�r sprite och vi borde �ven l�gga in en rektstorlek
=======
	engine.add(Player::getInstance("c:/images/Spider-Man.png", winRen.getRen()));

	engine.setEnemyPath("c:/images/gubbe.bmp");
>>>>>>> parent of 5719012... Kommentarer och Speed funktion
	engine.run();

	return 0;
}