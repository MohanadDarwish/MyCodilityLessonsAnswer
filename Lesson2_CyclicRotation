// you can write to stdout for debugging purposes, e.g.
// printf("this is a debug message\n");

struct Results solution(int A[], int N, int K) {
    struct Results result;
    // write your code in C99 (gcc 6.2.0)
    
    while(K>N && K>0 && N>0) 
        K-=N;
   
    if(K!=0 && N!=0 && N!=1 && (N!=K) && (K%N!=0) )
    { 
        short i=0,j=K-1;
        short temp[K];
        
        for(i=N-1;i>(N-K-1);i--){
         temp[j--] = A[i];
        }
        for(i=(N-K-1);(i+K)>=0;i--){
         A[i+K]=A[i];   
        }
        for(i=0;i<K;i++){
         A[i]=temp[i];   
        }
    }
    result.A = A;
    result.N = N;
        
    return result;
}
