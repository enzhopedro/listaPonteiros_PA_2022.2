#include <stdio.h>

int main(void)
{
    float vet[5] = {1.1,2.2,3.3,4.4,5.5};
    float *f;
    int i;
    f = vet;
    printf("contador/valor/valor/endereco/endereco");
    for (i = 0 ; i <= 4 ; i++)
    {
        printf("\ni = %d ",i); // imprime o valor float do contador i a cada loop do la�o de repeti��o.
        printf("vet[%d] = %.1f ",i, vet[i]); // imprime o valor float da respectiva posi��o do vetor.
        printf("*(f + %d) = %.1f ",i, *(f+i)); // por f apontar para vet[0] o printf imprimir� o conte�do do ponteiro "f" de acordo com o incremento "i" na mem�ria.
        printf("&vet[%d] = %X ",i, &vet[i]); // imprime o endere�o em hexadecimal de cara elemento do vetor.
        printf("(f + %d) = %X",i, f+i); // imprime o endere�o em hexadecimal que o ponteiro "f" aponta de acordo com o incremento "i" na mem�ria.
    }
}
