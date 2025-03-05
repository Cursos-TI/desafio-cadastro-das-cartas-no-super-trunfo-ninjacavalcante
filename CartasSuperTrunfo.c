#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    
    char codigo_da_cidade[4];
    char nome[20];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;

    char codigo_da_cidade2[4];
    char nome2[20];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    printf("Digite o código da primeira carta: \n");
        scanf("%3s", codigo_da_cidade);
    printf("Digite o nome da cidade: \n");
        scanf("%s", nome);
    printf("Digite a populacão: \n");
        scanf("%d", populacao);
    printf("Digite a área: \n");
        scanf("%f", area);
    printf("Digite o PIB: \n");
        scanf("%f", pib);
    printf("Digite o número de pontos turísticos: \n");
        scanf("%d", pontos_turisticos);

    printf("Digite o código da segunda carta: \n");
        scanf("%3s", codigo_da_cidade2);
    printf("Digite o nome da cidade: \n");
        scanf("%s", nome2);
    printf("Digite a populacão: \n");
        scanf("%d", populacao2);
    printf("Digite a área: \n");
        scanf("%f", area2);
    printf("Digite o PIB: \n");
        scanf("%f", pib2);
    printf("Digite o número de pontos turísticos: \n");
        scanf("%d", pontos_turisticos2);

    printf("\n=== Dados da Primeira Carta ===\n");
    printf("\n Código da carta: %s\n", codigo_da_cidade);
    printf("Nome da cidade: %s\n", nome);
    printf("População: %d\n", populacao);
    printf("Área: %.2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Pontos turísticos: %d\n", pontos_turisticos);

    
    printf("\n=== Dados da Segunda Carta ===\n");
    printf("\n Código da carta: %s\n", codigo_da_cidade2);
    printf("Nome da cidade: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turísticos: %d\n", pontos_turisticos2);
         
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
