all: non_recursive.exe

non_recursive.exe: non_recursive.o
	g++ -o non_recursive.exe non_recursive.o

non_recursive.o: non_recursive.cpp
	g++ -Wall -Wextra -std=c++11 -ftemplate-depth=1010 -03 -c non_recursive.cpp

clean:
	rm non_recursive.o non_recursive.exe

