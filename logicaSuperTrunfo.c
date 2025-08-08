#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

    //Declaração de variáveis.

    char estado1[20], estado2[20] = "sao paulo";
    char codigo_carta1[10], codigo_carta2[10] = "Z03";
    char nome_cidade1[30], nome_cidade2[30] = "Sumare";
    unsigned long int populacao1, populacao2 = 612;
    float area1, area2 = 500;
    float pib1, pib2 = 500;
    int ponto_turistico1, ponto_turistico2 = 10;
    float densidade_populacional1, densidade_populacional2; 
    float pib_percapita1, pib_percapita2;
    float superpoder1, superpoder2;
    int opcao_menu_inicial, opcao_menu_jogo1, opcao_menu_jogo2, resultado1 = 0, resultado2 = 0;

int MenuInicial()
{
    printf("MENU\n");
    printf("1. Iniciar Jogo\n");
    printf("2. SAIR\n\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao_menu_inicial);
    
}

int EntradaDados()
{
    //Entrada de dados da primeira carta.

    getchar();

    printf("Dados da Carta 1:\n");

    printf("Digite o estado: ");
    fgets(estado1, 20, stdin);

    printf("Digite o código da carta: ");
    fgets(codigo_carta1, 10, stdin);

    printf("Digite o nome da cidade: ");
    fgets(nome_cidade1, 30, stdin);

    printf("Digite a população: ");
    scanf("%lu", &populacao1);

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
    scanf("%lu", &populacao2);

    printf("Digite a área: ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &ponto_turistico2);

    //Cálculo de densidade populacional e pib per capita.

    densidade_populacional1 = (float) populacao1 / area1;
    pib_percapita1 = (float) pib1 / populacao1;

    densidade_populacional2 = (float) populacao2 / area2;
    pib_percapita2 = (float) pib2 / populacao2;

    //Cálculo de Super Poder.

    superpoder1 = (float) populacao1 + area1 + pib1 + ponto_turistico1 + pib_percapita1 + (1/densidade_populacional1);
    superpoder2 = (float) populacao2 + area2 + pib2 + ponto_turistico2 + pib_percapita2 + (1/densidade_populacional2);
}

int SaidaDados()
{
    //Saída de dados na tela:

    printf("\n\nCarta 1: \n");

    printf("Estado: %s", estado1);
    printf("Código: %s", codigo_carta1);
    printf("Cidade: %s", nome_cidade1);
    printf("População: %lu\n", populacao1);
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
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", ponto_turistico2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per Capita: %.2f reais\n", pib_percapita2);
    printf("Super Poder: %.2f\n", superpoder2);
}

int MenuJogo1()
{
    printf("\n\nMenu de Disputa: \n\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Ponto Turístico\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB per Capita\n");
    printf("7. Super Poder\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao_menu_jogo1);
}

int ComparacaoDados1()
{
    //Comparando as cartas.

    switch (opcao_menu_jogo1)
    {
    case 1:
        resultado1 = populacao1 > populacao2 ? 1 : 0;
        break;

    case 2:
        resultado1 = area1 > area2 ? 1 : 0;
        break;     

    case 3:
        resultado1 = pib1 > pib2 ? 1 : 0;
        break;
        
    case 4:
        resultado1 = ponto_turistico1 > ponto_turistico2 ? 1 : 0;
        break;
        
    case 5:
        resultado1 = densidade_populacional1 < densidade_populacional2 ? 1 : 0;
        break;     
        
    case 6:
        resultado1 = pib_percapita1 > pib_percapita2 ? 1 : 0;
        break;
        
    case 7:
        resultado1 = superpoder1 > superpoder2 ? 1 : 0;
        break;        

    default:
        printf("Opção Inválida!");
        break;
    }


}

int MenuJogo2()
{
    printf("\n\nMenu de Disputa: \n\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Ponto Turístico\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB per Capita\n");
    printf("7. Super Poder\n");
    printf("Escolha outra opção de disputa: ");
    scanf("%d", &opcao_menu_jogo2); 
    
    if(opcao_menu_jogo2 == opcao_menu_jogo1)
    {
        printf("Inválido");
        return 0;
    }
}

int ComparacaoDados2()
{
 
    switch (opcao_menu_jogo2)
    {
    case 1:
        resultado2 = populacao1 > populacao2 ? 1 : 0;
        break;

    case 2:        
        resultado2 = area1 > area2 ? 1 : 0;
        break;   

    case 3:
        resultado2 = pib1 > pib2 ? 1 : 0;
        break;
        
    case 4:
        resultado2 = ponto_turistico1 > ponto_turistico2 ? 1 : 0;
        break;
        
    case 5:
        resultado2 = densidade_populacional1 < densidade_populacional2 ? 1 : 0;
        break;     
        
    case 6:
        resultado2 = pib_percapita1 > pib_percapita2 ? 1 : 0;
        break;
        
    case 7:
        resultado2 = superpoder1 > superpoder2 ? 1 : 0;
        break;        

    default:
        printf("Opção Inválida!");
        break;
    }  
}

int Resultado()
{
    printf("\n\n## RESULTADO ##\n\n");
    switch (opcao_menu_jogo1)
    {
    case 1: 
        printf("Disputa entre População: \n");
        printf("Carta 1 - %s - População: %lu\n", nome_cidade1, populacao1);
        printf("Carta 2 - %s - População: %lu\n\n", nome_cidade2, populacao2);
        break;

    case 2:
        printf("Disputa entre Área: \n");
        printf("Carta 1 - %s - Área: %.2f\n", nome_cidade1, area1);
        printf("Carta 2 - %s - Área: %.2f\n\n", nome_cidade2, area2);
        break;
    case 3:
        printf("Disputa entre PIB: \n");
        printf("Carta 1 - %s - PIB: %.2f\n", nome_cidade1, pib1);
        printf("Carta 2 - %s - PIB: %.2f\n", nome_cidade2, pib2);
        break;
    case 4:
        printf("Disputa entre Ponto Turístico: \n");
        printf("Carta 1 - %s - Ponto Turístico: %d\n", nome_cidade1, ponto_turistico1);
        printf("Carta 2 - %s - Ponto Turístico: %d\n", nome_cidade2, ponto_turistico2);
        break;
    case 5:
        printf("Disputa entre Densidade Populacional: \n");
        printf("Carta 1 - %s - Densidade Populacional: %.2f\n", nome_cidade1, densidade_populacional1);
        printf("Carta 2 - %s - Densidade Populacional: %.2f\n", nome_cidade2, densidade_populacional2);
        break;
    case 6:
        printf("Disputa entre PIB per Capita: \n");
        printf("Carta 1 - %s - PIB per Capita: %.2f\n", nome_cidade1, pib_percapita1);
        printf("Carta 2 - %s - PIB per Capita: %.2f\n", nome_cidade2, pib_percapita2);
        break;
    case 7:
        printf("Disputa entre Super Poder: \n");
        printf("Carta 1 - %s - Super Poder: %.2f\n", nome_cidade1, superpoder1);
        printf("Carta 2 - %s - Super Poder: %.2f\n", nome_cidade2, superpoder2);
        break;
    }

    switch (opcao_menu_jogo2)
    {
    case 1:
        printf("Carta 1 - %s - População: %lu\n", nome_cidade1, populacao1);
        printf("Carta 2 - %s - População: %lu\n\n", nome_cidade2, populacao2);
        break;
    case 2: 
        printf("Carta 1 - %s - Área: %.2f\n", nome_cidade1, area1);
        printf("Carta 2 - %s - Área: %.2f", nome_cidade2, area2);
        break;  
    case 3:
        printf("Disputa entre PIB: \n");
        printf("Carta 1 - %s - PIB: %.2f\n", nome_cidade1, pib1);
        printf("Carta 2 - %s - PIB: %.2f\n", nome_cidade2, pib2);
        break;
    case 4:
        printf("Disputa entre Ponto Turístico: \n");
        printf("Carta 1 - %s - Ponto Turístico: %d\n", nome_cidade1, ponto_turistico1);
        printf("Carta 2 - %s - Ponto Turístico: %d\n", nome_cidade2, ponto_turistico2);
        break;
    case 5:
        printf("Disputa entre Densidade Populacional: \n");
        printf("Carta 1 - %s - Densidade Populacional: %.2f\n", nome_cidade1, densidade_populacional1);
        printf("Carta 2 - %s - Densidade Populacional: %.2f\n", nome_cidade2, densidade_populacional2);
        break;
    case 6:
        printf("Disputa entre PIB per Capita: \n");
        printf("Carta 1 - %s - PIB per Capita: %.2f\n", nome_cidade1, pib_percapita1);
        printf("Carta 2 - %s - PIB per Capita: %.2f\n", nome_cidade2, pib_percapita2);
        break;
    case 7:
        printf("Disputa entre Super Poder: \n");
        printf("Carta 1 - %s - Super Poder: %.2f\n", nome_cidade1, superpoder1);
        printf("Carta 2 - %s - Super Poder: %.2f\n", nome_cidade2, superpoder2);
        break;
    }

    if(resultado1 && resultado2)
    {
        printf("Carta 1 venceu!\n");
    } else if (resultado1 != resultado2) {
        printf("Empate!\n");
    } else {
        printf("Carta 2 venceu!\n");
    }
}

int main()
{   
    printf("***SUPER TRUNFO***\n\n");

    MenuInicial();

    switch (opcao_menu_inicial)
    {
    case 1:
        EntradaDados();
        break;
    
    case 2:
        return 0;
        break;
    
    default:
        printf("Opção Inválida!");
        return 0;
        break;
    }

    SaidaDados();

    MenuJogo1();
    ComparacaoDados1();
    MenuJogo2();
    ComparacaoDados2();
    Resultado();

    return 0;

}