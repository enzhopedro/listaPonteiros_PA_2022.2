#include <stdlib.h>
#include <stdio.h>

//FUNÇÃO QUE SERÁ REFERENCIADA:
int multiplicacao(int x, int y)
{
    return x*y;
}

int main()
{
    int a, b, mlt;
    int (*m)(int, int);//PONTEIRO PARA FUNÇÃO
    printf("Insira 2 numeros que queres multiplicar\n");
    scanf("%d %d", &a, &b);
    m=multiplicacao;//ENDEREÇO DE M APONTA PARA O ENDEREÇO DA FUNÇÃO MULTIPLICAÇÃO
    mlt=m(a,b);//VARIÁVEL GUARDA O PONTEIRO PARA FUNÇÃO
    printf("Resultado: %d", mlt);

    return 0;
}
