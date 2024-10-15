#include <stdio.h>

int main()
{
    int i, n, quantidade, pessoa;
    double soma, media, porcentagem;
    printf("Quantas pessoas serao digitadas? ");
    scanf("%d", &n);

    int idade[n];
    double altura[n];
    char nome[n][50];

    soma=0;
    quantidade=0;
    pessoa=0;
    for (i=0; i<n; i++)
    {
        printf("Dados da %da pessoa:", i+1);
        printf("\nNome: ");
        fseek(stdin, 0, SEEK_END);
        gets(nome[i]);
        printf("Idade: ");
        scanf("%d", &idade[i]);
        printf("Altura: ");
        scanf("%lf", &altura[i]);
        soma=soma+altura[i];
        quantidade=quantidade+1;
        if (idade[i]<16)
        {
            pessoa=pessoa+1;
        }
    }
    media=soma/quantidade;
    printf("\nAltura media: %.2lf", media);
    porcentagem=(100/n)*pessoa;
    printf("\nPessoas com menos de 16 anos: %.1lf%%\n", porcentagem);
    for (i=0; i<n; i++)
    {
        if (idade[i]<16)
        {
            printf("%s\n", nome[i]);
        }
    }

    return 0;
}

