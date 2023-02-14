chess.out: main.o piece.o board.o
	g++ -o chess.out main.o piece.o board.o

main.o: main.cpp
	g++ -c main.cpp

board.o: board.cpp piece.o
	g++ -c board.cpp piece.o

piece.o: piece.cpp
	g++ -c piece.cpp
