CC=g++
CPPFLAGS=-std=c++17

all:
	$(CC) $(CPPFLAGS) src/game.hpp

test: tests/test_coords.cpp tests/test.o
	$(CC) $(CPPFLAGS) tests/test_coords.cpp tests/test.o

test2: tests/test_board.cpp tests/test.o src/board.o
	$(CC) $(CPPFLAGS) tests/test_board.cpp tests/test.o src/board.o -o out

tests/test.o: tests/test.cpp
	$(CC) $(CPPFLAGS) -c tests/test.cpp -o $@

src/board.o: src/board.cpp
	$(CC) $(CPPFLAGS) -c src/board.cpp -o $@

muj-ploglam:
