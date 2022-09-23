#include<stdio.h>
#include<stdlib.h>

float ordCres(const void *a, const void *b)
{
    if (*(float*)a > *(float*)b)
    {
        return 1;
    }
    else if (*(float*)a < *(float*)b)
    {
        return -1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    float *x;
    int  n, i, j;

    printf("\nDigite quantos numeros quer ordernar : ");
    scanf("%d", &n);

    x = (float*)malloc(n*sizeof(float));//alocando espaço de memória

    printf("Digite os numeros: \n");
    for (i = 0; i < n; i++)
    {
        printf("%d-%d: ", i+1, n);
        scanf("%f", (x+i));
    }

    qsort(x, n, sizeof(float), ordCres);

    for (i = 0; i < n; i++)
    {
        printf("%0.3f ", x[i]);
    }

    printf("\n");

    free(x);//liberando espaço de memória

    return 0;
}
