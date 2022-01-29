/*: ChessModel.h
* Author    : Andrei Hesketh
* Date      : 26 Jan 2022
*
* This file defines the model attributes and behaviour.
* The 'model' holds the data and defines the rules by which it is manipulated
*/

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
        string p1Last;
        string p2Last;
        char cell[DIMENSIONS*DIMENSIONS];

        int unwrapFen(string _fen);
        int setCell(char _c);
        int emptyCells(char _n);

    public:
        ChessModel() {
            unwrapFen("rnbqkbnr/pppppppp/8/8/8/8/PPPPPPPP/RNBQKBNR");
            p1Last = "";
            p2Last = "";
        }
        ChessModel(string _fen) {
            unwrapFen(_fen);
            p1Last = "";
            p2Last = "";
        }
        ~ChessModel() {        }

        string getCells();
        int setCell(int _i, char _c);
        string getp1Last() {return p1Last;}
        string getp2Last() {return p2Last;}
        
    };
    
}

#endif