#define WINRENDERER_H
#ifdef WINRENDERER_H
#include <vector>
#include "Player.h"

namespace spel {
	class WinRenderer
	{
	public:
		WinRenderer();
		~WinRenderer();
		void render(std::vector<Sprite*> sp);
		SDL_Renderer* getRen() const { return ren; }
	private:
		SDL_Window* win;
		SDL_Renderer* ren;
	};


	extern WinRenderer winRen ;
}


#endif // WINRENDERER_H
