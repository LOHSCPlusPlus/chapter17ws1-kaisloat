ws2 : ws2.o 
	g++ -g ws2.o -o ws2

ws2.o : ws2.cpp
	g++ -g -Wall -c ws2.cpp  -o ws2.o

