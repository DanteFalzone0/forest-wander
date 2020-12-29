CPP = g++

FLAGS = -O3 -Wall -lm -std=c++11 -fPIC

LD_FLAGS = -ldjf-3d-2 -lSDL2

build:
	$(CPP) $(FLAGS) main.cpp -o main.x86 $(LD_FLAGS)
