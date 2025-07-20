//
// Created by googl on 20.07.2025.
//

#include "chess.h"

uint64_t getKingSteps(uint64_t bb)
{

    uint64_t steps = (bb & 0x7F7F7F7F7F7F7F7F) << 1;
    steps |= (bb & 0xFEFEFEFEFEFEFEFE) >> 1;
    steps |= (bb << 8);
    steps |= bb >> 8;
    steps |= (bb & 0xFEFEFEFEFEFEFEFE) >> 9;
    steps |= (bb & 0xFEFEFEFEFEFEFEFE) << 7;
    steps |= (bb & 0x7F7F7F7F7F7F7F7F) << 9;
    steps |= (bb & 0x7F7F7F7F7F7F7F7F) >> 7;
    return steps;
}

uint64_t getHorseSteps(uint64_t bb)
{
    uint64_t steps = (bb & 0xFEFEFEFEFEFEFEFE) << 15;
    steps |= (bb & 0xFEFEFEFEFEFEFEFE) << 6;
    steps |= (bb & 0xFEFEFEFEFEFEFEFE) >> 17;
    steps |= (bb & 0xFEFEFEFEFEFEFEFE) >> 10;

    steps |= (bb & 0x7F7F7F7F7F7F7F7F) << 17;
    steps |= (bb & 0x7F7F7F7F7F7F7F7F) << 10;
    steps |= (bb & 0x7F7F7F7F7F7F7F7F) >> 15;
    steps |= (bb & 0x7F7F7F7F7F7F7F7F) >> 6;



    return steps;
}