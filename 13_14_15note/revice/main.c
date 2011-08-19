#include <stdio.h>
#include <unistd.h>
#include "func.h"
#include "variable.h"
int main(int argc, const char* argv[])
{
	init_scr_set();
	fb_board();
	mouse_doing();
/*5	save_bg(512,368);
	drew_cursor(512,368);
	sleep(1);
	restore_bg(512,368);
	drew_cursor(612,368);*/
//4	drew_cursor(500,350);
//3	fb_board();
//2	fb_circle(500,500,100,0x0000ff00);
//1	fb_line(100,40,700,400,0x00ff0000);
//	fb_line(100,500,700,40,0x00ff0000);
//	fb_line(700,40,100,400,0x00ff0000);
//	fb_line(500,10,300,400,0x00ff0000);
//	fb_line(300,400,450,10,0x0000ff00);
	return 0;
}
