#include <stdio.h>
#include <stdlib.h>


/**
*   Converte Celsius para Faheinheit
*   @param celsius : float -> Temperatura em Celsius a ser convertida para Faheinheit
*   @return a temperatura convertida em Faheinheit
*/
float celsiusToFahreinheit(float fCelsius)
{
    return (((9 * fCelsius) / 5) + 32);
}

/**
*   Converte Faheinheit para Celsius
*   @param fahreinheit : float -> Temperatura em Faheinheit a ser convertida para Celsius
*   @return a temperatura convertida em Celsius
*/
float fahreinheitToCelsius(float fFahreinheit)
{
    return (((fFahreinheit - 32) / 9) * 5);

}

int main()
{
    int nConversionOption; //qual tipo de conversão será efetuada (values: 1 or 2)

    printf("-----------Conversão de Temperatura-----------\n");
    printf("\tEscolha a opção:\n");
    printf("1 - Celsius para Fahreinheit\n");
    printf("2 - Fahreinheit para Celsius\n");
    scanf("%d", &nConversionOption);

    /*
    verifica qual opção foi escolhida, 1 ou 2, e chama a função correspondente de converção e
    imprime o rsultado para o usuário com precisão de 3 casas após a vírgula
    */
    if (nConversionOption == 1)
    {
        float fCelsius;
        printf("\n--- 1 - Celsius para Fahreinheit ---\n");
        printf("Informe a temperatura em celsius:\t");
        scanf("%f", &fCelsius);
        printf("Resultado:\t %.3f °F\n", celsiusToFahreinheit(fCelsius));
        printf("----------------------------------------------\n");

    } else if (nConversionOption == 2)
    {
        float fFahreinheit;
        printf("\n--- 2 - Fahreinheit para Celsius ---\n");
        printf("Informe a temperatura em fahreinheit:\t");
        scanf("%f", &fFahreinheit);
        printf("Resultado:\t %.3f °C\n", fahreinheitToCelsius(fFahreinheit));
        printf("----------------------------------------------\n");

    } else
    {
        printf("Opção Inválida!\n");
        printf("----------------------------------------------\n");
    }

    return 0;
}
