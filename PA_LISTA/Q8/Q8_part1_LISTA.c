#include <stdio.h>

int main()
{

    int vet[] = {4,9,13};
    int i;

    for(i = 0; i < 3; i++)
    {
        printf("%d ",*(vet+i)); //O printf imprime o conte�do correspondente � posi��o i em vet , isto �, *(vet+0)=vet[0]=4; *(vet+1)=vet[1]=9 e *(vet+2)=vet[2]=13;
    }
}
