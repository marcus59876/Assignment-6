<<<<<<< HEAD
/** 
* File name: piece.h 
* Names: Lydia Shiffler, Marcus McKinley, Josh Wright, Eric Hahn
* Date: 2/25/18
* Description: The piece.h file describes the color of each of the pieces. 
*/
=======
// Brock Ferrell
// CS2401
// November 23, 2015
// Project7

>>>>>>> 731e3373baaf3f8b497d3ebf8294d88f708cd837
#ifndef PIECE_H
#define PIECE_H
enum color {black, white, blank};

class piece {
public:
	piece() {theColor = blank;}
<<<<<<< HEAD
/**the flip function flips the color of the peice if the color is the *opposite color. If its white, it makes it black and if its black, it *makes it white. There are no parameters 
*/
	void flip() 
=======

	void flip()
>>>>>>> 731e3373baaf3f8b497d3ebf8294d88f708cd837
	{
		if (theColor == white) {
			theColor = black;
		}
		else if (theColor == black) {
			theColor = white;
		}
	}

	bool is_blank()const {return theColor == blank;}
	bool is_black()const {return theColor == black;}
	bool is_white()const {return theColor == white;}
	void set_white() {theColor = white;}
	void set_black() {theColor = black;}

private:
	color theColor;

};

#endif

