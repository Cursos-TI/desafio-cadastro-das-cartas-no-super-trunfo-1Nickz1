#include <stdio.h>

int main() {
    char estado[50];
    char codigoDaCarta[50];
    char cidade[50];
    int populacao;
    float areaKm2;
    float pib;
    int pontosTuristicos;

    printf("Digite o estado: ");
    scanf("%s", estado);

    printf("Digite o código da carta: ");
    scanf("%s", codigoDaCarta);

    printf("Digite a cidade: ");
    scanf("%s", cidade);

    printf("Digite a população: ");
    scanf("%d", &populacao);

    printf("Digite a área em km²: ");
    scanf("%f", &areaKm2);

    printf("Digite o PIB: ");
    scanf("%f", &pib);

    printf("Digite os pontos turísticos: ");
    scanf("%d", &pontosTuristicos);

    printf("\n--- Dados Inseridos ---\n");
    printf("Estado: %s\n", estado);
    printf("Código da Carta: %s\n", codigoDaCarta);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área (km²): %.2f\n", areaKm2);
    printf("PIB: %.2f\n", pib);
    printf("Pontos Turísticos: %d\n", pontosTuristicos);

    return 0;
}

#include <stdio.h>

main () {
    char estado[50];
    char codigoDaCarta[50];
    char cidade[50];
    int populacao;
    float areaKm2;
    float pib;
    int pontosTuristicos;

    printf("Digite o estado: ");
    scanf("%s", estado);

    printf("Digite o código da carta: ");
    scanf("%s", codigoDaCarta);

    printf("Digite a cidade: ");
    scanf("%s", cidade);

    printf("Digite a população: ");
    scanf("%d", &populacao);

    printf("Digite a área em km²: ");
    scanf("%f", &areaKm2);

    printf("Digite o PIB: ");
    scanf("%f", &pib);

    printf("Digite os pontos turísticos: ");
    scanf("%d", &pontosTuristicos);

    printf("\n--- Dados Inseridos ---\n");
    printf("Estado: %s\n", estado);
    printf("Código da Carta: %s\n", codigoDaCarta);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área (km²): %.2f\n", areaKm2);
    printf("PIB: %.2f\n", pib);
    printf("Pontos Turísticos: %d\n", pontosTuristicos);

    return 0;
}