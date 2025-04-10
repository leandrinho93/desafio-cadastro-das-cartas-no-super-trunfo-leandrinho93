#include <stdio.h>

int main()
{
    int opcao;
    printf("Super Trunfo!\n");

    // Declaração e inicialização das variáveis para a primeira carta
    char estado1;
    char codigo1[4];
    char cidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontos1;
    float densidade1;
    double divisaopib1;
    float super_poder1;

    // Solicita os dados para a Carta 1
    printf("\n***** Carta 1 *****\n");
    printf("Digite o Estado (ex: A):\n ");
    scanf(" %c", &estado1); // Espaço antes para limpar o buffer
    printf("Digite o código da carta (ex: A01):\n ");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade (ex: São Paulo):\n ");
    scanf(" %[^\n]", cidade1); // Captura até a nova linha
    printf("Digite a população (ex: 12325000):\n ");
    scanf("%lu", &populacao1);
    printf("Digite a área da cidade (ex: 1521.11):\n ");
    scanf("%f", &area1);
    printf("Digite o PIB da cidade (ex: 699.28):\n ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos (ex: 50):\n ");
    scanf("%d", &pontos1);

    densidade1 = (float)populacao1 / area1;
    divisaopib1 = (pib1 * 1e9) / populacao1; // Convertendo PIB de bilhões para milhões
    super_poder1 = (float)populacao1 + area1 + pib1 + pontos1 + (1 / densidade1) + divisaopib1;

    // Declaração e inicialização das variáveis para a segunda carta
    char estado2;
    char codigo2[4];
    char cidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontos2;
    float densidade2;
    double divisaopib2;
    float super_poder2;

    // Solicita os dados para a Carta 2
    printf("\n***** Carta 2 *****\n");
    printf("Digite o Estado (ex: B):\n ");
    scanf(" %c", &estado2); // Espaço antes para limpar o buffer
    printf("Digite o código da carta (ex: B02):\n ");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade(ex: Rio de Janeiro):\n ");
    scanf(" %[^\n]", cidade2); // Captura até a nova linha
    printf("Digite a população (ex: 6748000):\n ");
    scanf("%lu", &populacao2);
    printf("Digite a área da cidade (ex:1200.25):\n ");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade (ex: 300.50):\n ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos (ex: 30):\n ");
    scanf("%d", &pontos2);

    densidade2 = (float)populacao2 / area2;
    divisaopib2 = (pib2 * 1e9) / populacao2; // Convertendo PIB de bilhões para milhões
    super_poder2 = (float)populacao2 + area2 + pib2 + pontos2 + (1 / densidade2) + divisaopib2;

    // Comparação automática de um atributo escolhido no código
    printf("\n***** Comparação *****\n");

    switch (opcao)
    {
    case 1:
        printf("Atributo: População\n");
        printf("%s: %lu habitantes\n", cidade1, populacao1);
        printf("%s: %lu habitantes\n", cidade2, populacao2);
        if (populacao1 > populacao2)
            printf("Resultado: %s venceu!\n", cidade1);
        else if (populacao2 > populacao1)
            printf("Resultado: %s venceu!\n", cidade2);
        else
            printf("Empate!\n");
        break;

    case 2:
        printf("Atributo: Área\n");
        printf("%s: %.2f km²\n", cidade1, area1);
        printf("%s: %.2f km²\n", cidade2, area2);
        if (area1 > area2)
            printf("Resultado: %s venceu!\n", cidade1);
        else if (area2 > area1)
            printf("Resultado: %s venceu!\n", cidade2);
        else
            printf("Empate!\n");
        break;

    case 3:
        printf("Atributo: PIB\n");
        printf("%s: R$ %.2f bilhões\n", cidade1, pib1);
        printf("%s: R$ %.2f bilhões\n", cidade2, pib2);
        if (pib1 > pib2)
            printf("Resultado: %s venceu!\n", cidade1);
        else if (pib2 > pib1)
            printf("Resultado: %s venceu!\n", cidade2);
        else
            printf("Empate!\n");
        break;

    case 4:
        printf("Atributo: Pontos Turísticos\n");
        printf("%s: %d pontos\n", cidade1, pontos1);
        printf("%s: %d pontos\n", cidade2, pontos2);
        if (pontos1 > pontos2)
            printf("Resultado: %s venceu!\n", cidade1);
        else if (pontos2 > pontos1)
            printf("Resultado: %s venceu!\n", cidade2);
        else
            printf("Empate!\n");
        break;

    case 5:
        printf("Atributo: Densidade Demográfica\n");
        printf("%s: %.2f hab/km²\n", cidade1, densidade1);
        printf("%s: %.2f hab/km²\n", cidade2, densidade2);
        if (densidade1 < densidade2)
            printf("Resultado: %s venceu!\n", cidade1);
        else if (densidade2 < densidade1)
            printf("Resultado: %s venceu!\n", cidade2);
        else
            printf("Empate!\n");
        break;

    case 6:
        printf("Atributo: PIB per capita\n");
        printf("%s: R$ %.2f\n", cidade1, divisaopib1);
        printf("%s: R$ %.2f\n", cidade2, divisaopib2);
        if (divisaopib1 > divisaopib2)
            printf("Resultado: %s venceu!\n", cidade1);
        else if (divisaopib2 > divisaopib1)
            printf("Resultado: %s venceu!\n", cidade2);
        else
            printf("Empate!\n");
        break;

    default:
        printf("Opção inválida! Por favor, selecione um número entre 1 e 6.\n");
    }

    return 0;
}
