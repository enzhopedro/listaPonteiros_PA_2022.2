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

void bSort(float* f, int n, float (*ordCres)(const void* a, const void *b))
{
    float tmp;
    for (int i = 0; i < n - 1; i++)
    {
        if ((*ordCres)(&f[i], &f[i + 1]) > 0)
        {
            tmp = f[i];
            f[i] = f[i + 1];
            f[i + 1] = tmp;
        }
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

    bSort(x, n, ordCres);

    for (i = 0; i < n; i++)
    {
        printf("%0.3f ", x[i]);
    }

    printf("\n");

    free(x);//liberando espaço de memória

    return 0;
}
