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
using namespace ncv;

void ChessController::playGame() {
    int input;
    string msg;
    do {
        cv.gameIO(cm.getCells());
        cv.p1LastMove(cm.getp1Last());
        cv.p2LastMove(cm.getp2Last());
        do {
            input = validate(cv.readInput());
            cv.printMsg(input);
        } while (input != ASM && input != ASQ);
    } while (input != ASQ);
}
