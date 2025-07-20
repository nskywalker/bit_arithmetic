//
// Created by googl on 20.07.2025.
//

#include "getones.h"


int getOnes_alg1(int num)
{
    int cnt = 0;
    while(num > 0) {
        if((num & 0x01) > 0) {
            ++cnt;
        }
        num >>= 1;
    }
    return cnt;

}

int getOnes_alg2(int num)
{
    int cnt = 0;
    while (num > 0) {
        ++cnt;
        num &= (num - 1);
    }
    return cnt;

}