#include <iostream>
#include "piece.h"

class Board {
	private:
		Pieces_e board[8][8];
		std::vector<King> king_vec;
		std::vector<Queen> queen_vec;
		std::vector<Rook> rook_vec;
		std::vector<Bishop> bishop_vec;
		std::vector<Knight> knight_vec;
		std::vector<Pawn> pawn_vec;
	public:
		Board();
		Pieces_e get_board(int x, int y);
		void set_piece(Pieces_e kind, int x, int y);
		void show();
		bool check_end();
		void run();
};
