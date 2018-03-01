/**
 * @author Eric Hahn, Marcus McKinley, Lydia Shiffler, Josh Wright
 * @file main.cc
 * Description: Driver program using "othello.h" and "game.h"
 * to play a game of Othello with the user. 
 * Date: 2/25/2018
*/

#include "game.h"
#include "othello.h"
using namespace main_savitch_14;

/**
 * Create an Othello game from "othello.h" and 
 * continue to run it until the user specifies otherwise.
 * The othello class uses the "game.h" class to create the
 * board and control the game.
 * 
 * @param n/a
 * @return int
 */
int main()
{
	Othello theGame;
	theGame.restart();
	theGame.play();
}
