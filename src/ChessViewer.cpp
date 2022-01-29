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
        cout << "move: e.g. e7 e5\nQuit: quit\nHelp: help" << endl;
        return;
    }
    cout << _move << endl;
}

void ChessViewer::printMsg(int _in) {
    string msg;
    switch (_in) {
    case 1:
        //TODO: Model Movement
        msg = "Read Move Command";
        break;
    case 2:
        //TODO: WRITE HELP MENU
        msg = "Read Help Command";
        break;
    case 3:
        msg = "Read Quit Command";
        break;
    case 4:
        msg = "Error: Invalid Input. type 'help' for help.";
        break;
    default:
        msg = "Unexpect failure: Not Accepting State. Try Again";
        break;
    }
    cout << msg << endl;
}

string ChessViewer::readInput() {
    string tempIn;
    cout << "> ";
    getline(cin, tempIn);

    return tempIn;
}

