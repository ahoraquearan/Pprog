
CLIB= -lscreen -L .
CC= gcc
CFLAGS= -Wall -g
.PHONY=clean


all: hormiguero clean


hormiguero: game_loop.o game_reader.o game.o command.o graphic_engine.o space.o object.o player.o
	$(CC) -o$@ $^  $(CLIB)		

game_loop.o: game_loop.c graphic_engine.h command.h game.h
	$(CC) $(CFLAGS) -c $<  

game_reader.o: game_reader.c game_reader.h game.h space.h types.h
	$(CC) $(CFLAGS) -c $<

game.o: game.c game.h command.h space.h types.h object.h player.h game_reader.h

	$(CC) $(CFLAGS) -c $<

command.o: command.c command.h 
	$(CC) $(CFLAGS) -c $<

graphic_engine.o: graphic_engine.c graphic_engine.h command.h game.h libscreen.h
	$(CC) $(CFLAGS) -c $<

space.o: space.c space.h types.h
	$(CC) $(CFLAGS) -c $<

object.o: object.c object.h types.h
	$(CC) $(CFLAGS) -c $<

player.o: player.c player.h types.h
	$(CC) $(CFLAGS) -c $<


clean: 
	rm *.o
	