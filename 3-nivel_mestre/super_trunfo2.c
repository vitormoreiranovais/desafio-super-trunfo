#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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
    getchar(); // limpa o buffer

    printf("Digite o Código da Carta:\n");
    scanf("%s", codigo2);

    printf("Digite o Nome da Cidade:\n");
    scanf("%s", cidade2);

    printf("Digite o Número da População:\n");
    scanf("%lu", &populacao2);

    printf("Digite a Área da Cidade:\n");
    scanf("%f", &area2);
    getchar(); // limpa o buffer

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
    int comparacao1, comparacao2, resultado1, resultado2;

    resultado_populacao = populacao > populacao2;
    resultado_area =  area > area2;
    resultado_pib =  pib > pib2;
    resultado_pontos =  pontos > pontos2;
    resultado_densidade =  mediadensidade < mediadensidade2;
    resultado_capital =  mediacapital > mediacapital2;
    resultado_poder =  poder1 > poder2;
   

    printf("\n"); // Espaçamento
    printf("---------------------------------------------\n\n"); // Linha divisória (3)


    // Comparação da primeira Carta

    printf("Escolha o primeiro Atributo para comparar:\n\n");

    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB per Capita\n\n");

    printf("> Digite um número (entre 1 a 6):");
    scanf("%d", &comparacao1);

    printf("\n"); // Espaçamento


    // Lógica da comparação da primeira Carta (1)

    switch (comparacao1)
    {
    case 1:
        printf("População: %lu habitantes - %s\n\n", populacao, resultado_populacao ? "Carta 1 venceu!" : "Carta 2 venceu!");        
        resultado1 = populacao > populacao2 ? 1 : 0;
        break;
        
    case 2:
        printf("Área: %.2f km² - %s\n\n", area, resultado_area ? "Carta 1 venceu!" : "Carta 2 venceu!");
        resultado1 = area > area2 ? 1 : 0;
        break;

    case 3:
        printf("PIB: %.2f bilhões - %s\n\n", pib, resultado_pib ? "Carta 1 venceu!" : "Carta 2 venceu!");
        resultado1 = pib > pib2 ? 1 : 0;
        break;

     case 4:
        printf("Pontos turísticos: %d - %s\n\n", pontos, resultado_pontos ? "Carta 1 venceu!" : "Carta 2 venceu!");
        resultado1 = pontos > pontos2 ? 1 : 0;
        break;           

    case 5:
        printf("Densidade Demográfica %.2f hab/km² - %s\n\n", mediadensidade, resultado_densidade ? "Carta 1 venceu!" : "Carta 2 venceu!");
        resultado1 = mediadensidade < mediadensidade2 ? 1 : 0;
        break;

    case 6:
        printf("PIB per Capita %.2f reais - %s\n\n", mediacapital, resultado_capital ? "Carta 1 venceu!" : "Carta 2 venceu!");
        resultado1 = mediacapital > mediacapital2 ? 1 : 0;
        break;

    default:
        printf("Opção inválida, tente novamente.\n");
        break;
    }


    printf("\n"); // Espaçamento
    printf("-------\n\n"); // Linha divisória (4)


    // Comparação da segunda Carta

    printf("Escolha o segundo Atributo para comparar:\n\n");

    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB per Capita\n\n");

    printf("> Digite um número (entre 1 a 6):");
    scanf("%d", &comparacao2);

    printf("\n"); // Espaçamento


    // Lógica da comparação da segunda Carta (2)

    if (comparacao1 == comparacao2)
    {
        printf("Você escolheu o mesmo atributo, tente novamente.");
    } else {
        
    switch (comparacao2)
    {
    case 1:
       printf("População: %lu habitantes - %s\n\n", populacao, resultado_populacao ? "Carta 1 venceu!" : "Carta 2 venceu!");  
        resultado2 = populacao > populacao2 ? 1 : 0;
        break;
        
    case 2:
        printf("Área: %.2f km² - %s\n\n", area, resultado_area ? "Carta 1 venceu!" : "Carta 2 venceu!");
        resultado2 = area > area2 ? 1 : 0;
        break;

    case 3:
        printf("PIB: %.2f bilhões - %s\n\n", pib, resultado_pib ? "Carta 1 venceu!" : "Carta 2 venceu!");
        resultado2 = pib > pib2 ? 1 : 0;
        break;

     case 4:
        printf("Pontos turísticos: %d - %s\n\n", pontos, resultado_pontos ? "Carta 1 venceu!" : "Carta 2 venceu!");
        resultado2 = pontos > pontos2 ? 1 : 0;
        break;           

    case 5:
        printf("Densidade Demográfica %.2f hab/km² - %s\n\n", mediadensidade, resultado_densidade ? "Carta 1 venceu!" : "Carta 2 venceu!");
        resultado2 = mediadensidade < mediadensidade2 ? 1 : 0;
        break;

    case 6:
        printf("PIB per Capita %.2f reais - %s\n\n", mediacapital, resultado_capital ? "Carta 1 venceu!" : "Carta 2 venceu!");
        resultado2 = mediacapital > mediacapital2 ? 1 : 0;
        break;

    default:
        printf("Opção inválida, tente novamente.\n");
        break;
        }
    }

    
    printf("\n"); // Espaçamento


    // Exibição do vencedor

    int total = resultado1 + resultado2;

    printf("--- Resultado final: ---\n\n");

    if (total == 2) {
        printf("Parabéns, você venceu!\n");
    } else if (total == 1) {
        printf("Empate!\n");
    } else {
        printf("Infelizmente, você perdeu!\n");
    }

    return 0;
}