run: eventtest
	./eventtest

all: eventtest

event.o: event.cpp event.h json.hpp
	clang++ -Wall -c event.cpp

fileio.o: fileio.cpp fileio.h json.hpp
	clang++ -Wall -c fileio.cpp

main.o: main.cpp
	clang++ -Wall -c main.cpp

eventtest: main.o event.o fileio.o 
	clang++ -o eventtest main.o event.o fileio.o

clean:
	rm -f main.o event.o fileio.o eventtest eventtest.exe

.PHONY: clean all run