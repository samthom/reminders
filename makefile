CFLAGS=-std=c17 -Wall -Wextra -Werror
all:
	gcc reminder.c -o reminder $(CFLAGS)	`sdl2-config --cflags --libs`
debug:
	gcc reminder.c -o reminder $(CFLAGS)	`sdl2-config --cflags --libs` -DDEBUG
