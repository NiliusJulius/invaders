#ifndef _MUSIC
#define _MUSIC

#include <gb/gb.h>

#define MUSIC_INTRO 0

void init_sound();
void set_music(UINT8 song);
void play_music();
void stop_music();
void restart_music();

#endif