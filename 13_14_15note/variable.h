#ifndef	_VAR_H_
#define _VAR_H_
#include "func.h"
#define SPACE 30
#define Y_NUM 24
#define X_NUM 29
#define ST_X 100
#define ST_Y 40
#define BLACK 0x0000ff00
#define WHITE 0x00ffffff
extern fbscr_t fb_v;
extern mouse_event m_e;
extern u32_t current_color;
extern char chess_board[X_NUM*Y_NUM];
extern char player; 
extern int mx;
extern int my;
#endif

