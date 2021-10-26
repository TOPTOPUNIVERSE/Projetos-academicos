/*
FIAP - Defesa Cibernética

Projeto acadêmico com a finalidade de desenvolver uma simples calculadora em C, que
possa realizar as 4 operações matemáticas de forma básica. */

#include <stdio.h>
//#include <locale.h>
#include <windows.h>

int main()
{
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);
    SetConsoleOutputCP(CPAGE_UTF8);
    //setlocale(LC_ALL, "Portuguese");

    int opcao, n1, n2, soma, sub, multi, div;
    char resp;

    do
    {
        system("cls");
        printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=");
        printf("\n|       CALCULADORA      |");
        printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=");
        printf("\n[1] - Somar\n[2] - Subtrair\n[3] - Multiplicar\n[4] - Dividir\nEscolha uma opção: ");
        scanf("%d", &opcao);
        while (opcao > 4 || opcao < 1)
        {
            system("cls");
            printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=");
            printf("\n|       CALCULADORA      |");
            printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=");
            printf("\nDados Inválidos!");
            printf("\n[1] - Somar\n[2] - Subtrair\n[3] - Multiplicar\n[4] - Dividir\nEscolha uma opção: ");
            scanf("%d", &opcao);
        }

        printf("\nDigite um número: ");
        scanf("%d", &n1);

        while (n1 == 0)
        {
            printf("Não operamos com 0. tente novamente!");
            printf("\nDigite um número: ");
            scanf("%d", &n1);
        }

        printf("Digite outro número: ");
        scanf("%d", &n2);

        while (n2 == 0)
        {
            printf("Não operamos com 0. tente novamente!");
            printf("\nDigite outro número: ");
            scanf("%d", &n2);
        }

        switch (opcao)
        {
        case 1:
            soma = n1 + n2;
            printf("\nA soma entre %d e %d é igual a %d.", n1, n2, soma);
            break;

        case 2:
            if (n1 > n2)
            {
                sub = n1 - n2;
                printf("\nA subtração entre %d e %d é igual a %d.", n1, n2, sub);
            }
            if (n1 < n2)
            {
                sub = n2 - n1;
                printf("\nA subtração entre %d e %d é igual a -%d.", n1, n2, sub);
            }
            if (n1 == n2)
            {
                sub = n1 - n2;
                printf("\nA subtração entre %d e %d é igual a %d", n1, n2, sub);
            }

            break;

        case 3:
            multi = n1 * n2;
            printf("\nA multiplicação: %d x %d é igual a: %d ", n1, n2, multi);
            break;

        case 4:
            div = n1 / n2;
            printf("\n%d dividido por %d é igual a: %d", n1, n2, div);
            break;

        default:
            printf("Opção inválida! tente novamente");
                }
        printf("\n--------------------------");
        printf("\nDeseja continuar? [S/N]: ");
        fflush(stdin);
        resp = getchar();
        resp = toupper(resp);
    } while (resp == 'S');
}
