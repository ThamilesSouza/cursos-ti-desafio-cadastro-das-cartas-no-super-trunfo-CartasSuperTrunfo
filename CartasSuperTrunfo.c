#include <stdio.h>

// Desafio Super Trunfo - Países
#include <stdio.h>

int main() {
    printf("Desafiosupertrunfo!\n");

    char estadoA1 [60];
    char cidadeA1 [60];
    int habitantesA1;
    int numerodepontosturisticosA1;
    float areaA1;
    float pibA1;
    char estadoB1 [60];
    char cidadeB1 [60];
    int habitantesB1;
    int numerodepontosturisticosB1;
    float areaB1;
    float pibB1;

    printf("Digite seu estadoA1:\n");
    scanf("%s", &estadoA1);

    printf("Digite sua cidadeA1:\n");
    scanf("%s", &cidadeA1);

    printf("Digite numero de habitantesA1:\n");
    scanf("%d", &habitantesA1);

    printf("Digite numero de pontos turisticosA1:\n");
    scanf("%d", &numerodepontosturisticosA1);

    printf("Digite a areaA1:\n");
    scanf("%f", &areaA1);

    printf("Digite a pibA1:\n");
    scanf("%f", &pibA1);

    printf("Digite seu estadoB1:\n");
    scanf("%s", &estadoB1);

    printf("Digite sua cidadeB1:\n");
    scanf("%s", &cidadeB1);

    printf("Digite numero de habitantesB1:\n");
    scanf("%d", &habitantesB1);

    printf("Digite numero de pontos turisticosB1:\n");
    scanf("%d", &numerodepontosturisticosB1);

    printf("Digite a areaB1:\n");
    scanf("%f", &areaB1);

    printf("Digite a pibB1:\n");
    scanf("%f", &pibB1);

    printf("estadoA1, cidadeA1:%s - habitantesA1, numerodepontosturisticosA1: %d\n");
    printf("areaA1, pibA1: %f\n");
    printf("estadoB1, cidadeB1:%s - habitantesB1, numerodepontosturisticosB1: %d\n");
    printf("areaB1, pibB1: %f\n");
    
    return 0;
}
