////////////////////////////////////////////////  NAIVE APPROACH  ///////////////////////////////////////////////////////////////
//github.com/cloud111/hash_include_NIT_SXR
#include<stdio.h>

long long int min(long long int x,long long int y) // Function to find minimum of two numbers 'x' and 'y'
{
    return (x<y)?x:y;
}

long long int GCD(long long int A, long long int B){ // Function to find GCD of two numbers 'A' and 'B'

    long long int m = min(A, B), gcd,i; // Initialization

    if(A==0)
        return B;

    if(B==0)
        return A;

    if(A==B)
      return A;

    for( i = m; i > 0; --i)
        if(A % i == 0 && B % i == 0) {
            gcd = i;
            return gcd;
        }
}

int main()
{
    long long int x=9999999990,y=50000000; // Initialization

    printf("%lld\n",GCD(x,y)); // Printing the Output

    return 0;
}

// Time Complexity: Time complexity of this function is O(min(A, B)).
