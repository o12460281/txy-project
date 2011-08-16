/*
 in order to get information of screen(w,h,bpp)
and then esteblish how large memery 
*/
/*
filesys->usr->include->(sys(ioctl.h)||linux(fb.h))
*/
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/ioctl.h>
#include <linux/fb.h>
#include <sys/mman.h>
#include <string.h>
#include "func.h"
fbscr_t fb_v;	
void init_date(void)
{
	int fd = 0;
	struct fb_var_screeninfo fb_var;
	fd = open("/dev/fb0",O_RDWR);
	if (fd < 0)
	{
		perror("dev fb0");
		exit(0);
	}
	if (ioctl(fd,FBIOGET_VSCREENINFO,&fb_var) < 0)
	{
		perror("ioctl");
		exit(0);
	}
//	printf("w=%d\t h=%d\t bpp=%d gra=%d\n",fb_var.xres,fb_var.yres,fb_var.bits_per_pixel,fb_var.grayscale);
	fb_v.w = fb_var.xres;
	fb_v.h = fb_var.yres;
	fb_v.bpp = fb_var.bits_per_pixel;
	fb_v.memo = mmap(NULL,fb_v.w*fb_v.h*fb_v.bpp/8,PROT_READ|PROT_WRITE,MAP_SHARED,fd,0);
	if (fb_v.memo == MAP_FAILED)
	{
		perror("map");
		exit(0);
	}
//	int i = 0;
//	u32_t *p = fb_v.memo;
	memset(fb_v.memo,0,fb_v.w*fb_v.h*fb_v.bpp/8);
/*	for (i = 0; i < fb_v.h; i++)
	{
		p[fb_v.w*i+i]=0x00ff0000;
		
	}
	for (i = 0; i < fb_v.h; i++)
	{
		p[fb_v.w*i+(fb_v.w-i)]=0x00ff0000; 
	}*/
}
