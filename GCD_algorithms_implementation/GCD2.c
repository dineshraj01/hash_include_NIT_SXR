///////////////////////////////////////////////  EUCLID'S ALGORITHM  ////////////////////////////////////////////////////////////

// : Comments. They Don't Modify the Program
// HEADER FILES

#include<stdio.h>

long long int GCD(long long int A, long long int B) { // FUNCTION FOR FINDING GCD OF TWO NUMBERS 'A' and 'B'
    if(B==0)
        return A;
    else
        return GCD(B, A % B);
}

int main()
{
    long long int x=999999990,y=50000000; // INPUTS

    printf("%lld\n",GCD(x,y)); // PRINTING THE OUTPUT

    return 0;
}

// Time Complexity: The time complexity of Euclid’s Algorithm is O(log(max(A, B))).
