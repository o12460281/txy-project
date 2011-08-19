#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "func.h"
#include <unistd.h>
#include <fcntl.h>
#include "variable.h"
#define C_W 10
#define C_H 17
#define BORD 0x00000fff
#define T___ 0x00000000
#define X___ 0xffffffff

u32_t cursor_pixel[C_W*C_H]=
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
u32_t bg[C_W*C_H];
void save_bg(int x,int y)
{
	int i,j;
	for(j=0;j<C_H;j++)
	{
		for (i = 0; i < C_W; i++)
		{
			bg[i+j*C_W] = *((u32_t *)fb_v.memo+x+i+(y+j)*fb_v.w);
		}
	}
}
void restore_bg(int x,int y)
{
	int i,j;
	for(j=0;j<C_H;j++)
	{
		for (i = 0; i < C_W; i++)
		{
			print_one_point(x+i,y+j,bg[i+j*C_W]);
		}
	}
	
}
void drew_cursor(int x,int y)
{
	int i,j;
	save_bg(x,y);
	for(j = 0;j < C_H; j++)
	{
		for (i = 0; i < C_W; i++)
		{
			print_one_point(x+i,y+j,cursor_pixel[j*C_W+i]);
		}
	}
}
int get_mouse_info(int fd,mouse_move *p)
{
	char buf[8] = {0};
	int n = 0;
	n = read(fd,buf,3);
	if (n > 0)
	{
		p->dx = buf[1];
		p->dy = -buf[2];
		p->button = (buf[0]&0x07);
	}
	return n;
}	
void mouse_doing()
{
	int fd = 0;
	int click_L = 0;
	fd = open("/dev/input/mice",O_RDWR | O_NONBLOCK);
	if (fd == -1)
	{
		perror("mouse");
		exit(0);
	}
	mx = fb_v.w/2;
	my = fb_v.h/2;
	drew_cursor(mx,my);
	while(1)
	{
		if (get_mouse_info(fd,&m_f) > 0)
		{
			restore_bg(mx,my);
			mx += m_f.dx;
			my += m_f.dy;
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
			switch(m_f.button)
			{
				case 0 :
				if (click_L == 1)
				{
					click_L = 0;
					chess_duiqi(mx.my);
				}break;
			//	case 1 : fb_circle(mx,my,12,0x0000f0ff);break;
				case 1 : click_L = 1; break;
				case 2 : break;
				case 4 : break;
				default: break;
			}
			drew_cursor(mx,my);
			
		}
	}
}
