main: main.o
	g++ -o main -g main.o
tests: tests.o
	g++ -o tests tests.o
tests.o: tests.cpp MyVector.h MyVector.cxx

main.o: main.cpp MyVector.h MyVector.cxx

clean:
	rm -f tests.o main.o