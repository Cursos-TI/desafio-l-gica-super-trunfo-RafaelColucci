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

    //Saída de dados das duas cartas. 

    printf("\n\nCarta 1: \n");

    printf("Estado: %s", estado1);
    printf("Código: %s", codigo_carta1);
    printf("Cidade: %s", nome_cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", ponto_turistico1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional1);
    printf("PIB per Capita: %.2f reais\n", pib_percapita1);
    printf("Super Poder: %.2f\n", superpoder1);


    printf("\n\nCarta 2: \n");

    printf("Estado: %s", estado2);
    printf("Código: %s", codigo_carta2);
    printf("Cidade: %s", nome_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", ponto_turistico2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per Capita: %.2f reais\n", pib_percapita2);
    printf("Super Poder: %.2f\n", superpoder2);    
    
    // Comparação de Cartas e Exibição de resultado:

    //Comparando População.

    printf("\n\n### Resultado População ###\n\n");
    printf("Carta 1\n%sPopulação: %d\n", nome_cidade1, populacao1);
    printf("Carta 2\n%sPopulação: %d\n", nome_cidade2, populacao2);
    if (populacao1 > populacao2){
        printf("Carta 1 venceu!");
    }   if (populacao1 == populacao2){
            printf("Empate! Verifique o próximo atributo.");
        } else {
            printf("Carta 2 venceu!");
        }    

    //Comparando Área. 

    printf("\n\n### Resultado Área ###\n\n");
    printf("Carta1\n%sÁrea: %.2f\n", nome_cidade1, area1);
    printf("Carta 2\n%sÁrea: %.2f\n", nome_cidade2, area2);
    if (area1 > area2){
        printf("Carta 1 venceu!");
    }   if (area1 == area2){
            printf("Empate! Verifique o próximo atributo.");
        }   else {
                printf("Carta 2 venceu!");
        }
       

    //Comparando o PIB.

    printf("\n\n### Resultado PIB ###\n\n");
    printf("Carta1\n%sPIB: %.2f\n", nome_cidade1, pib1);
    printf("Carta 2\n%sPIB: %.2f\n", nome_cidade2, pib2);
    if (pib1 > pib2){
        printf("Carta 1 venceu!");
    }   if (pib1 == pib2){
            printf("Empate! Verifique o próximo atributo.");
        } else {
            printf("Carta 2 venceu!");
        }        

   return 0;
}
