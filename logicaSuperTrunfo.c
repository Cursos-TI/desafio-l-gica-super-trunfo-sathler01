#include <stdio.h>

int main() {
    // Dados da primeira carta
    char estado1[3] = "SP";
    char nome1[30] = "Sao Paulo";
    int populacao1 = 12300000;
    float area1 = 1521.11;
    float pib1 = 699000000000.0;
    int pontos1 = 25;

    // Calcula densidade e PIB per capita
    float densidade1 = populacao1 / area1;
    float pibPerCapita1 = pib1 / populacao1;

    // Dados da segunda carta
    char estado2[3] = "RJ";
    char nome2[30] = "Rio de Janeiro";
    int populacao2 = 6748000;
    float area2 = 1182.30;
    float pib2 = 364000000000.0;
    int pontos2 = 20;

    // Calcula densidade e PIB per capita
    float densidade2 = populacao2 / area2;
    float pibPerCapita2 = pib2 / populacao2;

    // ===== Escolha do atributo (aqui é população) =====
    printf("=== Comparacao de Cartas ===\n");
    printf("Atributo comparado: Populacao\n\n");

    printf("Carta 1 - %s (%s): %d habitantes\n", nome1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %d habitantes\n\n", nome2, estado2, populacao2);

    // ===== Ver quem vence =====
    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
    } else if (populacao2 > populacao1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}
