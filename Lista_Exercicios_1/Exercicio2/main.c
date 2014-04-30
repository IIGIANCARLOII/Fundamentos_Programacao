#include <stdio.h>
#include <stdlib.h>

float calculatesDistance(float fP1_X, float fP1_Y, float fP2_X, float fP2_Y)
{
    return (sqrt(pow(fP1_X - fP2_X, 2) + pow(fP1_Y - fP2_Y, 2)));
}

int main()
{

    //ponto 1
    float fP1_X;
    float fP1_Y;

    //ponto 2
    float fP2_X;
    float fP2_Y;

    printf("----------------------------------------------\n");
    printf("Informe a coodernada X do plano 1:\t");
    scanf("%f", &fP1_X);

    printf("Informe a coodernada Y do plano 1:\t");
    scanf("%f", &fP1_Y);

    printf("Informe a coodernada X do plano 2:\t");
    scanf("%f", &fP2_X);

    printf("Informe a coodernada Y do plano 2:\t");
    scanf("%f", &fP2_Y);

    printf("\nA distância ente os pontos é:\t %f \n", calculatesDistance(fP1_X, fP1_Y, fP2_X, fP2_Y));

    printf("----------------------------------------------\n");
    return 0;
}
