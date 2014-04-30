#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
*   Verifica se um número é multiplo do outro
*   @param nValueA : int -> Primeiro valor informado
*   @param nValueB : int -> Segundo valor informado
*
*   @return 1 se A é multiplo de B, 0 se A não é multiplo de B
*/
int isMultiple(int nValueA, int nValueB)
{
    if ((nValueA % nValueB) == 0)
        return 1;
    else
        return 0;
}

/**
*   Calcula a distância entre um ponto e outro
*   @param fP1_X : float -> coodenada X do ponto P1
*   @param fP1_Y : float -> coodenada Y do ponto P1
*   @param fP2_X : float -> coodenada X do ponto P2
*   @param fP1_Y : float -> coodenada Y do ponto P2
*
*   @return a distância dos pontos
*/
float calculatesDistance(float fP1_X, float fP1_Y, float fP2_X, float fP2_Y)
{
    return (sqrt(pow(fP1_X - fP2_X, 2) + pow(fP1_Y - fP2_Y, 2)));
}

/**
*   Calcula o peso ideal de uma pessoa com base na altura e no genero
*   @param fHeight : float  -> altura da pessoa
*   @param nGender: int     -> genero da pessoa
*
*   @return o peso ideal
*/
float idealWeight(float fHeight, int nGender)
{
    if (nGender == 1)
        return ((72.7 * fHeight) - 58);
    else
        return ((62.1 * fHeight) - 44.7);

}

/**
*   Converte Celsius para Faheinheit
*   @param celsius : float -> Temperatura em Celsius a ser convertida para Fahreinheit
*   @return a temperatura convertida em Faheinheit
*/
float celsiusToFahreinheit(float celsius)
{
    return (((9 * celsius) / 5) + 32);
}

/**
*   Converte Fahreinheit para Celsius
*   @param fahreinheit : float -> Temperatura em Faheinheit a ser convertida para Celsius
*   @return a temperatura convertida em Celsius
*/
float fahreinheitToCelsius(float fahreinheit)
{
    return (((fahreinheit - 32) / 9) * 5);

}

/*------------------------------------------------------------------------------------------------*/
int main()
{
    int nOption;
    printf("---------- Exercicio 5 ----------\n");
    printf("1 - Verifica se A é multiplo de B\n");
    printf("2 - Calcula a distância entre 2 pontos\n");
    printf("3 - Calcula o peso ideal\n");
    printf("4 - Converte Celsius para Faheinheit\n");
    printf("5 - Converte Fahreinheit para Celsius\n");
    printf("Escolha uma opção:\t");
    scanf("%d", &nOption);


    switch (nOption)
    {
        case 1:
            printf("\n----- 1 - Verifica se A é multiplo de B -----\n");
            int nA;
            int nB;

            printf("Informe o valor de A:\t");
            scanf("%d", &nA);

            printf("Informe o valor de B:\t");
            scanf("%d", &nB);

            if (isMultiple(nA, nB))
                printf("A é multiplo de B");
            else
                printf("A não é múltiplo de B");
            break;

        case 2:
            printf("\n----- 2 - Calcula a distância entre 2 pontos -----\n");
                //ponto 1
            float fP1_X;
            float fP1_Y;

                //ponto 2
            float fP2_X;
            float fP2_Y;

            printf("Informe a coodernada X do plano 1:\t");
            scanf("%f", &fP1_X);

            printf("Informe a coodernada Y do plano 1:\t");
            scanf("%f", &fP1_Y);

            printf("Informe a coodernada X do plano 2:\t");
            scanf("%f", &fP2_X);

            printf("Informe a coodernada Y do plano 2:\t");
            scanf("%f", &fP2_Y);

            printf("\nA distância ente os pontos é:\t %f \n", calculatesDistance(fP1_X, fP1_Y, fP2_X, fP2_Y));
            break;

        case 3:
            printf("\n----- 3 - Calcula o peso ideal -----\n");
            float fHeight;  //altura da pessoa
            int nGender;    //genero da pessoa

            printf("Informe a altura (metros):\t");
            scanf("%f", &fHeight);

            printf("Informe o sexo (1-Masculino, 2-Feminino):\t");
            scanf("%d", &nGender);

            printf("\nSeu peso ideal é:\t %f \n", idealWeight(fHeight, nGender));
            break;

        case 4:
            printf("\n----- 4 - Converte Celsius para Faheinheit -----\n");
            float fCelsius; //temperatura em celsius a ser convertida

            printf("Informe a temperatura em celsius:\t");
            scanf("%f", &fCelsius);
            printf("Resultado:\t %.3f °F\n", celsiusToFahreinheit(fCelsius));
            break;

        case 5:
            printf("\n----- 5 - Converte Fahreinheit para Celsius -----\n");
            float fFahreinheit; //temperatura em fahreinheit a ser convertida

            printf("Informe a temperatura em fahreinheit:\t");
            scanf("%f", &fFahreinheit);
            printf("Resultado:\t %.3f °C\n", fahreinheitToCelsius(fFahreinheit));
            break;

        //caso uma opção inválida seja informada
        default:
                printf("\nErro! Opção inválida\n");
    }

    return 0;

}
