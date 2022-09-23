#include <stdio.h>
#include <stdlib.h>

void somaV(const int* v1, const int* v2, int* sum, const int n)
{
    for (int i = 0; i < n; i++)
    {
        sum[i] = v1[i] + v2[i];
    }
}

int main()
{
    int n = 0;
    printf("Quantos elementos terao os 2 vetores? ");
    scanf("%d", &n);

    int* v1 = malloc(n*sizeof(int));
    int* v2 = malloc(n*sizeof(int));
    int* sum = malloc(n*sizeof(int));

    for (int i = 0; i < n; i++)
    {
        printf("v1[%d]: ", i);
        scanf("%d", &v1[i]);
    }
    printf("\n");

    for (int i = 0; i < n; i++)
    {
        printf("v2[%d]: ", i);
        scanf("%d", &v2[i]);
    }
    printf("\n");

    somaV(v1, v2, sum, n);

    printf("v1 + v2 = [ ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", sum[i]);
    }
    printf("]");

    free(v1);
    free(v2);
    free(sum);

    return 0;
}
