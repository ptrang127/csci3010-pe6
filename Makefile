# Phi Trang, Jacob Tran, Cristian Mendivil
# CSCI3010
# PE6

CXX = g++  # the compiler
CXXFLAGS = -std=c++11 -ggdb -Wall  # flags for the compiler (use c++11 standards, include gdb debug info, turn on all optional warnings)

# runs for "make all"
all: animal

animal: main.o Animal.o
	$(CXX) $(CXXFLAGS) main.o Animal.o -o animal # name of output should be consistent

# runs for "make main.o"
main.o: main.cpp
	$(CXX) $(CXXFLAGS) -c main.cpp

# runs for "make Point.o"
Animal.o: Animal.cpp
	$(CXX) $(CXXFLAGS) -c Animal.cpp

# runs for "make clean"
clean:
	rm main.o Animal.o animal #include all targets here