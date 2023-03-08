#include <stdio.h> /* printf and fprintf */
#include <stdbool.h>

#ifdef _WIN32
#include <SDL2/SDL.h> /* Windows-specific SDL2 library */
#else
#include <SDL2/SDL.h> /* macOS- and GNU/Linux-specific */
#endif

typedef struct{
    unsigned int screenWidth;
    unsigned int screenHeight;
    unsigned int screenPositionX;
    unsigned int screenPositionY;
    unsigned int screenSize;
    bool isFullscreen;
    bool screenMaximized;

}Window;

unsigned int getScreenSizeInPixels(SDL_DisplayMode screen);
// SDL_GetCurrentDusplayMode(0, %screen) will return virtual resolution not physical resolution 
// Fullscreen SDL_GetRendererOutputSize()
// Non-Fulscreen SDL_GetDesktpoDisplayMode

SDL_Window createWindow(Window *screen);

