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
    
    // Declaração das variáveis da Carta 2
    char estado_2;
    char cod_estado_2[4];
    char nome_cidade_2[50];
    int populacao_2;
    float area_2;
    float pib_2;
    int pontos_turiticos_2;

    // Leitura dos dados da Carta 1
    printf("Digite o estado da Carta 1:\n");
    scanf(" %c", &estado_1);

    printf("Digite o codigo do estado em numero de 01 a 04 (ex: A01): ");
    scanf("%s", cod_estado_1);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome_cidade_1);

    printf("Digite a populacao: ");
    scanf("%d", &populacao_1);

    printf("Digite a area (em km2): ");
    scanf("%f", &area_1);

    printf("Digite o PIB (em bilhoes): ");
    scanf("%f", &pib_1);

    printf("Digite os pontos turisticos (em numero): ");
    scanf("%d", &pontos_turiticos_1);
   
    // Leitura dos dados da Carta 2
    printf("\nDigite os estado da Carta 2:\n");
    scanf(" %c", &estado_2);

    printf("Digite o codigo do estado em numero de 01 a 04 (ex: B01): ");
    scanf("%s", cod_estado_2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome_cidade_2);

    printf("Digite a populacao: ");
    scanf("%d", &populacao_2);

    printf("Digite a area (em km2): ");
    scanf("%f", &area_2);

    printf("Digite o PIB (em bilhoes): ");
    scanf("%f", &pib_2);

    printf("Digite os pontos turisticos (em numero): ");
    scanf("%d", &pontos_turiticos_2);

    // Exibição dos dados da Carta 1
   printf("\nDados da Carta 1:\n");
    printf("Estado: %c\n", estado_1);
    printf("Codigo do Estado: %s\n", cod_estado_1);
    printf("Nome da Cidade: %s\n", nome_cidade_1);
    printf("Populacao: %d\n", populacao_1);
    printf("Area (em km²): %.2f\n", area_1);
    printf("PIB (em bilhoes): %.2f\n", pib_1);
    printf("Pontos Turisticos: %d\n", pontos_turiticos_1);

    // Exibição dos dados da Carta 2
    printf("\nDados da Carta 2:\n");
    printf("Estado: %c\n", estado_2);
    printf("Codigo do Estado: %s\n", cod_estado_2);
    printf("Nome da Cidade: %s\n", nome_cidade_2);
    printf("Populacao: %d\n", populacao_2);
    printf("Area (em km2): %.2f\n", area_2);
    printf("PIB (em bilhoes): %.2f\n", pib_2);
    printf("Pontos Turisticos: %d\n", pontos_turiticos_2);
  

    return 0;
}
