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

    printf("\n");
    printf("[ Seja bem-vindo ao Super Trunfo nível Novato! ]\n");
    printf("\n");
    printf("Abaixo digite os dados correspondentes");
    printf("\n");
    printf("\n--- DADOS DA CARTA 1 ---\n");

    //Estado (char)
    printf("Estado (A-H): ");
    scanf(" %c", &carta1_estado);

    //Código da Carta (string)
    printf("Código da Carta (Ex: A01): ");
    scanf(" %3s", &carta1_code);

    // Nome da Cidade (string)
    printf("Nome da Cidade: ");
    // %49[^\n] lê até 49 caracteres, incluindo espaços, até o Enter
    scanf(" %s", &carta1_nome);

    // População (int)
    printf("População: ");
    scanf("%d", &carta1_populacao);

    // Area (float)
    printf("Area em km2: ");
    scanf("%f", &carta1_area_km2);

    // PIB (float)
    printf("PIB: ");
    scanf("%f", &carta1_pib);

    // Número de Pontos Turísticos (int)
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &carta1_pontos_turisticos);

    printf("\n--- DADOS DA CARTA 2 ---\n");

    //Estado (char)
    printf("Estado (A-H): ");
    scanf(" %c", &carta2_estado);

    //Código da Carta (string)
    printf("Código da Carta (Ex: A01): ");
    scanf(" %3s", &carta2_code);

    // Nome da Cidade (string)
    printf("Nome da Cidade: ");
    // %49[^\n] lê até 49 caracteres, incluindo espaços, até o Enter
    scanf(" %s", &carta2_nome);

    // População (int)
    printf("População: ");
    scanf("%d", &carta2_populacao);

    // Area (float)
    printf("Area em km2: ");
    scanf("%f", &carta2_area_km2);

    // PIB (float)
    printf("PIB: ");
    scanf("%f", &carta2_pib);

    // Número de Pontos Turísticos (int)
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &carta2_pontos_turisticos);

    //Exibição da Carta 1

    printf("\n--- CARTA 1 ---\n");
    printf("Estado: %c\n", carta1_estado);
    printf("Codigo: %s\n", carta1_code);
    printf("Cidade: %s\n", carta1_nome);
    printf("População: %d habitantes\n", carta1_populacao);
    printf("Área: %.2f km²\n", carta1_area_km2);
    printf("PIB: %.2f\n", carta1_pib);
    printf("Pontos Turísticos: %d\n", carta1_pontos_turisticos);

    // Exibição da Carta 2
    printf("\n--- CARTA 2 ---\n");
    printf("Estado: %c\n", carta2_estado);
    printf("Codigo: %s\n", carta2_code);
    printf("Cidade: %s\n", carta2_nome);
    printf("População: %d habitantes\n", carta2_populacao);
    printf("Área: %.2f km²\n", carta2_area_km2);
    printf("PIB: %.2f\n", carta2_pib);
    printf("Pontos Turísticos: %d\n", carta2_pontos_turisticos);

    return 0;
}
