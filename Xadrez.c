#include <stdio.h>

void moverTorre(int casas){
    if(casas > 0){
        printf("Direita\n");
        moverTorre(casas - 1);
    }
}
void moverBispo(int casas){
    if(casas > 0){
        printf("Cima, Direita\n");
        moverBispo(casas - 1);
    }
}
void moverRainha(int casas){
    if(casas > 0){
        printf("Esquerda\n");
        moverRainha(casas - 1);
    }
}


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
            moverTorre(5);
        break;

    case 'B':
    case 'b':
            moverBispo(5);
        break;

    case 'R':
    case 'r':
            moverRainha(8);
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