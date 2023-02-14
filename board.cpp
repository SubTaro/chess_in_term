#include <iostream>

#include "board.h"

//チェス盤を作り、vectorに駒を格納する。
Board::Board() {
	for(int i = 0; i < 8; ++i) {
		for(int j = 0; j < 8; ++j) {
			board[i][j] = EMPTY;
		}
	}
//チェス盤に駒を配置
	board[0][0] = ROOK;
	board[0][1] = KNIGHT;
	board[0][2] = BISHOP;
	board[0][3] = QUEEN;
	board[0][4] = KING;
	board[0][5] = BISHOP;
	board[0][6] = KNIGHT;
	board[0][7] = ROOK;
	
	board[7][0] = ROOK;
	board[7][1] = KNIGHT;
	board[7][2] = BISHOP;
	board[7][3] = QUEEN;
	board[7][4] = KING;
	board[7][5] = BISHOP;
	board[7][6] = KNIGHT;
	board[7][7] = ROOK;

	for(int i = 0; i < 8; ++i) {
		board[1][i] = PAWN;
		board[6][i] = PAWN;
	}

	King king_w(0, 4, KING, WHITE);
	King king_b(7, 4, KING, BLACK);
	this->king_vec.push_back(king_w);
	this->king_vec.push_back(king_b);

	Queen queen_w(0, 3, QUEEN, WHITE);
	Queen queen_b(7, 3, QUEEN, BLACK);
	this->queen_vec.push_back(queen_w);
	this->queen_vec.push_back(queen_b);
	
	Rook left_rook_w(0, 0, ROOK, WHITE);
	Rook right_rook_w(0, 7, ROOK, WHITE);
	Rook left_rook_b(7, 0, ROOK, BLACK);
	Rook right_rook_b(7, 7, ROOK, BLACK);
	this->rook_vec.push_back(left_rook_w);
	this->rook_vec.push_back(right_rook_w);
	this->rook_vec.push_back(left_rook_b);
	this->rook_vec.push_back(right_rook_b);

	Bishop left_bishop_w(0, 2, BISHOP, WHITE);
	Bishop right_bishop_w(0, 5, BISHOP, WHITE);
	Bishop left_bishop_b(7, 2, BISHOP, BLACK);
	Bishop right_bishop_b(7, 5, BISHOP, BLACK);
	this->bishop_vec.push_back(left_bishop_w);
	this->bishop_vec.push_back(right_bishop_w);
	this->bishop_vec.push_back(left_bishop_b);
	this->bishop_vec.push_back(right_bishop_b);

	Knight left_knight_w(0, 2, KNIGHT, WHITE);
	Knight right_knight_w(0, 5, KNIGHT, WHITE);
	Knight left_knight_b(7, 2, KNIGHT, BLACK);
	Knight right_knight_b(7, 5, KNIGHT, BLACK);
	this->knight_vec.push_back(left_knight_w);
	this->knight_vec.push_back(right_knight_w);
	this->knight_vec.push_back(left_knight_b);
	this->knight_vec.push_back(right_knight_b);

	for(int i = 0; i < 8; ++i) {
		Pawn pawn_w(1, i, PAWN, WHITE);
		Pawn pawn_b(6, i, PAWN, BLACK);
		this->pawn_vec.push_back(pawn_w);
		this->pawn_vec.push_back(pawn_b);
	}
}

//指定された座標の状態を取得
Pieces_e Board::get_board(int x, int y) {
	return board[x][y];
}

//指定された駒を指定された座標に置く
void Board::set_piece(Pieces_e kind, int x, int y) {
	this->board[x][y] = kind;
}

//チェス盤の中身の表示用の関数
void Board::show() {

}

//とりあえずfalseを返す。後でゲームが終了しているかを判定する関数を作る
bool Board::check_end() {
	return false;
}

//ゲーム開始
void Board::run() {
	//変数定義
	std::string command;
	static const char *x_string[] = {"a", "b", "c", "d", "e", "f", "g", "h"};
	int x, y;
	Pieces_e kind;
	
	//終了するまでコマンドの入力と処理を行う
	while(!check_end()) {
		//入力
		std::cout << "next: ";
		std::cin >> command;

		//入力をx座標y座標動かす駒に分ける
		//TODO: アンパサンドやキャスリングの際の処理を追加
		if(command[0] == 'K') {
			kind = KING;
		}else if(command[0] == 'Q') {
			kind = QUEEN;
		}else if(command[0] == 'R') {
			kind = ROOK;
		}else if(command[0] == 'B') {
			kind = BISHOP;
		}else if(command[0] == 'N') {
			kind = KNIGHT;
		}else {
			kind = PAWN;
		}
	}
}
