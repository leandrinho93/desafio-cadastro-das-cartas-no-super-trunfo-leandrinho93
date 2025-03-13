#include <stdio.h>

int main() {
    printf("Super Trunfo!\n");

    // Declaração e inicialização das variáveis para a primeira carta
    char estado1 = 'A';
    char codigo1[] = "A01";
    char cidade1[] = "São Paulo";
    int populacao1 = 12325000;
    float area1 = 1521.11;
    float pib1 = 699.28;
    int pontos1 = 50;

    // Declaração e inicialização das variáveis para a segunda carta
    char estado2 = 'B';
    char codigo2[] = "A02";
    char cidade2[] = "Rio de Janeiro";
    int populacao2 = 6748000;
    float area2 = 1200.25;
    float pib2 = 300.50;
    int pontos2 = 30;

    // Exibição dos dados da primeira carta
    printf("\n***** Carta 1 *****\n");
    printf("Estado: %c\n", estado1);
    printf("Código da Carta: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$ %.2f bilhões\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos1);

    // Exibição dos dados da segunda carta
    printf("\n***** Carta 2 *****\n");
    printf("Estado: %c\n", estado2);
    printf("Código da Carta: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f bilhões\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos2);

    return 0;
}