#include<stdio.h>
#include<stdlib.h>

int main()
{
    float *x, tmp;
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

    for (i = 0; i < n-1; i++)
    {
        for (j = i+1; j < n; j++)
        {
            if (x[i] > x[j])
            {
                tmp = x[i];
                x[i] = x[j];
                x[j] = tmp;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("%0.3f ", x[i]);
    }

    printf("\n");

    free(x);//liberando espaço de memória

    return 0;
}
