#include <stdio.h>
#include <math.h>

int isPrime(int n){                        //function that checks whether a number is prime or not
	int i,count;
	count =0;
    for(i=2;i<=n-1;++i){                   //for loop finds the no of divisors of n
       if(n%i == 0)
         return 0;
    }

    return 1;
}


int main(){                               //main function

int i,count;

  int x = 100000;
  count =0;
  for(i=2;i<=x;i++)
     if(isPrime(i) == 1)
       {
           printf("%d\t",i);
           count++;
       }

       printf("\n\nTotal prime numbers found : %d\n\n",count);

return 0;
}
