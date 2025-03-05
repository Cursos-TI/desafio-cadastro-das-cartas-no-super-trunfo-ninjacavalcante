#include <stdio.h>

int main() {

    char codigo_da_cidade[4];
    char nome[20];
    unsigned long int populacao;
    float area, pib;
    int pontos_turisticos;
    float densidade, pib_per, super_poder;

    
    char codigo_da_cidade2[4];
    char nome2[20];
    unsigned long int populacao2;
    float area2, pib2;
    int pontos_turisticos2;
    float densidade2, pib_per2, super_poder2;

    
    printf("Digite o codigo da primeira carta: ");
    scanf("%3s", codigo_da_cidade);
    printf("Digite o nome da cidade: ");
    scanf("%19s", nome);
    printf("Digite a populacao: ");
    scanf("%lu", &populacao); 
    printf("Digite a area: ");
    scanf("%f", &area);
    printf("Digite o PIB: ");
    scanf("%f", &pib);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos);

    
    printf("\nDigite o codigo da segunda carta: ");
    scanf("%3s", codigo_da_cidade2);
    printf("Digite o nome da cidade: ");
    scanf("%19s", nome2);
    printf("Digite a populacao: ");
    scanf("%lu", &populacao2); 
    printf("Digite a area: ");
    scanf("%f", &area2);
    printf("Digite o PIB: ");
    scanf("%f", &pib2);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos2);

    densidade = (float)populacao / area;
    densidade2 = (float)populacao2 / area2;
    pib_per = pib / populacao;
    pib_per2 = pib2 / populacao2;

    
    super_poder = (float)populacao + area + pib + pontos_turisticos + pib_per + (1 / densidade);
    super_poder2 = (float)populacao2 + area2 + pib2 + pontos_turisticos2 + pib_per2 + (1 / densidade2);

   
    printf("\nComparacao de Cartas:\n");

    printf("Populacao: Carta %d venceu (%d)\n", (populacao > populacao2) ? 1 : 2, (populacao > populacao2) ? 1 : 0);
    printf("Area: Carta %d venceu (%d)\n", (area > area2) ? 1 : 2, (area > area2) ? 1 : 0);
    printf("PIB: Carta %d venceu (%d)\n", (pib > pib2) ? 1 : 2, (pib > pib2) ? 1 : 0);
    printf("Pontos Turisticos: Carta %d venceu (%d)\n", (pontos_turisticos > pontos_turisticos2) ? 1 : 2, (pontos_turisticos > pontos_turisticos2) ? 1 : 0);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", (densidade < densidade2) ? 1 : 2, (densidade < densidade2) ? 1 : 0);
    printf("PIB per Capita: Carta %d venceu (%d)\n", (pib_per > pib_per2) ? 1 : 2, (pib_per > pib_per2) ? 1 : 0);
    printf("Super Poder: Carta %d venceu (%d)\n", (super_poder > super_poder2) ? 1 : 2, (super_poder > super_poder2) ? 1 : 0);

    return 0;
}