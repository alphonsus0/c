#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    printf("QUESTÃO 01: distância entre dois pontos no plano A(x,y)\n");
    printf("Para um par ordenado P(x1,y1)Q(x2,y2)\n");

    //entrada de dados

    float x1,y1,x2,y2,c1,c2,d;
    printf("Ponto P\n");
    printf("VALOR DE x1:");
    scanf("%i",&x1);
    printf("VALOR DE y1:");
    scanf("%i",&y1);
    printf("Ponto Q\n");
    printf("VALOR DE x2:");
    scanf("%i",&x2);
    printf("VALOR DE y2:");
    scanf("%i",&y2);
    c1=pow((x2-x1),2);
    c2=pow((y2-y1),2);
    d= pow((c1+c2),1.0/2);
    printf("A distância entre os pontos P(%i,%i) e Q(%i,%i) é igual a %.2f", x1,y1,x2,y2,d);
    return 0;
}
