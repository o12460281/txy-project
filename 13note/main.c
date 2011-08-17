#include <stdio.h>
#include <unistd.h>
#include "func.h"
#include "variable.h"
int main(int argc, const char* argv[])
{
	init_date();
	mouse_doing();
/*	drew_cursor(512,359);
	sleep(1);
	restore_bg(512,359);
	drew_cursor(529,399);*/
//	print_board();
	//int b = 0;	
/*board	fb_circle(280,480,15,0x00ff0000);
	int i;
	for (i = 0; i < 700; i+=30)
	{
		fb_line(0,i,900,i,0x0000ff00);
	}
	for (i = 0; i < 930; i+=30)
	{
		fb_line(i,0,i,688,0x0000ff00);
		
	}*/
/*	for (i = 0; i < 767; i += 10)
	{
		for (j = 0; j < 1024; j += 10)
		{
			print_poin_set(j,i,0x0000ff00);
		}
	}*/
/*	for (i = 0; i < 767; i += 20)
	{
		fb_line(0,i,1023,i,0x00ff0000);
	}
	for(j = 0;j<1023;j += 20)
	{
		fb_line(j,0,j,767,0x00ff0000);
	}*/
//	fb_line(0,0,fb_v.w-1,fb_v.h-1,0x00ff0000);
//	fb_line(0,fb_v.h,fb_v.w,0,0x00ff9922);
//	fb_line(1000,700,100,100,0x00887766);
//	fb_line(800,0,500,760,0x00997766);
	return 0;
}
