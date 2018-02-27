//--------------------------------------------------------------------------------------------------------//
//Lesson Link: https://app.codility.com/programmers/lessons/1-iterations/binary_gap/
//--------------------------------------------------------------------------------------------------------//


/* A binary gap within a positive integer N is any maximal sequence of consecutive zeros that is surrounded by ones
 * at both ends in the binary representation of N.
 * For example, number 9 has binary representation 1001 and contains a binary gap of length 2.
 * The number 529 has binary representation 1000010001 and contains two binary gaps:
 * one of length 4 and one of length 3.
 * The number 20 has binary representation 10100 and contains one binary gap of length 1.
 * The number 15 has binary representation 1111 and has no binary gaps.
*/
int solution(unsigned int N) {
    // write your code in C99 (gcc 6.2.0)
    unsigned int i,max_gap,gap_size,start_of_gap,end_of_gap;
    max_gap=0;  gap_size=0;   start_of_gap=0;   end_of_gap=0;
    
    for(i=0;(1<<i)<N;i++)
    {
        if((N&(1<<i))&&(start_of_gap)&&(gap_size>0))
        {
            end_of_gap=1;
            if(gap_size>max_gap)
            {
                max_gap=gap_size;
                if(max_gap == 30) break;
            }
            gap_size=0;       
        }
        else if(N&(1<<i))
        {
            start_of_gap=1;
            end_of_gap=0;
        }
        else if(!(N&(1<<i))&&(start_of_gap) )
        {
            end_of_gap=0;
            gap_size++; 
        }
    } 
    return max_gap;
}
