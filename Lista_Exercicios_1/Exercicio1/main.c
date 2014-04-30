#include <stdio.h>
#include <stdlib.h>

int isMultiple(int nValueA, int nValueB)
{
    if ((nValueA % nValueB) == 0)
        return 1;
    else
        return 0;
}

int main()
{
    int nValueA;
    int nValueB;

    printf("----------------------------------------------\n");
    printf("Informe o primeiro número (A):\t");
    scanf("%d", &nValueA);

    printf("Informe o primeiro número (B):\t");
    scanf("%d", &nValueB);

    if (isMultiple(nValueA, nValueB))
        printf("\nA é multiplo de B\n");
    else
        printf("\nA não é multiplo de B\n");

    printf("----------------------------------------------\n");

    return 0;
}
