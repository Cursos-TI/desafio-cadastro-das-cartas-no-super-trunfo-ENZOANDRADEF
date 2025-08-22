#include <stdio.h>

int main() {
   
    // Variáveis das duas cartas

    char estado1, estado2;
    char codigo1[5], codigo2[5];
    char cidade1[50], cidade2[50];
    unsigned long int populacao1, populacao2;
    int pontoturistico1, pontoturistico2;
    float area1, area2;
    float pib1, pib2;
    float densidadepopulacional1, densidadepopulacional2;
    float pibpercapita1, pibpercapita2;
    float superpoder1, superpoder2;
    int opcao;

    //  Leitura e exibição dos dados da carta 1

    printf("Inserir os dados da Carta 1 \n");
    printf("Estado: ");
    scanf(" %c", &estado1);

    printf("Código: ");
    scanf("%s", codigo1);

    printf("Cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("População: ");
    scanf("%lu", &populacao1);

    printf("Ponto turístico: ");
    scanf("%d", &pontoturistico1);

    printf("Área: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

     //  Leitura e exibição dos dados da carta 2

    printf("Inserir os dados da Carta 2 \n");
    printf("Estado: ");
    scanf(" %c", &estado2);

    printf("Código: ");
    scanf("%s", codigo2);

    printf("Cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("População: ");
    scanf("%lu", &populacao2);

    printf("Ponto turístico: ");
    scanf("%d", &pontoturistico2);

    printf("Área: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    // Cálculo densidade populacional e pib per cápita da carta 1
    densidadepopulacional1 = populacao1 / area1;
    pibpercapita1 = (float) (pib1 * 1000000000.0f) / populacao1;

    // Cálculo densidade populacional e pib per cápita da carta 2
    densidadepopulacional2 = populacao2 / area2;
    pibpercapita2 = (float) (pib2 * 1000000000.0f) / populacao2;

    // Cálculo super poder da carta 1
    superpoder1 = (float)populacao1 + area1 + pib1 + pontoturistico1 + pibpercapita1 + (1 / densidadepopulacional1);

    // Cálculo super poder da carta 2
    superpoder2 = (float)populacao2 + area2 + pib2 + pontoturistico2 + pibpercapita2 + (1 / densidadepopulacional2);


    //Menu interativo

    printf("=== Menu de Comparacao ===\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("Você escolheu População\n");
        if ( populacao1 > populacao2)
        {
            printf("Carta 1 venceu");
        }
        else if ( populacao2 > populacao1)
        {
            printf("Carta 2 venceu");
        }
        else 
        {
            printf("Empate");
        }
        break;


    case 2:
        printf("Você escolheu Área\n");
        if ( area1 > area2)
        {
            printf("Carta 1 venceu");
        }
        else if ( area2 > area1)
        {
            printf("Carta 2 venceu");
        }
        else 
        {
            printf("Empate");
        }
        break;


    case 3:
        printf("Você escolheu PIB\n");
        if ( pib1 > pib2)
        {
            printf("Carta 1 venceu");
        }
        else if ( pib2 > pib1)
        {
            printf("Carta 2 venceu");
        }
        else 
        {
            printf("Empate");
        }
        break;


    case 4:
        printf("Você escolheu Pontos Turisticos\n");
        if ( pontoturistico1 > pontoturistico2)
        {
            printf("Carta 1 venceu");
        }
        else if ( pontoturistico2 > pontoturistico1)
        {
            printf("Carta 2 venceu");
        }
        else 
        {
            printf("Empate");
        }
        break;


    case 5:
        printf("Você escolheu Densidade demográfica\n");
        if ( densidadepopulacional2 > densidadepopulacional1)
        {
            printf("Carta 1 venceu");
        }
        else if ( densidadepopulacional1 > densidadepopulacional2)
        {
            printf("Carta 2 venceu");
        }
        else 
        {
            printf("Empate");
        }
        break;    
    
    default:
        printf("Opção inválida\n");
        break;
    }

    // Exibição da cartas 1

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Quantidade de ponto turístico: %d\n", pontoturistico1);
    printf("Densidade populacional: %.4f hab/km²\n", densidadepopulacional1);
    printf("PIB per cápita: %.4f reais\n", pibpercapita1);
    printf("O super poder da carta 1 é: %.2f\n", superpoder1);
    
    // Exibição da cartas 2

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Quantidade de ponto turístico: %d\n", pontoturistico2);
    printf("Densidade populacional: %.4f hab/km²\n", densidadepopulacional2);
    printf("PIB per cápita: %.4f reais\n", pibpercapita2);
    printf("O super poder da carta 2 é: %.2f\n", superpoder2);

    return 0;

}
