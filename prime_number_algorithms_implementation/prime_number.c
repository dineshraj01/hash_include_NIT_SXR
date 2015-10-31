#include <stdio.h>


int isPrime(int n){                        //function that checks whether a number is prime or not
	int i,count;
	count =0;
    for(i=1;i<=n;++i){                   //for loop finds the no of divisors of n  in the range
       if(n%i == 0)
         count++;
    }

    if(count == 2)
       return 1;
	else
	   return 0;
}


int main(){                               //main function

int i,count;

  int x = 30;
  count =0;
  for(i=2;i<=x;i++)
     if(isPrime(i) == 1)
       {
           printf("%d\t",i);
           count++;
       }

       printf("\n\nTotal prime numbers found  : %d\n\n",count);

return 0;
}
