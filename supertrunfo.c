#include <stdio.h>

int main(){

    //variaveis da da carta01
    int pessoas;
    float area;
    float pib;
    int turistico;

    //variaveis da da carta02
    int Pessoas;
    float Area;
    float PIB;
    int Turistico;

    //entradas de dados da carta01
    printf("Insira a população da carta01: ");
    scanf("%d", &pessoas);
    printf("Insira sua área da carta01: ");
    scanf("%f", &area);
    printf("Insira o PIB da carta01: ");
    scanf("%f", &pib);
    printf("Insira o numero de pontos turisticos da carta01: ");
    scanf("%d", &turistico);

    //entradas de dados da carta02
    printf("Insira a população da carta02: ");
    scanf("%d", &Pessoas);
    printf("Insira sua área da carta02: ");
    scanf("%f", &Area);
    printf("Insira o PIB da carta02: ");
    scanf("%f", &PIB);
    printf("Insira o numero de pontos turisticos da carta02: ");
    scanf("%d", &Turistico);

    //saida de dados da carta01
    printf("\nDados da carta01\n\n");
    printf("População da carta01 é: %d\n",pessoas);
    printf("Área da carta01 é: %f\n",area);
    printf("PIB da carta01 é: %f\n",pib);
    printf("Total de pontos turisticos da carta01 é: %d\n",turistico);

    //saida de dados da carta02
    printf("\nDados da carta02\n\n");
    printf("População da carta02 é: %d\n",Pessoas);
    printf("Área da carta02 é: %f\n",Area);
    printf("PIB da carta02 é: %f\n",PIB);
    printf("Total de pontos turisticos da carta02 é: %d\n",Turistico);


    return 0;
}