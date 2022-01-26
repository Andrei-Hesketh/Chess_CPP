//: Chess.cpp

#include "ChessModel.h"
#include <iostream>
using namespace std;

int main() {
    ncm::ChessModel cm = ncm::ChessModel();
    cout << cm.getCells() << endl;
}