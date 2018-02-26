// File: game.cxx
/*
Program: game.cc
Description: Game 
*/

<<<<<<< HEAD
/**
* File name: game.cc 
* Names: Lydia Shiffler, Marcus McKinley, Josh Wright, Eric Hahn
* Date: 2/25/18
* Description: game.cc is the main file that has the majority of the functions that help the game run smoothly. Has both the public and private functions. Functions are used to decide how the computer plays against the opponent. 
*/



=======
>>>>>>> 731e3373baaf3f8b497d3ebf8294d88f708cd837
#include <cassert>    // Provides assert
#include <climits>    // Provides INT_MAX and INT_MIN
#include <iostream>   // Provides cin, cout
#include <queue>      // Provides queue<string>
#include <string>     // Provides string
#include "game.h"     // Provides definition of game class
using namespace std;

namespace main_savitch_14
{
//*************************************************************************
// STATIC MEMBER CONSTANTS
// const int game::SEARCH_LEVELS;

//*************************************************************************
// PUBLIC MEMBER FUNCTIONS

<<<<<<< HEAD
/// @param n/a
/// @return game::who
=======
<<<<<<< HEAD
/** The play function should not be overridden. It plays one round of the
* game, with the human player moving first and the computer second.
* The return value is the winner of the game (or NEUTRAL for a tie).
*/
game::who game::play( )
=======
>>>>>>> fc4d5a446b437ee8a70ae75d626661d3368554bb
game::who game::play( )
// The play function should not be overridden. It plays one round of the
// game, with the human player moving first and the computer second.
// The return value is the winner of the game (or NEUTRAL for a tie).
>>>>>>> 731e3373baaf3f8b497d3ebf8294d88f708cd837
{
	restart( );

	while (!is_game_over( ))
	{
		display_status( );
		whosTurn();
		if (last_mover( ) == COMPUTER) {
			countingPieces();
			make_human_move( );
		}
		else {
			make_computer_move( );
		}
	}
	display_status( );
	return HUMAN;
}



//*************************************************************************
// OPTIONAL VIRTUAL FUNCTIONS (overriding these functions is optional)

<<<<<<< HEAD
/// @param const string& message
/// @return n/a
=======
<<<<<<< HEAD
///display_message displays the message from the game
=======
>>>>>>> 731e3373baaf3f8b497d3ebf8294d88f708cd837
>>>>>>> fc4d5a446b437ee8a70ae75d626661d3368554bb
void game::display_message(const string& message) const
{
	cout << message;
}

<<<<<<< HEAD
/// @param n/a
/// @return string
=======
<<<<<<< HEAD
/**get_user_move displays a message to either tell the user to press S if *he/she cannot move, or tells them that it is their move
*/

=======
>>>>>>> 731e3373baaf3f8b497d3ebf8294d88f708cd837
>>>>>>> fc4d5a446b437ee8a70ae75d626661d3368554bb
string game::get_user_move( ) const
{
	string answer;

	display_message("If you cannot move, please press 'S'\n");
	display_message("Your move, please: ");
	getline(cin, answer);
	return answer;
}
<<<<<<< HEAD
///Winning returns the user that is winning
=======

<<<<<<< HEAD
/// @param n/a
/// @return game::who
=======
>>>>>>> 731e3373baaf3f8b497d3ebf8294d88f708cd837
>>>>>>> fc4d5a446b437ee8a70ae75d626661d3368554bb
game::who game::winning()const {

	int value = evaluate();

	if (value > 0) {
		return last_mover();
	} else if (value < 0) {
		return next_mover();
	} else {
		return NEUTRAL;
	}

}

//*************************************************************************
// PRIVATE FUNCTIONS (these are the same for every game)

/// @param int, int
/// @return int
int game::eval_with_lookahead(int look_ahead, int beat_this)
<<<<<<< HEAD
/// Evaluate a board position with lookahead.
/// --int look_aheads:  How deep the lookahead should go to evaluate the move.

/** --int beat_this: Value of another move that we're considering. If the
* current board position can't beat this, then cut it short.
* The return value is large if the position is good for the player who just moved.
*/
{
	queue<string> moves;   /// All possible opponent moves
	int value;             /// Value of a board position after opponent moves
	int best_value;        /// Evaluation of best opponent move
	game* future;          /// Pointer to a future version of this game

	/// Base case:
=======
// Evaluate a board position with lookahead.
// --int look_aheads:  How deep the lookahead should go to evaluate the move.
// --int beat_this: Value of another move that we're considering. If the
// current board position can't beat this, then cut it short.
// The return value is large if the position is good for the player who just
// moved.
{
	queue<string> moves;   // All possible opponent moves
	int value;             // Value of a board position after opponent moves
	int best_value;        // Evaluation of best opponent move
	game* future;          // Pointer to a future version of this game

	// Base case:
>>>>>>> 731e3373baaf3f8b497d3ebf8294d88f708cd837
	if (look_ahead == 0 || is_game_over( ))
	{
		if (last_mover( ) == COMPUTER)
			return evaluate( );
		else
			return -evaluate( );
	}

<<<<<<< HEAD
	/// Recursive case:
	/// The level is above 0, so try all possible opponent moves. Keep the
	/// value of the best of these moves from the opponent's perspective.
	compute_moves(moves);
	/// assert(!moves.empty( ));
=======
	// Recursive case:
	// The level is above 0, so try all possible opponent moves. Keep the
	// value of the best of these moves from the opponent's perspective.
	compute_moves(moves);
	// assert(!moves.empty( ));
>>>>>>> 731e3373baaf3f8b497d3ebf8294d88f708cd837
	best_value = INT_MIN;
	while (!moves.empty( ))
	{
		future = clone( );
		future->make_move(moves.front( ));
		value = future->eval_with_lookahead(look_ahead - 1, best_value);
		delete future;
		if (value > best_value)
		{
			if (-value <= beat_this)
				return INT_MIN + 1; // Alpha-beta pruning
			best_value = value;
		}
		moves.pop( );
	}

<<<<<<< HEAD
	/// The value was calculated from the opponent's perspective.
	/// The answer we return should be from player's perspective, so multiply times -1:
	return -best_value;
}

///make_computer_move decides where the computer makes its next moves
=======
	// The value was calculated from the opponent's perspective.
	// The answer we return should be from player's perspective, so multiply times -1:
	return -best_value;
}

<<<<<<< HEAD
/// @param n/a
/// @return n/a
=======
>>>>>>> 731e3373baaf3f8b497d3ebf8294d88f708cd837
>>>>>>> fc4d5a446b437ee8a70ae75d626661d3368554bb
void game::make_computer_move( )
{
	queue<string> moves;
	int value;
	int best_value;
	string best_move;
	game* future;

<<<<<<< HEAD
	/// Compute all legal moves that the computer could make.
	compute_moves(moves);
	/// assert(!moves.empty( ));

	/// Evaluate each possible legal move, saving the index of the best
	/// in best_index and saving its value in best_value.
=======
	// Compute all legal moves that the computer could make.
	compute_moves(moves);
	//assert(!moves.empty( ));

	// Evaluate each possible legal move, saving the index of the best
	// in best_index and saving its value in best_value.
>>>>>>> 731e3373baaf3f8b497d3ebf8294d88f708cd837
	best_value = INT_MIN;
	while (!moves.empty( ))
	{
		future = clone( );
		future->make_move(moves.front( ));
		value = future->eval_with_lookahead(SEARCH_LEVELS, best_value);
		delete future;
		if (value >= best_value)
		{
			best_value = value;
			best_move = moves.front( );
		}
		moves.pop( );
	}

<<<<<<< HEAD
	/// Make the best move.
	make_move(best_move);
}

///make_human_move decides if the move is legal/illegal. If its legal it makes the move 

=======
	// Make the best move.
	make_move(best_move);
}

<<<<<<< HEAD
/// @param n/a
/// @return n/a
=======
>>>>>>> 731e3373baaf3f8b497d3ebf8294d88f708cd837
>>>>>>> fc4d5a446b437ee8a70ae75d626661d3368554bb
void game::make_human_move( ) {
	string move;

	move = get_user_move( );
	while (!is_legal(move))
	{
		display_message("Illegal move.\n");
		move = get_user_move( );
	}
	make_move(move);
}

}



