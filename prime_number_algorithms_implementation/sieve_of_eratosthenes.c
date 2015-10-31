/**************************** Sieve of Eratosthenes***********************************

   ---Its one of the most efficent algorithm to find the prime numbers
	  Following steps need to be performed :

	  --Create a list of consecutive integers from 2 through n: (2, 3, 4, ..., n).

	  --Initially, let p equal 2, the first prime number.

      --Starting from p, mark its multiples by counting to n in increments of p, and mark
         them in the list (these will be 2p, 3p, 4p, ... ; the p itself should not be marked).

      --Find the first number greater than p in the list that is not marked. If there was no such
        number, stop. Otherwise, let p now equal this new number (which is the next prime), and
        repeat from step 3.


*****************************************************************************************/



#include<stdio.h>


void sieve_of_eratosthenes(long int N){                         //sieve of eratosthenes function
    long int i,j;
    long int isPrime[N+1];

   for(i=1;i<=N;i++){
      isPrime[i] = 1;
   }
   isPrime[0] = 0;
   isPrime[1] = 0;
/***********************  main step *******************/
    for(i=2;i<=N;i++){
       if(isPrime[i] == 1){
          for(j = i*i;j<=N;j = j+i)            //marking multiples of prime numbers
            isPrime[j] = 0;
       }
    }
/*********************** ends here *******************/


    for(i=0;i<=N;i++)
      if(isPrime[i] == 1)
         printf("%ld\t",i);

}


int main(){

sieve_of_eratosthenes(30);                       //finding out first 1 lakh prime numbers

return 0;
}
