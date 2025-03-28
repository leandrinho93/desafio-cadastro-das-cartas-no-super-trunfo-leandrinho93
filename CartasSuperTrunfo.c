#include <stdio.h>

int main()
{
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

    // Exibição dos dados da primeira carta
    printf("\n***** Carta 1 *****\n");
    printf("Estado: %c\n", estado1);
    printf("Código da Carta: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$ %.2f bilhões\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos1);
    printf("Densidade populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita R$: %.2f\n", divisaopib1);

    // Exibição dos dados da segunda carta
    printf("\n***** Carta 2 *****\n");
    printf("Estado: %c\n", estado2);
    printf("Código da Carta: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f bilhões\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita R$: %.2f\n", divisaopib2);

    // Comparação automática de um atributo escolhido no código
    printf("\n***** Comparação *****\n");

    if (populacao1 >=populacao2) {
        //bloco de codigo a ser executado se a condição for verdadeira.
        printf("\nPopulação: Carta 1 venceu!\n");
    }
    else {
        printf("\nPopulação: Carta 1 perdeu!\n");
    }


    if (area1 >=area2) {
        //bloco de codigo a ser executado se a condição for verdadeira.
        printf("\nÁrea: Carta 1 venceu!\n");
    }
    else {
        printf("\nÁrea: Carta 1 perdeu!\n");
    }


    if (pib1 >=pib2) {
        //bloco de codigo a ser executado se a condição for verdadeira.
        printf("\nPib: Carta 1 Venceu!\n");
    }
    else {
        printf("\nPib: Carta 1 Perdeu!\n");
    }


    if (pontos1 >=pontos2) {
        //bloco de codigo a ser executado se a condição for verdadeira.
        printf("\nPontos Turísticos: Carta 1 Venceu!\n");
    }
    else {
        printf("\nPontos Turísticos: Carta 1 Perdeu!\n");
    }


    if (densidade1 >=densidade2) {
        //bloco de codigo a ser executado se a condição for verdadeira.
        printf("\nDensidade Populacional: Carta 1 Venceu!\n");
    }
    else {
        printf("\nDensidade Populacional: Carta 1 Perdeu!\n");
    }


    if (divisaopib1 >=divisaopib2) {
        //bloco de codigo a ser executado se a condição for verdadeira.
        printf("\nPib per Capta: Carta 1 Venceu!\n");
    }
    else {
        printf("\nPib per Capta: Carta 1 Perdeu!\n");
    }



    
   

    return 0;
}
