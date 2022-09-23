#include <stdlib.h>
#include <stdio.h>

int main()
{

    char c[4];
    int r;
    printf("X DECLARADO COMO CHAR\nendereco inicial: %d\n", c);
    for (r = 1; r < 4; r++)
    {
        printf("x + %d: %d\n", r, c + r);
    }
    printf("\n");

    short i[4];
    printf("X DECLARADO COMO SHORT\nendereco inicial: %d\n", i);
    for (r = 1; r < 4; r++)
    {
        printf("x + %d: %d\n", r, i + r);
    }
    printf("\n");

    float f[4];
    printf("X DECLARADO COMO FLOAT\nendereco inicial: %d\n", f);
    for (r = 1; r < 4; r++)
    {
        printf("x + %d: %d\n", r, f + r);
    }
    printf("\n");

    double d[4];
    printf("X DECLARADO COMO DOUBLE\nendereco inicial: %d\n", d);
    for (r = 1; r < 4; r++)
    {
        printf("x + %d: %d\n", r, d + r);
    }
    printf("\n");

    return 0;
}
