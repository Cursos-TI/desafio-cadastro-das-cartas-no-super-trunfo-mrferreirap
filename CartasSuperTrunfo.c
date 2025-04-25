#include <stdio.h>

struct Carta {
    unsigned long int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade_populacional;
    float pib_per_capita;
    float super_poder;
};

int main() {
    struct Carta carta1, carta2;

    // Cadastro das cartas
    printf("Cadastro da Carta 1:\n");
    printf("Populacao: ");
    scanf("%lu", &carta1.populacao);
    printf("Area: ");
    scanf("%f", &carta1.area);
    printf("PIB: ");
    scanf("%f", &carta1.pib);
    printf("Pontos Turisticos: ");
    scanf("%d", &carta1.pontos_turisticos);

    printf("\nCadastro da Carta 2:\n");
    printf("Populacao: ");
    scanf("%lu", &carta2.populacao);
    printf("Area: ");
    scanf("%f", &carta2.area);
    printf("PIB: ");
    scanf("%f", &carta2.pib);
    printf("Pontos Turisticos: ");
    scanf("%d", &carta2.pontos_turisticos);

    // Nível Aventureiro: Cálculos
    carta1.densidade_populacional = carta1.populacao / carta1.area;
    carta2.densidade_populacional = carta2.populacao / carta2.area;

    carta1.pib_per_capita = carta1.pib / carta1.populacao;
    carta2.pib_per_capita = carta2.pib / carta2.populacao;

    // Nível Mestre: Super Poder (com densidade invertida)
    carta1.super_poder = (1.0 / carta1.densidade_populacional) + carta1.pib_per_capita + carta1.pib + carta1.pontos_turisticos;
    carta2.super_poder = (1.0 / carta2.densidade_populacional) + carta2.pib_per_capita + carta2.pib + carta2.pontos_turisticos;

    // Exibição dos dados
    printf("\n=== CARTA 1 ===\n");
    printf("Populacao: %lu\n", carta1.populacao);
    printf("Area: %.2f\n", carta1.area);
    printf("PIB: %.2f\n", carta1.pib);
    printf("Pontos Turisticos: %d\n", carta1.pontos_turisticos);
    printf("Densidade Populacional: %.2f\n", carta1.densidade_populacional);
    printf("PIB per capita: %.2f\n", carta1.pib_per_capita);
    printf("Super Poder: %.2f\n", carta1.super_poder);

    printf("\n=== CARTA 2 ===\n");
    printf("Populacao: %lu\n", carta2.populacao);
    printf("Area: %.2f\n", carta2.area);
    printf("PIB: %.2f\n", carta2.pib);
    printf("Pontos Turisticos: %d\n", carta2.pontos_turisticos);
    printf("Densidade Populacional: %.2f\n", carta2.densidade_populacional);
    printf("PIB per capita: %.2f\n", carta2.pib_per_capita);
    printf("Super Poder: %.2f\n", carta2.super_poder);

    // Comparação entre cartas (1 = Carta 1 vence, 0 = Carta 2 vence)
    printf("\n=== COMPARAÇÃO ===\n");
    printf("Populacao: %d\n", carta1.populacao > carta2.populacao);
    printf("Area: %d\n", carta1.area > carta2.area);
    printf("PIB: %d\n", carta1.pib > carta2.pib);
    printf("Pontos Turisticos: %d\n", carta1.pontos_turisticos > carta2.pontos_turisticos);
    printf("Densidade Populacional (menor vence): %d\n", carta1.densidade_populacional < carta2.densidade_populacional);
    printf("PIB per capita: %d\n", carta1.pib_per_capita > carta2.pib_per_capita);
    printf("Super Poder: %d\n", carta1.super_poder > carta2.super_poder);

    return 0;
}
