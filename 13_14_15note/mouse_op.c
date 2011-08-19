#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include "func.h"
#include "variable.h"
#define C_W 10
#define C_H 17
#define BORD 0x00000f0f
#define T___ 0x00000000
#define X___ 0x00ffffff
static u32_t cursor_pixel[C_W*C_H]=
{
	BORD,T___,T___,T___,T___,T___,T___,T___,T___,T___,
	BORD,BORD,T___,T___,T___,T___,T___,T___,T___,T___,
	BORD,X___,BORD,T___,T___,T___,T___,T___,T___,T___,
	BORD,X___,X___,BORD,T___,T___,T___,T___,T___,T___,
	BORD,X___,X___,X___,BORD,T___,T___,T___,T___,T___,	
	BORD,X___,X___,X___,X___,BORD,T___,T___,T___,T___,
	BORD,X___,X___,X___,X___,X___,BORD,T___,T___,T___,
	BORD,X___,X___,X___,X___,X___,X___,BORD,T___,T___,
	BORD,X___,X___,X___,X___,X___,X___,X___,BORD,T___,
	BORD,X___,X___,X___,X___,X___,X___,X___,X___,BORD,
	BORD,X___,X___,X___,X___,X___,BORD,BORD,BORD,BORD,
	BORD,X___,X___,BORD,X___,X___,BORD,T___,T___,T___,
	BORD,X___,BORD,T___,BORD,X___,X___,BORD,T___,T___,
	BORD,BORD,T___,T___,BORD,X___,X___,BORD,T___,T___,
	T___,T___,T___,T___,T___,BORD,X___,X___,BORD,T___,
	T___,T___,T___,T___,T___,BORD,X___,X___,BORD,T___,
	T___,T___,T___,T___,T___,T___,BORD,BORD,T___,T___
	
};
u32_t bg[C_W*C_H] = {0};
void save_bg(int x,int y)
{
	int i;
	int j;
	for (j = 0;j < C_H; j++)
	{
		
	for (i = 0; i < C_W; i++)
	{
		bg[i+j*C_W] = *((u32_t *)fb_v.memo+x+i+(y+j)*fb_v.w);
	}
	}
}
void restore_bg(int x,int y)
{
	int i = 0;
	int j = 0;
	for (j = 0; j<C_H; j++)
	{
		for (i = 0; i < C_W; i++)
		{
			print_poin_set(x+i,y+j,bg[(j*C_W)+i]);
	
		}
	}
	
}
void drew_cursor(int x,int y)
{
	int i = 0;
	int j = 0;
	save_bg(x,y);
	for (j = 0; j<C_H; j++)
	{
		for (i = 0; i < C_W; i++)
		{

		print_poin_set(x+i,y+j,cursor_pixel[(j*C_W)+i]);
	
		}
	}
}
void reset(void)
{
	memset(fb_v.memo,0,fb_v.w*fb_v.h*fb_v.bpp/8);
	print_board();
	memset(chess_board,0,X_NUM*Y_NUM);
	mx = fb_v.w/2;
	my = fb_v.h/2;
	mouse_doing();


}
int get_mouse_info(int fd,mouse_event *p)
{
	char buf[8];
	int n = 0;
	n = read(fd,buf,3);
	if (n>0)
	{
		p->dx = buf[1];
		p->dy = -buf[2];
		p->botton = (buf[0] & 0x07);
	}
	return n;
}
void mouse_doing(void)
{
	int fd = 0;
	int press_do = 0;
	int flag = 0;
	fd = open("/dev/input/mice",O_RDWR|O_NONBLOCK);
	if (fd == -1)
	{
		perror("open");
		exit(0);
	} 	
	mx = fb_v.w/2;
	my = fb_v.h/2;
	drew_cursor(mx,my);
	while(1)
	{
		if (get_mouse_info(fd,&m_e) > 0)
		{
			restore_bg(mx,my);
			mx += m_e.dx;
			my += m_e.dy;
			if (mx < 0)
			{
				mx = 0;
			}
			if (mx > fb_v.w-C_W)
			{
				mx = fb_v.w-C_W;
			}
			if (my < 0)
			{
				my = 0;
			}
			if (my > fb_v.h-C_H)
			{
				my = fb_v.h-C_H;
			}
			switch (m_e.botton)
			{
				case 0 :
				if (press_do == 1)
				{
					press_do = 0;
					flag = chess_align();
				}
				break;
				case 1 :
				press_do = 1;break;
				case 2 : break;
				case 4 : break;
				default: break;
			}
			drew_cursor(mx,my);
		}
			if (flag > 0)
			{
				printf("player %d  won!\n",flag);
				usleep(1);
				getchar();
				reset();
				break;
			}
	}
	close(fd);
	

}
