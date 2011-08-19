#include <stdio.h>
#include <stdlib.h>
#include "func.h"
#include "variable.h"
void print_one_point(int x,int y,u32_t color)
{
	*((u32_t *)fb_v.memo+y*fb_v.w+x) = color;
}
void swap(int *a,int *b)
{
	int temp = 0;
	temp = *a;
	*a = *b;
	*b = temp;
}
void fb_line(int x1,int y1,int x2,int y2,u32_t color)
{
	int dx = x2-x1;
	int dy = y2-y1;
	int inc = ((dx*dy)>0 ? 1 : -1);
	int p = 0;
	if (abs(dx) > abs(dy))
	{
		if (dx<0)
		{
			swap(&x1,&x2);
			swap(&y1,&y2);
			dx = -dx;
			dy = -dy;
		}
		dy = abs(dy);
	       	p = 2*dy-dx;
		while(x1 <= x2)
		{
			print_one_point(x1,y1,color);
			x1++;
			if (p < 0)
			{
				p += 2*dy;
			}
			else
			{
				y1 += inc;
				p += 2*(dy-dx);
			}
		}
	}
	else
	{
		if (dy < 0)
		{
			swap(&x1 , &x2);
			swap(&y1 , &y2);
			dx = -dx;
			dy = -dy;
		}
		dx = abs(dx);
		p = 2*dx-dy;
		while(y1 <= y2)
		{
			print_one_point(x1,y1,color);
			y1++;
			if (p < 0)
			{
				p += 2*dx;
			}
			else
			{
				x1 += inc;
				p += 2*(dx-dy);
			}
		}
		
	}
	
	
}
void fb_circle(int x0,int y0,int r,u32_t color)
{
	int x = 0;
	int y = r;
	int p = 3-2*r; 
	while(x <= y)
	{	
		fb_line(x0+x,y0-y,x0-x,y0-y,color);
		fb_line(x0+y,y0-x,x0-y,y0-x,color);
		fb_line(x0+y,y0+x,x0-y,y0+x,color);
		fb_line(x0+x,y0+y,x0-x,y0+y,color);
	/*	print_one_point(x0+x,y0-y,color);
		print_one_point(x0+y,y0-x,color);
		print_one_point(x0+y,y0+x,color);
		print_one_point(x0+x,y0+y,color);


		print_one_point(x0-x,y0-y,color);
		print_one_point(x0-y,y0-x,color);
		print_one_point(x0-y,y0+x,color);
		print_one_point(x0-x,y0+y,color);*/
		if (p < 0)
		{
			p += 4*x+6;
		}
		else
		{
			p += 4*(x-y)+10;
			y--;
		}
		x++;
	}
}
void fb_board(void)
{
	int i;
	for (i = 0; i < Y_NUM; i++)
	{
		fb_line(ST_X,ST_Y+i*SPACE,ST_X+(X_NUM-1)*SPACE,ST_Y+i*SPACE,0x00ffffff);
	}
	for (i = 0; i < X_NUM; i++)
	{
		fb_line(ST_X+i*SPACE,ST_Y,ST_X+i*SPACE,ST_Y+(Y_NUM-1)*SPACE,0x00ffffff);
	}
}
