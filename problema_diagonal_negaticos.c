#include <stdio.h>

int main()
{
    int i, j, n, negativos;

    printf("Qual a ordem da matriz? ");
    scanf("%d", &n);

    int mat[n][n];
    negativos=0;

    for (i=0; i<n; i++)
    {
       for (j=0; j<n; j++)
        {
            printf("Elemento [%d,%d]: ", i, j);
            scanf("%d", &mat[i][j]);
            if (mat[i][j]<0)
            {
                negativos=negativos+1;
            }
        }
    }

    printf("DIAGONAL PRINCIPAL:\n");

    for (i=0; i<n; i++)
    {
       for (j=0; j<n; j++)
        {
            if (i==j)
            {
                printf("%d ", mat[i][j]);
            }
        }
    }

    printf("\nQUANTIDADE DE NEGATIVOS = %d", negativos);
    return 0;
}
