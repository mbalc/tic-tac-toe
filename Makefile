CC=g++
CPPFLAGS=-std=c++20 -o out

all:
	$(CC) $(CPPFLAGS) src/game.hpp

test: tests/test_coords.cpp tests/test.o
	$(CC) $(CPPFLAGS) tests/test_coords.cpp tests/test.o

tests/test.o: tests/test.cpp
	$(CC) $(CPPFLAGS) -c tests/test.cpp -o $@
