/*: ChessContoller.h
* Author    : Andrei Hesketh
* Date      : 26 Jan 2022
*
* This file holds the behaviour of the methods and functions as defined in the header.
*/
#include "ChessController.h"
#include <string>
#include <iostream>
using namespace std;
using namespace ncc;

void ChessController::playGame() {
    string input;
    do {
        cv.gameIO(cm.getCells());
        cv.p1LastMove(cm.getp1Last());
        cv.p2LastMove(cm.getp2Last());
        input = cv.getInput();
        cout << input << endl << endl;
    } while (input != "end");
}
