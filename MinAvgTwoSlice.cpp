#include <climits>
#include <stdio.h>

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    if(A.size() == 2){
        return 0;
    }
    
    float cur = INT_MAX;
    int index = 0;
    for(int i = 0; i < A.size() - 2; i++){
        float num2 = (float)(A[i] + A[i+1]) / 2;
        float num3 = (float)(A[i] + A[i+1] + A[i+2]) / 3;
        if(cur > min(num2, num3)){
            cur = min(num2, num3);
            index = i;
        }
    }
    
    float last2 = (A[A.size()-1] + A[A.size()-2]) / 2;
    if(cur > last2){
        cur = last2;
        index = A.size() - 2;
    }
        
    return index;
}