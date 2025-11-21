#include <stdio.h>

int main(){

    // Super Trunfo em C

    // Carta 1
    char estado[3];
    char codigo[20];
    char cidade[50];
    unsigned long int popul;
    float areakm;
    float pib;
    int ponturis;
    float densidade;
    float pibcap;
    float superpoder;
    float inversoDensidade;
    int resultado;

    // Carta 2
    unsigned long int popul2;
    float areakm2;
    float pib2;
    int ponturis2;
    float densidade2;
    float pibcap2;
    float superpoder2;

    printf("Insira o estado(de 'A' até 'B'): ");
    scanf("%s", estado);

    printf("Insira o código da carta(a letra do estado seguida de um número de 01 a 04): ");
    scanf("%s", codigo);

    printf("Insira o nome da cidade: ");
    scanf("%s", cidade);

    printf("Insira a população: ");
    scanf("%lu", &popul);

    printf("Insira a área(em km2): ");
    scanf("%f", &areakm);

    printf("Insira o PIB(apenas números, sem pontos): ");
    scanf("%f", &pib);

    printf("Insira o número de Pontos Turísticos: ");
    scanf("%d", &ponturis);

    printf("\nCarta 1:");
        printf("\nEstado: %s\n", estado);
        printf("Código: %s\n", codigo);
        printf("Nome da Cidade: %s\n", cidade);
        printf("População: %lu\n", popul);
        printf("Área: %.2f km²\n", areakm);
        printf("PIB: %.2f bilhões de reais\n", pib);
        printf("Número de Pontos Turísticos: %d\n", ponturis);

            densidade = popul / areakm;
        printf("Densidade Populacional: %.2f hab/km²\n", densidade);
            pibcap = pib / popul;
        printf("PIB per Capita: %.2f reais\n", pibcap);
    
            inversoDensidade = 1.0 / densidade;
            superpoder = popul + areakm + pib + ponturis + pibcap + inversoDensidade;
        printf("Super Poder: %.2f\n", superpoder);

    printf("\nInsira o estado(de 'A' até 'B'): ");
    scanf("%s", estado);

    printf("Insira o código da carta(a letra do estado sguida de um número de 01 a 04): ");
    scanf("%s", codigo);

    printf("Insira o nome da cidade: ");
    scanf("%s", cidade);

    printf("Insira a população: ");
    scanf("%lu", &popul2);

    printf("Insira a área(em km2): ");
    scanf("%f", &areakm2);

    printf("Insira o PIB: ");
    scanf("%f", &pib2);

    printf("Insira o número de Pontos Turísticos: ");
    scanf("%d", &ponturis2);

    printf("\nCarta 2:");
        printf("\nEstado: %s\n", estado);
        printf("Código: %s\n", codigo);
        printf("Nome da Cidade: %s\n", cidade);
        printf("População: %lu\n", popul2);
        printf("População: %lu\n", popul2);
        printf("Área: %.2f km²\n", areakm2);
        printf("PIB: %.2f bilhões de reais\n", pib2);
        printf("Número de Pontos Turísticos: %d\n", ponturis2);

            densidade2 = popul2 / areakm2;
        printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
            pibcap2 = pib2 / popul2;
        printf("PIB per Capita: %.2f reais\n", pibcap2);

            inversoDensidade = 1.0 / densidade2;
            superpoder2 = popul2 + areakm2 + pib2 + ponturis2 + pibcap2 + inversoDensidade;
        printf("Super Poder: %.2f\n\n", superpoder2);

        printf("Comparação de cartas: \n");
        printf("1 = Carta 1 venceu | 0 = Carta 2 venceu\n\n");
        printf("População: %d\n", popul > popul2);
        printf("Área: %d\n", areakm > areakm2);
        printf("PIB: %d\n", pib > pib2);
        printf("Pontos Turísticos: %d\n", ponturis > ponturis2);
        printf("Densidade Populacional: %d\n", densidade < densidade2);
        printf("Super Poder: %d\n", superpoder > superpoder2);
        
return 0;
}