#include <stdio.h>
#include <string.h>

int main() {

    char estadoA[30], estadoB[30];
    char codigoA[10], codigoB[10];
    char cidadeA[30], cidadeB[30];
    int populacaoA, populacaoB;
    int pontA, pontB;
    float areaA, areaB;
    float pibA, pibB;

    //[CARTA 1]//

    printf("[CARTA 1] Digite o nome do estado:\n");
    scanf(" %[^\n]", estadoA);

    printf("[CARTA 1] Digite o código do estado:\n");
    scanf("%s", codigoA);
    getchar();

    printf("[CARTA 1] Digite o nome da cidade:\n");
    scanf("%[^\n]", cidadeA);

    printf("[CARTA 1] Digite a população da cidade:\n");
    scanf("%d", &populacaoA);

    printf("[CARTA 1] Digite a quantidade de pontos turísticos na cidade:\n");
    scanf("%d", &pontA);

    printf("[CARTA 1] Digite a área da cidade em km²:\n");
    scanf("%f", &areaA);

    printf("[CARTA 1] Digite o PIB da cidade:\n");
    scanf("%f", &pibA);

    printf("CARTA 1 REGISTRADA COM SUCESSO!\n\n");

    //[CARTA 2]//

    printf("[CARTA 2] Digite o nome do estado:\n");
    getchar();
    scanf("%[^\n]", estadoB);

    printf("[CARTA 2] Digite o código do estado:\n");
    scanf("%s", codigoB);
    getchar();

    printf("[CARTA 2] Digite o nome da cidade:\n");
    scanf("%[^\n]", cidadeB);

    printf("[CARTA 2] Digite a população da cidade:\n");
    scanf("%d", &populacaoB);

    printf("[CARTA 2] Digite a quantidade de pontos turísticos na cidade:\n");
    scanf("%d", &pontB);

    printf("[CARTA 2] Digite a área da cidade em km²:\n");
    scanf("%f", &areaB);

    printf("[CARTA 2] Digite o PIB da cidade:\n");
    scanf("%f", &pibB);

    printf("CARTA 2 REGISTRADA COM SUCESSO!\n");

    //[APRESENTAÇÃO DE DADOS]//

    printf("\n[CARTA 1]\n");
    printf("Estado: %s\nCódigo: %s\n", estadoA, codigoA);
    printf("Cidade: %s\nPopulação: %d\n", cidadeA, populacaoA);
    printf("Área: %.3fkm²\nPIB: %.2f\nNúmero de Pontos Turísticos: %d\n\n", areaA, pibA, pontA);

    printf("[CARTA 2]\n");
    printf("Estado: %s\nCódigo: %s\n", estadoB, codigoB);
    printf("Cidade: %s\nPopulação: %d\n", cidadeB, populacaoB);
    printf("Área: %.3fkm²\nPIB: %.2f\nNúmero de Pontos Turísticos: %d\n", areaB, pibB, pontB);

    return 0;
}