#include <iostream>

#include "board.h"


static const char *enum_string[] = {"EMPTY", "KING", "QUEEN", "ROOK", "BISHOP", "KNIGHT", "PAWN"};
int main() {
	Board board;
//ボード内の確認
	for(int i = 0; i < 8; ++i) {
		for(int j = 0; j < 8; ++j) {
			std::cout << i << "," << j << ": " << enum_string[board.get_board(i, j)] << std::endl;
		}
	}

	board.run();

	return 0;
}
