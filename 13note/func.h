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
void init_date(void);
void print_poin_set(int x,int y,u32_t color);
void fb_line(int x1,int y1,int x2,int y2,u32_t color);
#endif
