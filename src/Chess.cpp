/*: Chess.cpp
* Author    : Andrei Hesketh
* Date      : 26 Jan 2022
*
* This file drives the program, and holds the main method and controller instance.
*/
#include "ChessController.h"

int main() {
    ncc::ChessController cc = ncc::ChessController();
    cc.playGame();
}