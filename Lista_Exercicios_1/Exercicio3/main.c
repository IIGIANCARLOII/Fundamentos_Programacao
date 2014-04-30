#include <stdio.h>
#include <stdlib.h>

float idealWeight(float fHeight, int nGender)
{
    if (nGender == 1)
        return ((72.7 * fHeight) - 58);
    else
        return ((62.1 * fHeight) - 44.7);

}

int main()
{
    float fHeight;
    int nGender;

    printf("----------------------------------------------\n");
    printf("Informe a altura (metros):\t");
    scanf("%f", &fHeight);

    printf("Informe o sexo (1-Masculino, 2-Feminino):\t");
    scanf("%d", &nGender);


    printf("\nSeu peso ideal é:\t %f \n", idealWeight(fHeight, nGender));
    printf("----------------------------------------------\n");

    return 0;
}
