#include <stdio.h>

int main (){

    char Estado1, Estado2;
    char codigo_da_carta1[4], codigo_da_carta2[4];
    char nome_da_cidade1[30], nome_da_cidade2[30];
    float area1, area2;
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

    printf("Digite o PIB corresṕondente ao Estado (A a H): \n");
    scanf("%lf", &PIB1);

    printf("Digite o número de pontos turísticos corresṕondente ao Estado (A a H): \n");
    scanf("%d", &pontos_turisticos1);


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

    printf("Digite o PIB corresṕondente ao Estado (A a H): \n");
    scanf("%lf", &PIB2);

    printf("Digite o número de pontos turísticos corresṕondente ao Estado (A a H): \n");
    scanf("%d", &pontos_turisticos2);

    printf("Carta 1: \n");
    printf("ESTADO: %c\n", Estado1);
    printf("Código: %s\n", codigo_da_carta1);
    printf("Nome da Cidade: %s\n", nome_da_cidade1);
    printf("População: %d\n", populacao1);
    printf("Àrea: %f km2\n", area1);
    printf("PIB: %.2lf bilhões de reais\n", PIB1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);

    printf("---------------------*---------------------\n");

    printf("Carta 2: \n");
    printf("ESTADO: %c\n", Estado2);
    printf("Código: %s\n", codigo_da_carta2);
    printf("Nome da Cidade: %s\n", nome_da_cidade2);
    printf("População: %d\n", populacao2);
    printf("Àrea: %f km2\n", area2);
    printf("PIB: %.2lf bilhões de reais\n", PIB2);
    printf("Número de Pontos Turísticos: %d", pontos_turisticos2);
    

    return 0;
}
