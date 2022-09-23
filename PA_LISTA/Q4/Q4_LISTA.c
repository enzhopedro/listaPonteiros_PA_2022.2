/*4. Determine o que ser� mostrado pelo seguinte programa (compile-o, execute-o e verifique se
foram obtidas as respostas esperadas).*/

#include <stdio.h>

int main()
{
    int valor;
    int *p1;
    float temp;
    float *p2;
    char aux;
    char *nome = "Ponteiros";
    char *p3;
    int idade;
    int vetor[3];
    int *p4;
    int *p5;

    /* (a) */
    valor = 10;
    p1 = &valor;
    *p1 = 20;
    printf("%d \n", valor);

    /* Aparecer� 20, pois o conte�do da vari�vel "valor" foi alterado para o do ponteiro "p1" que apontava
    para ela. */

    /* (b) */
    temp = 26.5;
    p2 = &temp;
    *p2 = 29.0;
    printf("%.1f \n", temp);

    /* Aparecer� 29.0 com somente uma casa decimal devido a especifica��o "%.lf". Semelhantemente � primeira o conte�do da vari�vel "temp" foi alterado para o do ponteiro "p2" que apontava
    para ela.*/

    /* (c) */
    p3 = &nome[0];
    aux = *p3;
    printf("%c \n", aux);

    /* Aparecer� o caractere "P", pois aux � igual ao conte�do de p3 o qual aponta para o endere�o do 1� byte da vari�vel nome que guarda o primeiro caractere da palavra "Ponteiros.". */

    /* (d) */
    p3 = &nome[4];
    aux = *p3;
    printf("%c \n", aux);

    /* Aparecer� o caractere "e". Segue a linha da quest�o anterior, entretanto p3 agora aponta para o endere�o do 5� caractere de "Ponteiros.".*/

    /* (e) */
    p3 = nome;
    printf("%c \n", *p3);

    /* Aparecer� "P", visto que p3 aponta para o byte que guarda "nome", ou seja, p3 aponta para o endere�o do primeiro byte da vari�vel. */

    /* (f) */
    p3 = p3 + 4;
    printf("%c \n", *p3);

    /* Aparecer� o caractere "e", pois conforme neste momento o ponteiro aponta para o 1� byte da vari�vel "nome" conforme a letra (e), ele sofrer� um incremento em 4 unidades no endere�o, apontando agora para nome[4].*/

    /* (g) */
    p3--;
    printf("%c \n", *p3);

    /* Aparecer� o caractere "t". O ponteiro neste momento aponta para o 5� byte de "nome", mas ao ser decrementado uma unidade apontar� para nome[3], isto �, o 4� byte de "nome".*/

    /* (h) */
    vetor[0] = 31;
    vetor[1] = 45;
    vetor[2] = 27;
    p4 = vetor;
    idade = *p4;
    printf("%d \n", idade);

    /* Aparecer� o inteiro 31, pois, semelhantemente a letra (e), p4 aponta para o primeiro endere�o do array que � vetor[0]=31.*/

    /* (i) */
    p5 = p4 +1;
    idade = *p5;
    printf("%d \n", idade);

    /* Aparecer� o inteiro 45. Semelhante a letra (f), por�m com somente uma unidade incrementada, a vari�vel idade guarda o valor do ponteiro p5 que aponta para p4 incrementado de 1 na mem�ria.*/

    /* (j) */
    p4 = p5 + 1;
    idade = *p4;
    printf("%d \n", idade);

    /* Aparecer� o inteiro 27. Aqui, semelhante a letra (i), a vari�vel "idade" guarda o valor do endere�o "p4" que agora ter� o endere�o
    de p5 incrementado 1 unidade, ou seja, *p4=vetor[2].*/

    /* (l) */
    p4 = p4 - 2;
    idade = *p4;
    printf("%d \n", idade);

    /* Aparecer� o inteiro 31. Por p4 apontar para a terceira posi��o do array "vetor", com o decrementado de 2 unidades ele apontar� agora para a primeira posi��o do array "vetor". */

    /* (m) */
    p5 = &vetor[2] - 1;
    printf("%d \n", *p5);

    /* Aparecer� o inteiro 45, visto que p5 aponta para o terceiro endere�o do array decrementado de 1 unidade, logicamente agora apontar� para o segundo byte do array que � &vetor[1].*/

    /* (n) */
    p5++;
    printf("%d \n", *p5);

    /* Aparecer� o inteiro 27. A opera��o p5++ incrementa novamente a unidade que foi retirada na letra (n) fazendo o ponteiro apontar novamente para &vetor[2].*/

    return(0);
}
