//----------------------------------------------------------------------------------------------//
//Lesson Link: https://app.codility.com/programmers/lessons/2-arrays/odd_occurrences_in_array/
//----------------------------------------------------------------------------------------------//

typedef unsigned int U32;

U32 solution(U32 A[], U32 N) {
    // write your code in C99 (gcc 6.2.0)
    U32 i=0;
    U32 ans=0;
for(i=0;i<N;i++){
 ans ^=A[i];     
}
return ans;
}
