/**
* Eric Hahn, Josh Wright, Lydia Shiffler, Marcus Mckinley
* File: Othello.h
* Date: 2/25/18
* Description: Header file for othello class. It is used to describe a game of othello, with
*              functions to describe the moves as well as functions for the AI to compute its 
*              Next move and variables to describe the various aspects of the game
*/
#ifndef OTHELLO_H
#define OTHELLO_H
#include "game.h"
#include "piece.h"
#include "colors.h"
#include <iostream>
using namespace std;

namespace main_savitch_14
{

class Othello: public game {
public:

	Othello() {}

	void display_status()const;
	int evaluate()const;
	bool is_game_over()const;
	bool is_legal(const string& move)const;
	void make_move(const string& move);
	void restart();
	void make_skips();
	void countingPieces();
	void whosTurn(); /// Function determines whos turn it is. It takes not parameters and doesn't return anything
	game* clone()const{return new Othello(*this);}
	void compute_moves(std::queue<std::string>& moves)const;
	who winning()const;

protected:
	int black;
	int white;
	int skips;
	int openSpots;
	int b;
	int w;

private:
	piece gameBoard[8][8];
};
}

#endif


