//----------------------------------------------------------------------------------------------//
//Lesson Link: https://app.codility.com/programmers/lessons/3-time_complexity/frog_jmp/
//----------------------------------------------------------------------------------------------//


int solution(int X, int Y, int D) {
    // write your code in C99 (gcc 6.2.0)
    int result = ((Y-X)/D);
    if(((Y-X)%D)>0 ) result++;
    
    return result; 
}
