#include <stdio.h>

int main() {
   
    // Variáveis das duas cartas

    char estado1, estado2;
    char codigo1[5], codigo2[5];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    int pontoturistico1, pontoturistico2;
    float area1, area2;
    float pib1, pib2;
    float densidadepopulacional1, densidadepopulacional2;
    float pibpercapita1, pibpercapita2;

    //  Leitura e exibição dos dados da carta 1

    printf("Inserir os dados da Carta 1 \n");
    printf("Estado: ");
    scanf(" %c", &estado1);

    printf("Código: ");
    scanf("%s", codigo1);

    printf("Cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("População: ");
    scanf("%d", &populacao1);

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
    scanf("%d", &populacao2);

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

    // Exibição da cartas 1

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Quantidade de ponto turístico: %d\n", pontoturistico1);
    printf("Densidade populacional: %.4f hab/km²\n", densidadepopulacional1);
    printf("PIB per cápita: %.4f reais\n", pibpercapita1);
    
       // Exibição da cartas 2

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Quantidade de ponto turístico: %d\n", pontoturistico2);
    printf("Densidade populacional: %.4f hab/km²\n", densidadepopulacional2);
    printf("PIB per cápita: %.4f reais\n", pibpercapita2);

    return 0;

}
