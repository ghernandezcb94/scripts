#include <stdio.h>

int main(void)
{
  int i,d,n,a[100],x=0;

  for(n=1; n<=500; n++)
  {
    for (d = 1; d<=n; d++)
      if(n%2 == 0)
      {
        a[x] = n;
        printf("%d\n", a[x]);
        x++;
				
      }
  }
  return 0;
}
