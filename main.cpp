#include <print>
#include "getones.h"
#include "chess.h"

int main()
{
    int n = 0b1010;
    std::println("GetOnes_alg1: {} = {}", n, getOnes_alg1(n));
    std::println("GetOnes_alg2: {} = {}", n, getOnes_alg2(n));
    uint64_t num = 1ul;
    num = num << 37;
    std::println("King Step: {} = {}", num, getKingSteps(num));
    std::println("Horse Step: {} = {}", num, getHorseSteps(num));
}