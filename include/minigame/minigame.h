#ifndef MINIGAME_INCLUDE_MINIGAME_MINIGAME_H_INCLUDED
#define MINIGAME_INCLUDE_MINIGAME_MINIGAME_H_INCLUDED

#ifdef __cplusplus
extern "C" {
#endif

#ifdef _WIN32
    #define MINIGAME_EXPORT __declspec(dllexport)
#else
    #define MINIGAME_EXPORT
#endif

extern void MINIGAME_EXPORT minigame_init();
extern void MINIGAME_EXPORT minigame_deinit();

extern void MINIGAME_EXPORT minigame_window_open();
extern void MINIGAME_EXPORT minigame_window_swap_buffers();
extern void MINIGAME_EXPORT minigame_window_close();

#ifdef __cplusplus
}
#endif


#endif // MINIGAME_INCLUDE_MINIGAME_MINIGAME_H_INCLUDED