#include <stdio.h>

int main()
{
    int num,contador=1;
    printf("Introduce un numero: ");
    scanf("%d",&num);

    while(num/10>0)
    {
        num=num/10;
        contador++;
    }
    printf("Tiene %d cifras\n",contador);
    return 0;
}
