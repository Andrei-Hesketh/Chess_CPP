/*: ChessViewer.cpp
* Author    : Andrei Hesketh
* Date      : 26 Jan 2022
*
* This file holds the method and function bodies of the behaviours defined in the header.
*/

#include "ChessViewer.h"

#include <string>
#include <iostream>
using namespace std;
using namespace ncv;


void ChessViewer::gameIO(string _fen) {
    cout << "Chess, by Andrei Hesketh" << endl << endl;
    for (int i = 0; i < (int)_fen.length() - 1; i++) {          //TODO: why is _fen.length() = 65? it should be 64
        if (i % this->dim == 0) cout << endl << i / this->dim << " > ";

        cout << _fen[i] << "  ";
    }
    cout << endl << "    ";
    for (int i = 0; i < this->dim; i++)
        cout << "^" << "  ";
    cout << endl << "    ";
    for (int i = 0; i < this->dim; i++)
        cout << (char)('A' + i) << "  ";
    cout << endl << endl;
}

void ChessViewer::p2LastMove(string _move) {
    if (_move == "") {
        cout << endl;
        return;
    }
    cout << "No Player 2 or CPU" << endl;           //TODO: Add a cpu/player 2 option
}

void ChessViewer::p1LastMove(string _move) {
    if (_move == "") {
        cout << "move: e.g. e7 e5\nQuit: end\nHelp: help" << endl;
        return;
    }
    cout << _move << endl;
}

string ChessViewer::getInput() {
    string tempIn;
    cout << "> ";
    cin >> tempIn;

    return tempIn;
}
