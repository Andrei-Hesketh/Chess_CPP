//: ChessModel.h

#ifndef CHESSMODEL_H
    #define CHESSMODEL_H

#include <iostream>
#include <string>
using namespace std;

#define DIMENSIONS 8

namespace ncm {
    class ChessModel {
    private:
        int pos;
        string fen;
        char cell[DIMENSIONS*DIMENSIONS];

        int unwrapFen(string _fen);
        int setCell(char _c);
        int emptyCells(char _n);

    public:
        ChessModel() {
            cout << "In Default Constructor" << endl;                   //DEBUG
            unwrapFen("rnbqkbnr/pppppppp/8/8/8/8/PPPPPPPP/RNBQKBNR");
        }
        ChessModel(string _fen) {
            cout << "In Parametrised Constructor" << endl;              //DEBUG
            unwrapFen(_fen);
        }
        ~ChessModel() {
            cout << "In Destructor" << endl;                            //DEBUG
        }

        string getCells();
        int setCell(int _i, char _c);
    };
    
}

#endif