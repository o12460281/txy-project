#ifndef _FUNC_H_
#define _FUNC_H_
typedef unsigned char u8_t;
typedef unsigned int u32_t;
typedef struct 
{
	int w;
	int h;
	int bpp;
	void *memo;
}fb_scr;

typedef	struct
{
	int dx;
	int dy;
	char button;
}mouse_move;

void init_scr_set(void);
void print_one_point(int x,int y,u32_t color);
void fb_line(int x1,int y1,int x2,int y2,u32_t color);
void fb_circle(int x0,int y0,int r,u32_t color);
void fb_board(void);

void drew_cursor(int x,int y);
void save_bg(int x,int y);
void restore_bg(int x,int y);

void mouse_doing(void);
#endif
