/*: ChessModel.cpp
* Author    : Andrei Hesketh
* Date      : 26 Jan 2022
*
* This file holds the method bodies for the methods and functions as defined in the header.
*/

#include "ChessModel.h"

#include <string>
using namespace std;
using namespace ncm;

int ChessModel::unwrapFen(string _fen) {
    int fenlen = (int)_fen.length();
    if (fenlen <= 0) {
        cerr << "FEN must have at least 1 character: " << fenlen << endl;
        return 1;
    }
    
    this->pos = 0;

    for (int i = 0; i < fenlen; i++) {
        switch (_fen[i]) {
        case '/': break;
        case 'r': case 'R':
        case 'n': case 'N':
        case 'b': case 'B':
        case 'q': case 'Q':
        case 'k': case 'K':
        case 'p': case 'P':
            setCell(_fen[i]);
            break;
        default:
            if (_fen[i] >= '0' && _fen[i] <= '9')
                emptyCells(_fen[i]);
            else {
                cerr << "Invalid FEN character: " << this->pos << ":" << _fen[i] << endl;
                return 1;
            }
            break;
        }
    }
    return 0;
}

int ChessModel::setCell(char _c) {
    if (!pos) pos = 0;
    if (pos >= DIMENSIONS * DIMENSIONS)
        return 1;

    cell[pos] = _c;
    pos++;
    return 0;
}

int ChessModel::setCell(int _i, char _c) {
    if (_i >= DIMENSIONS * DIMENSIONS)
        return 1;

    cell[_i] = _c;
    return 0;
}

int ChessModel::emptyCells(char _n) {
    int n = _n - '0';

    for (int i = 0; i < n; i++) {
        setCell('-');
    }

    return 0;
}

string ChessModel::getCells() {
    return cell;
}

