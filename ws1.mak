ws1 : ws1.o 
	g++ -g ws1.o -o ws1

ws1.o : ws1.cpp
	g++ -g -Wall -c ws1.cpp  -o ws1.o

