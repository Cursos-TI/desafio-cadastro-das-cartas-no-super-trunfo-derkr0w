#include <stdio.h>
#include <string.h>

// Função para limpar o buffer do teclado
void limparBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main() {

    char estadoA[30], estadoB[30];
    char codigoA[10], codigoB[10];
    char cidadeA[30], cidadeB[30];
    int populacaoA, populacaoB;
    int pontA, pontB;
    float areaA, areaB;
    float pibA, pibB;
    float densA, densB;
    float pibCaptaA, pibCaptaB;
    float superA, superB;
    float densInvA;
    float densInvB;
    float totalA;
    float totalB;
    int resultado;

    //[CARTA 1]//

    printf("[CARTA 1] Digite o nome do estado:\n");
    scanf(" %[^\n]", estadoA);
    limparBuffer();

    printf("[CARTA 1] Digite o código do estado:\n");
    scanf("%s", codigoA);
    limparBuffer();

    printf("[CARTA 1] Digite o nome da cidade:\n");
    scanf("%[^\n]", cidadeA);
    limparBuffer();

    printf("[CARTA 1] Digite a população da cidade:\n");
    scanf("%d", &populacaoA);
    limparBuffer();

    printf("[CARTA 1] Digite a quantidade de pontos turísticos na cidade:\n");
    scanf("%d", &pontA);
    limparBuffer();

    printf("[CARTA 1] Digite a área da cidade em km² (ex: 123.4):\n");
    scanf("%f", &areaA);
    limparBuffer();

    printf("[CARTA 1] Digite o PIB da cidade (ex 12.3):\n");
    scanf("%f", &pibA);
    limparBuffer();
    pibA *= 1000000;  // valor digitado será considerado em milhões

    densA = (float) populacaoA / areaA;
    pibCaptaA = (float) pibA / populacaoA;
    densInvA = (float) 1 / densA;
    superA = (float) populacaoA + areaA + pibA + pibCaptaA + densInvA + pontA;

    printf("CARTA 1 REGISTRADA COM SUCESSO!\n\n");

    //[CARTA 2]//

    printf("[CARTA 2] Digite o nome do estado:\n");
    scanf("%[^\n]", estadoB);
    limparBuffer();

    printf("[CARTA 2] Digite o código do estado:\n");
    scanf("%s", codigoB);
    limparBuffer();

    printf("[CARTA 2] Digite o nome da cidade:\n");
    scanf("%[^\n]", cidadeB);
    limparBuffer();

    printf("[CARTA 2] Digite a população da cidade:\n");
    scanf("%d", &populacaoB);
    limparBuffer();

    printf("[CARTA 2] Digite a quantidade de pontos turísticos na cidade:\n");
    scanf("%d", &pontB);
    limparBuffer();

    printf("[CARTA 2] Digite a área da cidade em km² (ex: 123.4):\n");
    scanf("%f", &areaB);
    limparBuffer();

    printf("[CARTA 2] Digite o PIB da cidade (ex 12.3):\n");
    scanf("%f", &pibB);
    limparBuffer();
    pibB *= 1000000;

    densB = (float) populacaoB / areaB;
    pibCaptaB = (float) pibB / populacaoB;
    densInvB = (float) 1 / densB;
    superB = (float) populacaoB + areaB + pibB + pibCaptaB + densInvB + pontB;

    printf("CARTA 2 REGISTRADA COM SUCESSO!\n");

    if (superA > superB) {
        resultado = 1;
    } else {
        resultado = 0;
    }

    //[APRESENTAÇÃO DE DADOS]//

    printf("\n[CARTA 1]\n");
    printf("Estado: %s\nCódigo: %s\n", estadoA, codigoA);
    printf("Cidade: %s\nPopulação: %d\n", cidadeA, populacaoA);
    printf("Área: %.1f km²\nPIB: %.1f bilhões\nPontos Turísticos: %d\n", areaA, pibA / 1000000, pontA);
    printf("Densidade Populacional: %.1f hab./km²\nPIB per capita: %.1f\n\n", densA, pibCaptaA);

    printf("[CARTA 2]\n");
    printf("Estado: %s\nCódigo: %s\n", estadoB, codigoB);
    printf("Cidade: %s\nPopulação: %d\n", cidadeB, populacaoB);
    printf("Área: %.1f km²\nPIB: %.1f bilhões\nPontos Turísticos: %d\n", areaB, pibB / 1000000, pontB);
    printf("Densidade Populacional: %.1f hab./km²\nPIB per capita: %.1f\n", densB, pibCaptaB);

    printf("\nO resultado é: %d", resultado);

    return 0;
}