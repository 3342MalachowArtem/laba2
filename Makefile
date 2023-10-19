CFLAGS = -Wall -std=gnu99
SOURCES = menu.c input.c switch_menu.c index_first_zero.c index_last_zero.c sum_between.c sum_before_and_after.c output.c 
HEADERS = menu.h input.h switch_menu.h index_first_zero.h index_last_zero.h sum_between.h sum_before_and_after.h output.h

all: menu

menu: $(SOURCES) $(HEADERS)
	gcc $(CFLAGS) -o menu $(SOURCES)

clean:
	rm -rf *.o menu