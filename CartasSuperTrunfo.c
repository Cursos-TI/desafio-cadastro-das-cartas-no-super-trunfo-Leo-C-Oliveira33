#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Declaração das variáveis da Carta 1
    char estado1;
    char codigo1[4];          
    char nomeCidade1[50];
    int  populacao1;
    float area1;
    float pib1;
    int   pontosTuristicos1;

    // Declaração das variáveis da Carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    int  populacao2;
    float area2;
    float pib2;
    int   pontosTuristicos2;

    // Leitura dos dados da Carta 1
    printf("Carta 1:\n");

    printf("Informe o Estado (A a H): ");
    scanf(" %c", &estado1);

    printf("Informe o Codigo da Carta (ex: A01): ");
    scanf(" %3s", codigo1);

    printf("Informe o Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1);

    printf("Informe a Populacao: ");
    scanf("%d", &populacao1);

    printf("Informe a Area (km²): ");
    scanf("%f", &area1);

    printf("Informe o PIB: ");
    scanf("%f", &pib1);

    printf("Informe o Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // Leitura dos dados da Carta 2
    printf("\nCarta 2:\n");

    printf("Informe o Estado (A a H): ");
    scanf(" %c", &estado2);

    printf("Informe o Codigo da Carta (ex: B02): ");
    scanf(" %3s", codigo2);

    printf("Informe o Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("Informe a Populacao: ");
    scanf("%d", &populacao2);

    printf("Informe a Area (km²): ");
    scanf("%f", &area2);

    printf("Informe o PIB: ");
    scanf("%f", &pib2);

    printf("Informe o Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // Exibição dos dados da Carta 1
    printf("\n--- Informacoes da Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);

    // Exibição dos dados da Carta 2
    printf("\n--- Informacoes da Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);

    return 0;
}
