#include <stdio.h>

int main()
{

    int vet[] = {4,9,13};
    int i;

    for(i = 0; i < 3; i++)
    {
        printf("%d ",*(vet+i)); //O printf imprime o conteúdo correspondente à posição i em vet , isto é, *(vet+0)=vet[0]=4; *(vet+1)=vet[1]=9 e *(vet+2)=vet[2]=13;
    }
}
