#include <iostream>
#include "piece.h"

class Board {
	private:
		Pieces_e board[8][8];
		std::vector<Piece*> king_vec;
		std::vector<Piece*> queen_vec;
		std::vector<Piece*> rook_vec;
		std::vector<Piece*> bishop_vec;
		std::vector<Piece*> knight_vec;
		std::vector<Piece*> pawn_vec;
	public:
		Board();
		Pieces_e get_board(int x, int y);
		void set_piece(Pieces_e kind, int x, int y);
		void show();
		void read_command(std::string command, int *x, int *y, Pieces_e *kind);
		bool check_end();
		void run();
};
