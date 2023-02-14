#include <iostream>
#include <string>
#include <math.h>

#include "piece.h"

Piece::Piece(int x, int y, Pieces_e kind, int color) {
	this->x = x;
	this->y = y;
	this->kind = kind;
	this->color = color;
}

void Piece::move_to(int x, int y) {
	set_x(x);
	set_y(y);
}

bool King::is_move(int x, int y) {
	int present_x = get_x();
	int present_y = get_y();

	return abs(present_x - x) == 1 && abs(present_y - y) == 1;
}

bool Queen::is_move(int x, int y) {
	int present_x = get_x();
	int present_y = get_y();

	return (abs(present_x - x) - abs(present_y - y) == 0) || present_x == x || present_y == y;
}

bool Rook::is_move(int x, int y) {
	int present_x = get_x();
	int present_y = get_y();

	return present_x == x || present_y == y;
}

bool Bishop::is_move(int x, int y) {
	int present_x = get_x();
	int present_y = get_y();

	return abs(present_x - x) - abs(present_y - y) == 0;
}

bool Knight::is_move(int x, int y) {
	int present_x = get_x();
	int present_y = get_y();

	return (abs(present_x - x) == 1 && abs(present_y - y) == 2) || (abs(present_x - x) == 2 && abs(present_y - y) == 1);
}

bool Pawn::is_move(int x, int y) {
	int present_x = get_x();
	int present_y = get_y();

	return x - present_x == 0 && abs(present_y - y) == 1;
}

