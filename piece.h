#include <cstddef>
#include <iostream>
#include <vector>

#define EXIST 0
#define TAKEN 1

#define BLACK 0
#define WHITE 1

enum Pieces_e {
	EMPTY = -1,
	KING,
	QUEEN,
	ROOK,
	BISHOP,
	KNIGHT,
	PAWN
};

class Piece {
	private:
		int x;
		int y;
		Pieces_e kind;
		int color;
	public:
		Piece(int x, int y, Pieces_e kind, int color);
		int get_x() {return this->x;}
		int get_y() {return this->y;}
		void set_x(int x) {this->x = x;}
		void set_y(int y) {this->y = y;}
		void move_to(int x, int y);
};

class King : Piece {
	public:
		King(int x, int y, Pieces_e kind, int color) : Piece(x, y, kind, color){};
		bool is_move(int x, int y);
};

class Queen : Piece {
	public:
		Queen(int x, int y, Pieces_e kind, int color) : Piece(x, y, kind, color){};
		bool is_move(int x, int y);
};

class Rook : Piece {
	public:
		Rook(int x, int y, Pieces_e kind, int color) : Piece(x, y, kind, color){};
		bool is_move(int x, int y);
};

class Bishop : Piece {
	public:
		Bishop(int x, int y, Pieces_e kind, int color) : Piece(x, y, kind, color){};
		bool is_move(int x, int y);
};

class Knight : Piece {
	public:
		Knight(int x, int y, Pieces_e kind, int color) : Piece(x, y, kind, color){};
		bool is_move(int x, int y);
};

class Pawn : Piece {
	public:
		Pawn(int x, int y, Pieces_e kind, int color) : Piece(x, y, kind, color){};
		bool is_move(int x, int y);
};
