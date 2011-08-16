#include <stdio.h>
#include "func.h"
#include "variable.h"
int main(int argc, const char* argv[])
{
	init_date();
	int i,j;
/*	for (i = 0; i < 767; i += 10)
	{
		for (j = 0; j < 1024; j += 10)
		{
			print_poin_set(j,i,0x0000ff00);
		}
	}*/
	for (i = 0; i < 767; i += 20)
	{
		fb_line(0,i,1023,i,0x00ff0000);
	}
	for(j = 0;j<1023;j += 20)
	{
		fb_line(j,0,j,767,0x00ff0000);
	}
//	fb_line(0,0,fb_v.w-1,fb_v.h-1,0x00ff0000);
//	fb_line(0,fb_v.h,fb_v.w,0,0x00ff9922);
//	fb_line(1000,700,100,100,0x00887766);
//	fb_line(800,0,500,760,0x00997766);
	return 0;
}
