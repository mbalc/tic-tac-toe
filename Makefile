CC=g++
CPPFLAGS=-std=c++20 -o out

all:
	$(CC) $(CPPFLAGS) src/game.hpp
