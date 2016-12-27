#include <math.h>

int solution(int X, int Y, int D) {
    // write your code in C++14 (g++ 6.2.0)
    
    double jumps = (double)(Y-X) / D;
    
    return ceil(jumps);
}
