#include <cstddef>
#include <iostream>
#include <vector>

#define EXIST 0
#define TAKEN 1

#define BLACK 0
#define WHITE 1

enum Pieces_e {
	EMPTY,
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
		int get_color() {return this->color;}
		void set_x(int x) {this->x = x;}
		void set_y(int y) {this->y = y;}
		void move_to(int x, int y);
		virtual bool is_move(int x, int y);
};

class King : public Piece {
	public:
		King(int x, int y, Pieces_e kind, int color) : Piece(x, y, kind, color){};
		bool is_move(int x, int y) override;
};

class Queen : public Piece {
	public:
		Queen(int x, int y, Pieces_e kind, int color) : Piece(x, y, kind, color){};
		bool is_move(int x, int y) override;
};

class Rook : public Piece {
	public:
		Rook(int x, int y, Pieces_e kind, int color) : Piece(x, y, kind, color){};
		bool is_move(int x, int y) override;
};

class Bishop : public Piece {
	public:
		Bishop(int x, int y, Pieces_e kind, int color) : Piece(x, y, kind, color){};
		bool is_move(int x, int y) override;
};

class Knight : public Piece {
	public:
		Knight(int x, int y, Pieces_e kind, int color) : Piece(x, y, kind, color){};
		bool is_move(int x, int y) override;
};

class Pawn : public Piece {
	public:
		Pawn(int x, int y, Pieces_e kind, int color) : Piece(x, y, kind, color){};
		bool is_move(int x, int y) override;
};
