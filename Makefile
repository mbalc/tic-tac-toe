CC=g++
CPPFLAGS=-std=c++20 -o out

test: tests/test_coords.cpp tests/test.o
	$(CC) $(CPPFLAGS) tests/test_coords.cpp tests/test.o

tests/test.o: tests/test.cpp
	$(CC) $(CPPFLAGS) -c tests/test.cpp -o $@

test2: tests/test_board_renderer.cpp tests/test.o dist/artifacts/board_renderer.o
	$(CC) $(CPPFLAGS) tests/test_board_renderer.cpp tests/test.o dist/artifacts/board_renderer.o

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
