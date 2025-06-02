#include <stdio.h>

int main() {
    
    // -- Variáveis da Carta número um (1) -- //

    char estado, codigo[4], cidade[25];
    unsigned long int populacao;
    int pontos;
    float area, pib;
    float mediadensidade, mediacapital;


    // -- Variáveis da Carta número dois (2) -- //

    char estado2, codigo2[4], cidade2[25];
    unsigned long int populacao2; 
    int pontos2;
    float area2, pib2;
    float mediadensidade2, mediacapital2;


    // -- Carta número um (1) -- //

    printf("\n\n"); // Espaçamento

    printf("----- Informe os dados da Carta 1: -----\n\n");

    printf("Carta 1: \n\n");


    // -- Entrada de dados (1) -- //

    printf("Digite a Letra do Estado:\n");
    scanf(" %c", &estado);
    getchar(); // limpa o buffer

    printf("Digite o Código da Carta:\n");
    scanf("%s", codigo);

    printf("Digite o Nome da Cidade:\n");
    scanf("%s", cidade);

    printf("Digite o Número da População:\n");
    scanf("%lu", &populacao);
    getchar(); // limpa o buffer


    printf("Digite a Área da Cidade:\n");
    scanf("%f", &area);

    printf("Digite o PIB da Cidade (em bilhões de reais):\n");
    scanf("%f", &pib);

    printf("Digite o Número de Pontos Turísticos:\n");
    scanf("%d", &pontos);


    printf("\n"); // Espaçamento
    printf("---------------------------------------------\n"); // Linha divisória (1)

    // -- Cálculos após entrada de dados (1) -- //

    mediadensidade = populacao / area;
    mediacapital = (pib * 1e9) / populacao; // Convertendo PIB para reais


    printf("\n\n"); // Espaçamento


    // -- Saída de dados (1) -- //

    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("População: %lu habitantes\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Pontos Turísticos: %d\n", pontos);
    printf("Densidade Populacional: %.2f hab/km²\n", mediadensidade);
    printf("PIB per Capita: %.2f reais\n", mediacapital);


    printf("\n\n"); // Espaçamento entre as cartas


    // -- Carta número dois (2) -- //

    printf("----- Informe os dados da Carta 2: -----\n\n");

    printf("Carta 2: \n\n");


    // -- Entrada de dados (2) -- //

    printf("Digite a Letra do Estado:\n");
    scanf(" %c", &estado2);

    printf("Digite o Código da Carta:\n");
    scanf("%s", codigo2);

    printf("Digite o Nome da Cidade:\n");
    scanf("%s", cidade2);

    printf("Digite o Número da População:\n");
    scanf("%lu", &populacao2);

    printf("Digite a Área da Cidade:\n");
    scanf("%f", &area2);

    printf("Digite o PIB da Cidade (em bilhões de reais):\n");
    scanf("%f", &pib2);

    printf("Digite o Número de Pontos Turísticos:\n");
    scanf("%d", &pontos2);

    printf("\n"); // Espaçamento
    printf("---------------------------------------------\n"); // Linha divisória (2)

    // -- Cálculos após entrada de dados (2) -- //

    mediadensidade2 = populacao2 / area2;
    mediacapital2 = (pib2 * 1e9) / populacao2;


    printf("\n\n"); // Espaçamento


    // -- Saída de dados (2) -- //
    
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %lu habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n", mediadensidade2);
    printf("PIB per Capita: %.2f reais\n", mediacapital2);
    

    // -- Comparação entre as cartas -- //

    float poder1 = (populacao + area + pib + pontos + mediacapital + mediadensidade);
    float poder2 = (populacao2 + area2 + pib2 + pontos2 + mediacapital2 + mediadensidade2);
    int resultado_populacao, resultado_area, resultado_pib, resultado_pontos, resultado_densidade, resultado_capital, resultado_poder;

    resultado_populacao = populacao > populacao2;
    resultado_area =  area > area2;
    resultado_pib =  pib > pib2;
    resultado_pontos =  pontos > pontos2;
    resultado_densidade =  mediadensidade < mediadensidade2;
    resultado_capital =  mediacapital > mediacapital2;
    resultado_poder =  poder1 > poder2;
   

    printf("\n\n"); // Espaçamento


    // -- Exibição do vencedor -- //

    printf("----- O Grande Vencedor é: Carta %d !!! -----\n\n", resultado_poder ? 1 : 2);

    printf("População: Carta %d venceu (%d)\n", resultado_populacao ? 1 : 2, resultado_populacao);

    printf("Área: Carta %d venceu (%d)\n", resultado_area ? 1 : 2, resultado_area);

    printf("PIB: Carta %d venceu (%d)\n", resultado_pib ? 1 : 2, resultado_pib);

    printf("Pontos Turísticos: Carta %d venceu (%d)\n", resultado_pontos ? 1 : 2, resultado_pontos);

    printf("Densidade Populacional: Carta %d venceu (%d)\n", resultado_densidade ? 1 : 2, resultado_densidade);

    printf("PIB per Capita: Carta %d venceu (%d)\n", resultado_capital ? 1 : 2, resultado_capital);

    printf("Super Poder: Carta %d venceu (%d)\n", resultado_poder ? 1 : 2, resultado_poder);

    return 0;
}