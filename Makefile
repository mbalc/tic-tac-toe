CC=g++
CPPFLAGS=-std=c++17 -o out

all:
	$(CC) $(CPPFLAGS) src/game.hpp

test: tests/test_coords.cpp tests/test.o
	$(CC) $(CPPFLAGS) tests/test_coords.cpp tests/test.o

test2: tests/testboard.cpp tests/test.o src/board.o
	$(CC) $(CPPFLAGS) tests/testboard.cpp tests/test.o src/board.o

tests/test.o: tests/test.cpp
	$(CC) $(CPPFLAGS) -c tests/test.cpp -o $@

src/board.o: src/board.cpp
	$(CC) $(CPPFLAGS) -c src/board.cpp -o $@

muj-ploglam:
