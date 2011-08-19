#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <sys/mman.h>
#include <linux/fb.h>
#include <sys/ioctl.h>
#include "func.h"
fb_scr fb_v;

int mx;
int my;

mouse_move m_f;
void init_scr_set(void) 
{
	int fd = 0;
	struct fb_var_screeninfo fb_var; 
	fd = open("/dev/fb0",O_RDWR);
	if (fd < 0)
	{
		perror("open");
		exit(0);
	}
	if (ioctl(fd,FBIOGET_VSCREENINFO,&fb_var) < 0)
	{
		perror("ioctl");
		exit(0);
	}
//	printf("w=%d  h=%d bpp=%d \n",fb_var.xres,fb_var.yres,fb_var.bits_per_pixel);
	fb_v.w = fb_var.xres;
	fb_v.h = fb_var.yres;
	fb_v.bpp = fb_var.bits_per_pixel;
	fb_v.memo = mmap(0,fb_v.w*fb_v.h*fb_v.bpp/8,PROT_READ|PROT_WRITE,MAP_SHARED,fd,0);
	if (fb_v.memo == MAP_FAILED)
	{
		perror("map");
		exit(0);
	}
	memset(fb_v.memo,0,fb_v.w*fb_v.h*fb_v.bpp/8);
}
