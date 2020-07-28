CC=g++
CPPFLAGS=-std=c++17

test: tests/test_coords.cpp tests/test.o
	$(CC) $(CPPFLAGS) tests/test_coords.cpp tests/test.o

test2: tests/test_board.cpp tests/test.o src/board.o
	$(CC) $(CPPFLAGS) tests/test_board.cpp tests/test.o src/board.o -o out

tests/test.o: tests/test.cpp
	$(CC) $(CPPFLAGS) -c tests/test.cpp -o $@

src/board.o: src/board.cpp
	$(CC) $(CPPFLAGS) -c src/board.cpp -o $@

test3: tests/test_board_renderer.cpp src/board.o tests/test.o dist/artifacts/board_renderer.o
	$(CC) $(CPPFLAGS) tests/test_board_renderer.cpp src/board.o tests/test.o dist/artifacts/board_renderer.o -o out

# TODO: add board.o dependency
dist/artifacts/board_renderer.o: src/board_renderer.cpp dist/artifacts
	$(CC) $(CPPFLAGS) -c src/board_renderer.cpp -o $@

dist/artifacts: dist
	mkdir -p dist/artifacts

dist/tests: dist
	mkdir -p dist/tests

dist:
	mkdir -p dist

# TODO: overhaul Makefile so it intelligently navigates dirs
