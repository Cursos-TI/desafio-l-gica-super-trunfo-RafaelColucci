#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    char estado1[20], estado2[20];
    char codigo_carta1[10], codigo_carta2[10];
    char nome_cidade1[30], nome_cidade2[30];
    unsigned long int populacao1, populacao2 = 612;
    float area1, area2 = 500;
    float pib1, pib2 = 500;
    int ponto_turistico1, ponto_turistico2 = 10;
    float densidade_populacional1, densidade_populacional2; 
    float pib_percapita1, pib_percapita2;
    float superpoder1, superpoder2;    

    
    // Cadastro das Cartas:
    //Entrada de dados da primeira carta.

    printf("Super Trunfo\n\n");

    printf("Dados da Carta 1:\n");

    printf("Digite o estado: ");
    fgets(estado1, 20, stdin);

    printf("Digite o código da carta: ");
    fgets(codigo_carta1, 10, stdin);

    printf("Digite o nome da cidade: ");
    fgets(nome_cidade1, 30, stdin);

    printf("Digite a população: ");
    scanf("%d", &populacao1);

    printf("Digite a área: ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &ponto_turistico1);

    //Entrada de dados da segunda carta.

    getchar();

    printf("\nDados da Carta 2:\n");

    printf("Digite o estado: ");
    fgets(estado2, 20, stdin);

    printf("Digite o código da carta: ");
    fgets(codigo_carta2, 10, stdin);

    printf("Digite o nome da cidade: ");
    fgets(nome_cidade2, 30, stdin);

    printf("Digite a população: ");
    scanf("%d", &populacao2);

    printf("Digite a área: ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &ponto_turistico2);

    //Cálculo de densidade populacional e pib per capita.

    densidade_populacional1 = populacao1 / area1;
    pib_percapita1 = pib1 / populacao1;

    densidade_populacional2 = populacao2 / area2;
    pib_percapita2 = pib2 / populacao2;

    //Cálculo de Super Poder.

    superpoder1 = (float) populacao1 + area1 + pib1 + ponto_turistico1 + pib_percapita1 + (1/densidade_populacional1);
    superpoder2 = (float) populacao2 + area2 + pib2 + ponto_turistico2 + pib_percapita2 + (1/densidade_populacional2);
    
    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
