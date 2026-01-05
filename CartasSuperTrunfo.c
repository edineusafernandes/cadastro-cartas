#include <stdio.h>

int main (){

    char Estado1, Estado2;
    char codigo_da_carta1[4], codigo_da_carta2[4];
    char nome_da_cidade1[30], nome_da_cidade2[30];
    float area1, area2, densi_pop1, densi_pop2, pib_perCapta1, pib_perCapta2;
    double PIB1, PIB2;
    int populacao1, populacao2, pontos_turisticos1, pontos_turisticos2;

    printf("CARTA 1\n");

    printf("Digite a letra corresṕondente ao Estado (A a H): \n");
    scanf(" %c", &Estado1);
    
    printf("Digite a letra do Estado seguida de um número de 01 a 04 (ex.: A01, B02): \n");
    scanf("%s", codigo_da_carta1);

    printf("Digite o nome da Cidade: \n");
    scanf("%s", nome_da_cidade1);

    printf("Digite a população corresṕondente ao Estado: \n");
    scanf("%d", &populacao1);

    printf("Digite a área corresṕondente ao Estado: \n");
    scanf("%f", &area1);

    printf("Digite o PIB corresṕondente ao Estado: \n");
    scanf("%lf", &PIB1);

    printf("Digite o número de pontos turísticos corresṕondente ao Estado: \n");
    scanf("%d", &pontos_turisticos1);

    //calculando a densidade populacional de cada cidade
    densi_pop1 = (float) populacao1/area1;

    //calculando o PIB per capta
    pib_perCapta1 = (float) PIB1/populacao1;


    printf("CARTA 2\n");

    printf("Digite a letra corresṕondente ao Estado (A a H): \n");
    scanf(" %c", &Estado2);
    
    printf("Digite a letra do Estado seguida de um número de 01 a 04 (ex.: A01, B02): \n");
    scanf("%s", codigo_da_carta2);

    printf("Digite o nome da Cidade: \n");
    scanf("%s", nome_da_cidade2);

    printf("Digite a população corresṕondente ao Estado: \n");
    scanf("%d", &populacao2);

    printf("Digite a área corresṕondente ao Estado: \n");
    scanf("%f", &area2);

    printf("Digite o PIB corresṕondente ao Estado: \n");
    scanf("%lf", &PIB2);

    printf("Digite o número de pontos turísticos corresṕondente ao Estado: \n");
    scanf("%d", &pontos_turisticos2);

    //calculando a densidade populacional de cada cidade
    densi_pop2 = (float) populacao2/area2;

    //calculando o PIB per capta
    pib_perCapta2 = (float) PIB2/populacao2;

    /*
    Calcular o Super-Poder
    Para cada carta, calcule o "Super Poder" somando todos os atributos numéricos (população, área, PIB, número de pontos turísticos, 
    PIB per capita e o inverso da densidade populacional – quanto menor a densidade, maior o "poder"). 
    Armazene o Super Poder como float. 
    */
    float superPoderA = populacao1 + area1 + PIB1 + pontos_turisticos1 + pib_perCapta1 + (1.0f/densi_pop1);
    float superPoderB = populacao2 + area2 + PIB2 + pontos_turisticos2 + pib_perCapta2 + (1.0f/densi_pop2);


    /*
    Comparação de Cartas:
População: Carta 1 venceu (1)
Área: Carta 1 venceu (1)
PIB: Carta 1 venceu (1)
Pontos Turísticos: Carta 1 venceu (1)
Densidade Populacional: Carta 2 venceu (0)
PIB per Capita: Carta 1 venceu (1)
Super Poder: Carta 1 venceu (1)
    */

    printf("Comparação de Cartas: \n");

    if (populacao1 > populacao2) {
        printf("População: Carta 1 venceu (1)\n");
    } else {
         printf("População: Carta 2 venceu (0)\n");
    }

    if (area1 > area2) {
        printf("Área: Carta 1 venceu (1)\n");
    } else {
         printf("Área: Carta 2 venceu (0)\n");
    }

    if (PIB1 > PIB2) {
        printf("PIB: Carta 1 venceu (1)\n");
    } else {
         printf("PIB: Carta 2 venceu (0)\n");
    }

    if (pontos_turisticos1 > pontos_turisticos2) {
        printf("Pontos Turísticos: Carta 1 venceu (1)\n");
    } else {
         printf("Pontos Turísticos: Carta 2 venceu (0)\n");
    }
    
    if (densi_pop1 < densi_pop2) {
        printf("Densidade Populacional: Carta 1 venceu (1)\n");
    } else {
         printf("Carta 2 venceu (0)\n");
    }

    if (pib_perCapta1 > pib_perCapta2) {
        printf("PIB per Capita: Carta 1 venceu (1)\n");
    } else {
         printf("PIB per Capita: Carta 2 venceu (0)\n");
    }

    if (superPoderA > superPoderB) {
        printf("Super Poder: Carta 1 venceu (1)\n");
    } else {
         printf("Super Poder: Carta 2 venceu (0)\n");
    }

    return 0;
}
