#include <stdio.h>
#include <stdlib.h>

void constructM(int*** m, unsigned int* nl, unsigned int* nc) {
    *nl, *nc = 0;
    if (*nl == 0) {
        printf("Insira a qnt de linhas: ");
        scanf("%d", nl);
    }
    printf("Insira a qnt de colunas: ");
    scanf("%d", nc);

    *m = malloc((*nl)*sizeof(int*));
    *m[0] = malloc((*nl)*(*nc)*sizeof(int));
    for (int i = 1; i < (*nl); i++) {
        (*m)[i] = (*m)[i - 1] + (*nc);
    }

    printf("Insira as entradas: \n");
    for (int i = 0; i < *nl; i++) {
        for (int j = 0; j < *nc; j++) {
            printf("entrada [%d][%d]: ", i, j);
            scanf("%d", (*m)[i] + j);
        }
    }
}

void showM(int** m, int nl, int nc) {
    for (int i = 0; i < nl; i++) {
        for (int j = 0; j < nc; j++) {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void multM(int** A, int**  B, int** C, int la, int ca, int cb) {
    for(int i = 0; i < la; i++) {
        for (int j = 0; j < cb; j++) {
            C[i][j] = 0;
            for (int t = 0; t < ca; t++) {
                C[i][j] += A[i][t]*B[t][j];
            }
        }
    }
}

int main() {
    int** A;
    unsigned int la, ca = 0;

    printf("Matriz A:\n");
    constructM(&A, &la, &ca);

    printf("A =\n");
    showM(A, la, ca);

    int** B;
    unsigned int cb = 0;

    printf("Matriz B:\n");
    constructM(&B, &ca, &cb);

    printf("B =\n");
    showM(B, ca, cb);

    int** C = malloc(la*sizeof(int*));
    C[0] = malloc(la*cb*sizeof(int));
    for (int i = 1; i < la; i++) {
        C[i] = C[i - 1] + cb;
    }

    multM(A, B, C, la, ca, cb);

    printf("C = A*B = \n");
    showM(C, la, cb);

    free(A[0]);
    free(A);
    free(B[0]);
    free(B);
    free(C[0]);
    free(C);

    return 0;
}

