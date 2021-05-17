#include <stdio.h>

int main()
{
  int M,N,i,menor,multiplo,hay_multiplo;

  printf("Introduzca la fraccion como N/D: ");
  scanf("%d/%d",&M,&N);
  printf("%d/%d", M,N);
  do {
    if (M < N )
       menor = M;
    else
       menor = N;
    i=2;
    hay_multiplo=0;
    while (i <= menor && hay_multiplo == 0)
    {
      if (M % i == 0 && N % i == 0)
      {
         multiplo = i;
         hay_multiplo = 1;
      }
      i++;
    }
    if (hay_multiplo == 1)
    {
       M=M/multiplo;
       N=N/multiplo;
       printf(" = %d/%d\n", M, N);
    }
  }while (hay_multiplo==1);

  return 0;
}
