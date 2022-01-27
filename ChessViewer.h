/*: ChessViewer.h
* Author    : Andrei Hesketh
* Date      : 26 Jan 2022
*
* This file defines the View's attributes and behaviour.
* The view defines what is shown to the user, and interactions with the view get
* passed on to be handled by the controller.
*/

#ifndef CHESSVIEWER_H
    #define CHESSVIEWER_H

#include <string>
#include <iostream>
using namespace std;

namespace ncv {
    class ChessViewer {
    private:
        int dim;
    public:
        ChessViewer() {
            dim = 8;
        }
        ChessViewer(int _dim) {
            dim = _dim;
        }
        ~ChessViewer() {    }

        void gameIO(string _fen);
        void p2LastMove(string _move);
        void p1LastMove(string _move);

        string getInput();
    };
}

#endif