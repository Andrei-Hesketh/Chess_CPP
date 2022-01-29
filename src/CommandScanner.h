//: CommandScanner.h

#ifndef COMMANDSCANNER_H
    #define COMMANDSCANNER_H

#include <string>
using namespace std;

#define numCols 11
#define ERR     14
#define IS      -1

static int TransitionTable[][numCols] = {
/*  [A-G],  [1-8],  Q,      U,      I,      T,      H,      L,      P,      ' ',    Other */
    {1,     ERR,    10,     ERR,    ERR,    ERR,    6,      ERR,    ERR,    ERR,    ERR},       //S00: NOAS
    {ERR,   2,      ERR,    ERR,    ERR,    ERR,    ERR,    ERR,    ERR,    ERR,    ERR},       //S01: NOAS
    {4,     ERR,    ERR,    ERR,    ERR,    ERR,    ERR,    ERR,    ERR,    3,      ERR},       //S02: NOAS
    {4,     ERR,    ERR,    ERR,    ERR,    ERR,    ERR,    ERR,    ERR,    ERR,    ERR},       //S03: NOAS
    {ERR,   5,      ERR,    ERR,    ERR,    ERR,    ERR,    ERR,    ERR,    ERR,    ERR},       //S04: NOAS
    {IS,    IS,     IS,     IS,     IS,     IS,     IS,     IS,     IS,     IS,     IS},        //S05: ACCS - Move Command
    {7,     2,      ERR,    ERR,    ERR,    ERR,    ERR,    ERR,    ERR,    ERR,    ERR},       //S06: NOAS
    {ERR,   ERR,    ERR,    ERR,    ERR,    ERR,    ERR,    8,      ERR,    ERR,    ERR},       //S07: NOAS
    {ERR,   ERR,    ERR,    ERR,    ERR,    ERR,    ERR,    ERR,    9,      ERR,    ERR},       //S08: NOAS
    {IS,    IS,     IS,     IS,     IS,     IS,     IS,     IS,     IS,     IS,     IS},        //S09: ACCS - help command
    {ERR,   ERR,    ERR,    11,     ERR,    ERR,    ERR,    ERR,    ERR,    ERR,    ERR},       //S10: NOAS
    {ERR,   ERR,    ERR,    ERR,    12,     ERR,    ERR,    ERR,    ERR,    ERR,    ERR},       //S11: NOAS
    {ERR,   ERR,    ERR,    ERR,     ERR,   13,     ERR,    ERR,    ERR,    ERR,    ERR},       //S12: NOAS
    {IS,    IS,     IS,     IS,     IS,     IS,     IS,     IS,     IS,     IS,     IS},        //S13: ACCS - quit command
    {IS,    IS,     IS,     IS,     IS,     IS,     IS,     IS,     IS,     IS,     IS},        //S14: ACCS - error, invalid command
};

enum STATES {
    NOAS,
    ASM,
    ASH,
    ASQ,
    ERS,
};

static int stateType[] = {
    NOAS,
    NOAS,
    NOAS,
    NOAS,
    NOAS,
    ASM,    //S05: ACCS - Move Command
    NOAS,
    NOAS,
    NOAS,
    ASH,    //S09: ACCS - help command
    NOAS,
    NOAS,
    NOAS,
    ASQ,    //S13: ACCS - quit command
    ERS,    //S14: ACCS - error, invalid command
};

int validate(string _in);
int nextClass(char _c);
int nextState(int _state, char _c);

#endif