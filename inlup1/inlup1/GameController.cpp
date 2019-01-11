#include "GameController.h"

namespace spel {
	GameController::GameController()
	{
	}

	GameController::~GameController()
	{
	}
<<<<<<< HEAD

	bool GameController::processInput(Player *p, int speed)
	{
		SDL_Event event;
		while (SDL_PollEvent(&event)) {
			int moveX = speed, moveY= speed;
			
=======
	bool GameController::processInput(Player *p)
	{
		SDL_Event event;
		while (SDL_PollEvent(&event)) {
			int moveX =0, moveY= 0;
>>>>>>> parent of 5719012... Kommentarer och Speed funktion
			switch (event.type) {
			case SDL_QUIT: return true; break;
			case SDL_KEYDOWN:
				switch (event.key.keysym.sym) {
<<<<<<< HEAD
				case SDLK_UP: moveY = -speed; // här måste vi lägga in att spelaren inte kan gå utanför kanterna
				break;
				case SDLK_DOWN: moveY = speed;
				break;
				case SDLK_RIGHT: moveX = speed;
=======
				case SDLK_UP: moveY = -1;
>>>>>>> parent of 5719012... Kommentarer och Speed funktion
				break;
				case SDLK_DOWN: moveY = 1;
				break;
				case SDLK_RIGHT: moveX = 1; break;
				case SDLK_LEFT:moveX =- 1; break;
				} break; //innre switch
			case SDL_KEYUP: break;
			}//yttre switch
			
			p->setRekt(moveX, moveY);
			SDL_RenderPresent(winRen.getRen());
		}//while
		return false;
	}
}