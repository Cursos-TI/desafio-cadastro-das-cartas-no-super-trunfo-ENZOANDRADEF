#include <stdio.h>

int main(){

    char peca;
    int i = 0;

    printf("*** Movimentação de Peças Xadrez***\n\n");
    printf("Escolha qual peça fará o movimento\n\n");
    printf("T. torre\n");
    printf("B. bispo\n");
    printf("R. Rainha\n\n");
    scanf(" %c", &peca);

    switch (peca)
    {
    case 'T':
    case 't':
        for (int i = 0; i < 5; i++)
        {
            printf("Direita\n");
        }
        break;

    case 'B':
    case 'b':
        while (i < 5)
        {
            printf("Cima, Direita\n");
            i++;
        }
        break;

    case 'R':
    case 'r':
        do
        {
            printf("Esquerda\n");
            i++;
        } while (i<8);
        break;
    
    default:
        printf("Peça inválida");
        break;
    }


    return 0;
}