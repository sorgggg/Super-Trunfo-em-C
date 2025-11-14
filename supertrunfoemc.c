#include <stdio.h>
#include <string.h>

int main(){

    // Super Trunfo em C
    char estado[3];
    char codigo[20];
    char cidade[50];
    int popul;
    float areakm;
    float pib;
    int ponturis;
    float densidade;
    float pibcap;

    printf("Insira o estado(de 'A' até 'B'): ");
    scanf("%s", estado);

    printf("Insira o código da carta(a letra do estado seguida de um número de 01 a 04): ");
    scanf("%s", codigo);

    printf("Insira o nome da cidade: ");
    scanf("%s", cidade);

    printf("Insira a população: ");
    scanf("%d", &popul);

    printf("Insira a área(em km2): ");
    scanf("%f", &areakm);

    printf("Insira o PIB: ");
    scanf("%f", &pib);

    printf("Insira o número de Pontos Turísticos: ");
    scanf("%d", &ponturis);

    printf("\nCarta 1:");
        printf("\nEstado: %s\n", estado);
        printf("Código: %s\n", codigo);
        printf("Nome da Cidade: %s\n", cidade);
        printf("População: %d\n", popul);
        printf("Área: %.2f km²\n", areakm);
        printf("PIB: %.2f bilhões de reais\n", pib);
        printf("Número de Pontos Turísticos: %d\n", ponturis);

            densidade = popul / areakm;
        printf("Densidade Populacional: %.2f hab/km²\n", densidade);
            pibcap = pib / popul;
        printf("PIB per Capita: %.2f reais\n", pibcap);

    printf("\nInsira o estado(de 'A' até 'B'): ");
    scanf("%s", estado);

    printf("Insira o código da carta(a letra do estado sguida de um número de 01 a 04): ");
    scanf("%s", codigo);

    printf("Insira o nome da cidade: ");
    scanf("%s", cidade);

    printf("Insira a população: ");
    scanf("%d", &popul);

    printf("Insira a área(em km2): ");
    scanf("%f", &areakm);

    printf("Insira o PIB: ");
    scanf("%f", &pib);

    printf("Insira o número de Pontos Turísticos: ");
    scanf("%d", &ponturis);

    printf("\nCarta 2:");
        printf("\nEstado: %s\n", estado);
        printf("Código: %s\n", codigo);
        printf("Nome da Cidade: %s\n", cidade);
        printf("População: %d\n", popul);
        printf("Área: %.2f km²\n", areakm);
        printf("PIB: %.2f bilhões de reais\n", pib);
        printf("Número de Pontos Turísticos: %d\n", ponturis);

            densidade = popul / areakm;
        printf("Densidade Populacional: %.2f hab/km²\n", densidade);
            pibcap = pib / popul;
        printf("PIB per Capita: %.2f reais\n", pibcap);

return 0;
}