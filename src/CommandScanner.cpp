//: CommandScanner.cpp

#include "CommandScanner.h"

#include <string>

using namespace std;

int validate(string _lex) {
    int pos = 0;
    int state = nextState(0, _lex[pos]);
    while (stateType[state] == NOAS) {
        pos++;
        state = nextState(state, _lex[pos]);
    }
    return stateType[state];
}

int nextState(const int _state, char _c) {
    return TransitionTable[_state][nextClass(_c)];
}

int nextClass(char _c) {
    switch (_c) {
    case 'Q':   case 'q':
        return 2;
    case 'U':   case 'u':
        return 3;
    case 'I':   case 'i':
        return 4;
    case 'T':   case 't':
        return 5;
    case 'H':   case 'h':
        return 6;
    case 'L':   case 'l':
        return 7;
    case 'P':   case 'p':
        return 8;
    case ' ':
        return 9;
    default:
        if ((_c >= 'A' && _c <= 'G') || (_c >= 'a' && _c <= 'g'))
            return 0;
        else if (_c >= '1' && _c <= '9')
            return 1;
        else
            return 14;
    } //switch
    return 14;
}