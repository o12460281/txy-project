CFLAGS=-Wall -g
CC = gcc
src=$(wildcard *.c)
obj=$(patsubst %.c, %.o, $(src))

main:$(obj)
	$(CC) $(CFLAGS) $^ -o $@
#%.o:%.c
#	$(CC) $< -c
.PHONY:clean
clean:
	rm -rf *.o
	rm -rf main
dis:
	echo $(obj)

