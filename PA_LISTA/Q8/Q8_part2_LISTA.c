#include <stdio.h>

int main()
{

    int vet[] = {4,9,13};
    int i;

    for(i = 0; i < 3; i++)
    {
        printf("%X ", vet + i); //O printf imprime o endere�o em hexadecimal da i�sima posi��o de vet, ou seja, vet+0=61FE10; vet+1=61FE14 e vet+2=61FE18.
    }
}
