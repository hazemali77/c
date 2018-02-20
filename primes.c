# include <stdio.h>


int main(int argc, char *argv[])
{
  int current =2;
  int i;
  int nprimes = atoi(argv[1]);
  int primes[nprimes];
  primes[0]=current;
  for (i=1; i<nprimes; i++){
    int j;
    Newcandiate:
    current++;
    for (j=0; primes[j]*primes[j]<=current;j++){
      printf("iteration %d", j);	
      if (current % primes[j] ==0)
	goto Newcandiate;
    }
    primes[i]=current;
    printf("%d : %d \n", i, primes[i]);
  }
  return 0;
}