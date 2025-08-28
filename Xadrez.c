#include <stdio.h>

int main(){

    char peca;
    int i = 0;

    printf("*** Movimentação de Peças Xadrez***\n\n");
    printf("Escolha qual peça fará o movimento\n\n");
    printf("T. torre\n");
    printf("B. bispo\n");
    printf("R. Rainha\n");
    printf("C. Cavalo\n\n");
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
    case 'C':
    case 'c':
        int movimentoCompleto = 1; // Controla quantas vezes o cavalo realiza o movimento "2 cima + 1 direita"

        while (movimentoCompleto--) // Loop externo: controla o número de movimentos completos do cavalo
        {
            for (i = 0; i < 2; i++)  // Loop interno: faz o cavalo se mover 2 casas para cima
            {
                printf("Cima\n");
            }
            printf("Direita\n");  // Após subir 2 casas, o cavalo se move 1 casa para a direita
        }
        break;
    
    default:
        printf("Peça inválida");
        break;
    }


    return 0;
}