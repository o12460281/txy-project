#include <stdio.h>
#include "variable.h"
#include <stdlib.h>
#include "func.h"

void print_poin_set(int x,int y,u32_t color)
{	
	*((u32_t *)fb_v.memo +x+y*fb_v.w)=color;
}
void fb_line(int x1,int y1,int x2,int y2,u32_t color)
{
	int temp = 0;
	int dx = x2-x1;
	int dy = y2-y1;
	if (dx > dy)
	{
	if (dx<0)
	{
		temp = x1;
		x1 = x2;
		x2 = temp;
		temp = y1;
		y1 = y2;
		y2 = temp;
	}
	int inc = (y2<y1)? -1 : 1;
	int p = 0;
	dy = abs(dy);
	while(x1 <= x2)
	{
		print_poin_set(x1,y1,color);
		x1++;
		if (p<0)
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
	if (dy<0)
	{
		temp = x1;
		x1 = x2;
		x2 = temp;
		temp = y1;
		y1 = y2;
		y2 = temp;
	}
	int inc = (x2<x1)? -1 : 1;
	int p = 0;
	dx = abs(dx);
	while(y1 <= y2)
	{
		print_poin_set(x1,y1,color);
		y1++;
		if (p<0)
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
/*
#include <stdio.h>
#include <stdlib.h>
#include "varfous.h"

int fb_one_pixel(int x, int y, u32_t color)
{
	*((u32_t *)fb_v.memo+x+y*fb_v.w) = color;
	return 0;
}

void swap(int *a, int *b)
{
	int temp = 0;
	temp = *a;
	*a = *b;
	*b = temp;
}

int fb_line(int x1, int y1, int x2, int y2, u32_t color) //画线函数
{
	int dx = x2-x1;
	int dy = y2-y1;
	int inc = ((dx*dy) > 0 ? 1 : -1);
	int p = 0;
	if (abs(dx) > abs(dy))
	{
		if (dx < 0) 
		{
			swap(&x1, &x2);
			swap(&y1, &y2);
			dx = -dx;
			dy = -dy;
		}
	
		dy = abs(dy); //绝对值
	
		p = 2*dy-dx; //画线公式
		while (x1 <= x2) 
		{
			fb_one_pixel(x1, y1, color);
			x1++;
			if (p<0) 
			{
				p += 2*dy;	
			}
			else 
			{
				y1 += inc;
				p += 2*(dy - dx);
			}
		}
	}
	else 
	{
		if (dy < 0) 
		{
			swap(&x1, &x2);
			swap(&y1, &y2);
			dx = -dx;
			dy = -dy;
		}
	
		dx = abs(dx);
	
		p = 2*dx-dy; //画线公式
		while (y1 <= y2) 
		{
			fb_one_pixel(x1, y1, color);
			y1++;
			if (p<0) 
			{
				p += 2*dx;	
			}
			else 
			{
				x1 += inc;
				p += 2*(dx - dy);
			}
		}
				
	}

	return 0;
}*/
