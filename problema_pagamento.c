#include <stdio.h>

int main()
{
    char nome[50];
    double valor, pagamento;
    int horas;

    printf("Nome: ");
    gets(nome);
    printf("Valor por hora: ");
    scanf("%lf", &valor);
    printf("Horas trabalhadas: ");
    scanf("%d", &horas);
    pagamento=(double) valor*horas;
    printf("O pagamento para %s deve ser %.2lf", nome, pagamento);
    return 0;
}
