#include <stdlib.h>
#include <stdio.h>

//FUN��O QUE SER� REFERENCIADA:
int multiplicacao(int x, int y)
{
    return x*y;
}

int main()
{
    int a, b, mlt;
    int (*m)(int, int);//PONTEIRO PARA FUN��O
    printf("Insira 2 numeros que queres multiplicar\n");
    scanf("%d %d", &a, &b);
    m=multiplicacao;//ENDERE�O DE M APONTA PARA O ENDERE�O DA FUN��O MULTIPLICA��O
    mlt=m(a,b);//VARI�VEL GUARDA O PONTEIRO PARA FUN��O
    printf("Resultado: %d", mlt);

    return 0;
}
