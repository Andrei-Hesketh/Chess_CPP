/*: ChessContoller.h
* Author    : Andrei Hesketh
* Date      : 26 Jan 2022
*
* This file defines the Controller's attributes and behaviour.
* The controller handles changes in the program, either from the user or in the data.
*/

#ifndef CHESSCONTROLLER_H
    #define CHESSCONTROLLER_H

#include "ChessViewer.h"
#include "CommandScanner.h"
#include "ChessModel.h"
#include <string>
#include <iostream>
using namespace std;

namespace ncc {
    class ChessController
    {
    private:
        ncm::ChessModel cm;
        ncv::ChessViewer cv;
    public:
        ChessController() : cm(ncm::ChessModel()), cv(ncv::ChessViewer()) {     }
        ChessController(ncm::ChessModel _cm, ncv::ChessViewer _cv) : cm(_cm), cv(_cv) {   }
        ~ChessController() {    }

        void playGame();
    };
    
}

#endif
