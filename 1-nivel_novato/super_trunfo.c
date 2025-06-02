#include <stdio.h>

int main() {
    
    // -- Variáveis da Carta número um (1) -- //

    char estado, codigo[4], cidade[25];
    int populacao, pontos;
    float area, pib;


    // -- Variáveis da Carta número dois (2) -- // 

    char estado2, codigo2[4], cidade2[25];
    int populacao2, pontos2;
    float area2, pib2;


    // -- Carta número um (1) -- //
    
    printf("Carta 1: \n\n");

    // -- Entrada de dados (1) -- //

    printf("Digite a Letra do Estado:\n");
    scanf(" %c", &estado);

    printf("Digite o Código da Carta:\n");
    scanf("%s", codigo);

    printf("Digite o Nome da Cidade:\n");
    scanf("%s", cidade);

    printf("Digite o Número da População:\n");
    scanf("%d", &populacao);

    printf("Digite a Área da Cidade:\n");
    scanf("%f", &area);

    printf("Digite o PIB da Cidade:\n");
    scanf("%f", &pib);

    printf("Digite o Número de Pontos Turísticos:\n");
    scanf("%d", &pontos);


    printf("\n\n"); // Espaçamento


    // -- Saída de dados (1) -- //
   
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("População: %d habitantes\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Pontos Turísticos: %d\n", pontos);


    printf("\n\n"); // Espaçamento entre as cartas


    // -- Carta número dois (2) -- //

    printf("Carta 2: \n\n");

    // -- Entrada de dados (2) -- //

    printf("Digite a Letra do Estado:\n");
    scanf(" %c", &estado2);

    printf("Digite o Código da Carta:\n");
    scanf("%s", codigo2);

    printf("Digite o Nome da Cidade:\n");
    scanf("%s", cidade2);

    printf("Digite o Número da População:\n");
    scanf("%d", &populacao2);

    printf("Digite a Área da Cidade:\n");
    scanf("%f", &area2);

    printf("Digite o PIB da Cidade:\n");
    scanf("%f", &pib2);

    printf("Digite o Número de Pontos Turísticos:\n");
    scanf("%d", &pontos2);


    printf("\n\n"); // Espaçamento


    // -- Saída de dados (2) -- //
    
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos2);

    return 0;
}