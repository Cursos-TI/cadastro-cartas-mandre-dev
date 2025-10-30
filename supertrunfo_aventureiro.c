#include <stdio.h>

int main()
{
    // Declaração das variáveis para carta 1
    char carta1_estado;
    char carta1_code[4];
    char carta1_nome[50];
    int carta1_populacao;
    float carta1_area_km2;
    float carta1_pib;
    int carta1_pontos_turisticos;

    // Declaração das variáveis para carta 2
    char carta2_estado;
    char carta2_code[4];
    char carta2_nome[50];
    int carta2_populacao;
    float carta2_area_km2;
    float carta2_pib;
    int carta2_pontos_turisticos;

    // Declaração das variáveis para os cálculos
    float densidade_pop1;
    float pib_per_capita1;
    float densidade_pop2;
    float pib_per_capita2;

    printf("\n");
    printf("[ Seja bem-vindo ao Super Trunfo nível Novato! ]\n");
    printf("\nAbaixo digite os dados correspondentes\n");

    printf("\n--- DADOS DA CARTA 1 ---\n");

    // Estado (char)
    printf("Estado (A-H): ");
    scanf(" %c", &carta1_estado);

    // Código da Carta (string)
    printf("Código da Carta (Ex: A01): ");
    scanf(" %3s", carta1_code);

    // Nome da Cidade (string com espaços)
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", carta1_nome);

    // População (int)
    printf("População: ");
    scanf("%d", &carta1_populacao);

    // Área (float)
    printf("Área em km²: ");
    scanf("%f", &carta1_area_km2);

    // PIB (float)
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &carta1_pib);

    // Número de Pontos Turísticos (int)
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &carta1_pontos_turisticos);

    printf("\n--- DADOS DA CARTA 2 ---\n");

    // Estado (char)
    printf("Estado (A-H): ");
    scanf(" %c", &carta2_estado);

    // Código da Carta (string)
    printf("Código da Carta (Ex: B02): ");
    scanf(" %3s", carta2_code);

    // Nome da Cidade (string com espaços)
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", carta2_nome);

    // População (int)
    printf("População: ");
    scanf("%d", &carta2_populacao);

    // Área (float)
    printf("Área em km²: ");
    scanf("%f", &carta2_area_km2);

    // PIB (float)
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &carta2_pib);

    // Número de Pontos Turísticos (int)
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &carta2_pontos_turisticos);

    // Cálculo da densidade populacional e PIB per capita para carta 1
    densidade_pop1 = (float)carta1_populacao / carta1_area_km2;
    pib_per_capita1 = carta1_pib / (float)carta1_populacao;

    // Cálculo da densidade populacional e PIB per capita para carta 2
    densidade_pop2 = (float)carta2_populacao / carta2_area_km2;
    pib_per_capita2 = carta2_pib / (float)carta2_populacao;

    // Exibição da Carta 1
    printf("\n\n========== EXIBIÇÃO DAS CARTAS ==========\n");
    printf("\n--- CARTA 1 ---\n");
    printf("Estado: %c\n", carta1_estado);
    printf("Código: %s\n", carta1_code);
    printf("Cidade: %s\n", carta1_nome);
    printf("População: %d habitantes\n", carta1_populacao);
    printf("Área: %.2f km²\n", carta1_area_km2);
    printf("PIB: %.2f bilhões de reais\n", carta1_pib);
    printf("Pontos Turísticos: %d\n", carta1_pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_pop1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);

    // Exibição da Carta 2
    printf("\n--- CARTA 2 ---\n");
    printf("Estado: %c\n", carta2_estado);
    printf("Código: %s\n", carta2_code);
    printf("Cidade: %s\n", carta2_nome);
    printf("População: %d habitantes\n", carta2_populacao);
    printf("Área: %.2f km²\n", carta2_area_km2);
    printf("PIB: %.2f bilhões de reais\n", carta2_pib);
    printf("Pontos Turísticos: %d\n", carta2_pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_pop2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);

    return 0;
}
