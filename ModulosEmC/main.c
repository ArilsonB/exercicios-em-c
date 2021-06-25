#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float Nota1;

int Square(int n)
{
    return (n * n);
}

float CalcularMedia(int x, int y, int z)
{
    float m;
    int soma;

    soma = x + y + z;
    m = (float)soma / 3;
    return m;
}

float main()
{
    setlocale(LC_ALL, "");

    int n1, n2, opcao;
    int v1, v2, v3;
    float media;

    printf("1 - Calcular Quadrado\n");
    printf("2 - Calcular Média\n");

    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    switch(opcao){
        case 1:
            printf("Entre com um número: ");
            scanf("%d", &n1);

            n2 = Square(n1);

            printf("O seu quadrado vale: %d\n", n2);
            break;
        case 2:
            printf("Entre com os valores: ");
            scanf("%d %d %d", &v1, &v2, &v3);

            media = CalcularMedia(v1, v2, v3);

            printf("A média é -> %.2f", media);
            break;
    }

    return 0;
}


