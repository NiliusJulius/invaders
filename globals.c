#include <stdint.h>
#include <stdbool.h>
#include "globals.h"
#include "bcd.h"
#include "typedefs.h"

uint8_t game_state;

BCD score;

player_t player;
bullet_t player_bullet;
enemy_t enemies[ENEMY_ARRAY_LENGTH];
explosion_t explosion;

uint8_t enemy_movement_timer;

// Used to determine movement for next turn.
uint8_t cur_leftmost_enemy_x;
uint8_t cur_rightmost_enemy_x;

uint8_t prev_rightmost_enemy_x;
uint8_t prev_leftmost_enemy_x;

// Movement for this turn.
int8_t movement_x;
int8_t movement_y;

bool enemies_move_left;