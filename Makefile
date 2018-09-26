flags = -Wall

Objects = Animal.o main.o

all: $(Objects)
	g++ $(flags) -o animal  $^

main.o: main.cpp
	g++ $(flags) -c $^

Animal.o: Animal.h Animal.cpp
	g++ $(flags) -c $^

clean:
	rm -f *.o
	rm -f *.gch
	rm -f main