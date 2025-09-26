#include <stdio.h>

#include <stdio.h>

int main() {
    // Declaração das variáveis da Carta 1
    char estado_1;
    char cod_estado_1[4];
    char nome_cidade_1[50];
    int populacao_1;
    float area_1;
    float pib_1;
    int pontos_turiticos_1;
    float densidade_populacional_1;
    float pib_per_capita_1;
    
    // Declaração das variáveis da Carta 2
    char estado_2;
    char cod_estado_2[4];
    char nome_cidade_2[50];
    int populacao_2;
    float area_2;
    float pib_2;
    int pontos_turiticos_2;
    float densidade_populacional_2;
    float pib_per_capita_2;

    // Leitura dos dados da Carta 1
    printf("Digite o estado da Carta 1:\n");
    scanf(" %c", &estado_1);

    printf("Digite o codigo do estado em numero de 01 a 04 (ex: A01):\n");
    scanf(" %s", cod_estado_1);

    printf("Digite o nome da cidade:\n");
    scanf(" %[^\n]", nome_cidade_1);

    printf("Digite a populacao:\n");
    scanf(" %d", &populacao_1);

    printf("Digite a area (em km²):\n");
    scanf("%f", &area_1);

    printf("Digite o PIB (em bilhoes):\n");
    scanf("%f", &pib_1);

    printf("Digite os pontos turisticos (em numero):\n");
    scanf("%d", &pontos_turiticos_1);

    // Cálculos da Carta 1
    densidade_populacional_1 = populacao_1 / area_1;
    pib_per_capita_1 = (pib_1 * 1000000000) / populacao_1;

    // Leitura dos dados da Carta 2
    printf("\nDigite o estado da Carta 2:\n");
    scanf(" %c", &estado_2);

    printf("Digite o codigo do estado em numero de 01 a 04 (ex: B01):\n");
    scanf("%s", cod_estado_2);

    printf("Digite o nome da cidade:\n");
    scanf(" %[^\n]", nome_cidade_2);

    printf("Digite a populacao:\n");
    scanf("%d", &populacao_2);

    printf("Digite a area (em km²):\n");
    scanf("%f", &area_2);

    printf("Digite o PIB (em bilhoes):\n");
    scanf("%f", &pib_2);

    printf("Digite os pontos turisticos (em numero):\n");
    scanf("%d", &pontos_turiticos_2);

    // Cálculos da Carta 2
    densidade_populacional_2 = populacao_2 / area_2;
    pib_per_capita_2 = (pib_2 * 1000000000) / populacao_2;

    // Exibição dos dados da Carta 1
    printf("\n===== Dados da Carta 1 =====\n");
    printf("Estado: %c\n", estado_1);
    printf("Codigo do Estado: %s\n", cod_estado_1);
    printf("Nome da Cidade: %s\n", nome_cidade_1);
    printf("Populacao: %d\n", populacao_1);
    printf("Area: %.2f km²\n", area_1);
    printf("PIB: %.2f bilhoes\n", pib_1);
    printf("Pontos Turisticos: %d\n", pontos_turiticos_1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional_1);
    printf("PIB per capita: %.2f reais\n", pib_per_capita_1);

    // Exibição dos dados da Carta 2
    printf("\n===== Dados da Carta 2 =====\n");
    printf("Estado: %c\n", estado_2);
    printf("Codigo do Estado: %s\n", cod_estado_2);
    printf("Nome da Cidade: %s\n", nome_cidade_2);
    printf("Populacao: %d\n", populacao_2);
    printf("Area: %.2f km²\n", area_2);
    printf("PIB: %.2f bilhoes\n", pib_2);
    printf("Pontos Turisticos: %d\n", pontos_turiticos_2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional_2);
    printf("PIB per capita: %.2f reais\n", pib_per_capita_2);

    return 0;
}
