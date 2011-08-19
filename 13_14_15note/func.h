#ifndef _FUNC_H_
#define _FUNC_H_
typedef unsigned char u8_t;
typedef unsigned int  u32_t;
typedef struct
{
	int w;
	int h;
	int bpp;
	void *memo;
}fbscr_t;
typedef struct
{
	int dx;
	int dy;
	char botton;
	
}mouse_event;
void init_date(void);
void print_poin_set(int x,int y,u32_t color);
void fb_line(int x1,int y1,int x2,int y2,u32_t color);
void fb_circle(int x0,int y0,int r,u32_t color);
void print_board(void);
void drew_cursor(int x,int y);
void save_bg(int x,int y);
void restore_bg(int x,int y);
void mouse_doing(void);
int get_mouse_info(int fd,mouse_event *p);
int chess_align();
//void chess_put(int x,int y);
#endif
