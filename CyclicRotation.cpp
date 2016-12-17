vector<int> solution(vector<int> &A, int K) {
    // write your code in C++14 (g++ 6.2.0)
    
    if(A.size() == 0 || A.size() == 1)
        return A;
    
    for(int i = 0; i < K; i++){
        int last = A[A.size() - 1];
        for(int i = A.size() - 1; i > 0; i--){
            A[i] = A[i-1];   
        }
        A[0] = last;
    }
    
    return A;
}