#define WINRENDERER_H
#ifdef WINRENDERER_H
#include <SDL.h>

namespace spel {
	class WinRenderer
	{
	public:
		WinRenderer();
		~WinRenderer();
	private:
		SDL_Window* win;
		SDL_Renderer* ren;
	};

	WinRenderer extern win ;
}


#endif // WINRENDERER_H
