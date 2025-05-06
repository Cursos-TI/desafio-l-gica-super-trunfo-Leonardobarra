#include <stdio.h>

int main() {

    // Informações das cartas

        // Código: A01                  
        // Cidade: Jequitinhonha                   
        // População: 25560            
        // Área (km²): 3526.43          
        // PIB: 274830000 (milhões de reais)            
        // Nr pontos turísticos: 4
        // Densidade Populacional: 7.25
        // PIB Per Capita: R$ 10752.35
    
        // Código: A02                  
        // Cidade: Almenara           
        // População: 44420           
        // Área (km²): 2300.71           
        // PIB: 674910000.00 (milhões de reais)              
        // Nr pontos turísticos: 8 
        // Densidade Populacional: 19.31
        // PIB Per Capita: R$ 15193.83
         

printf("******Desafio Super Trunfo - Países******\n");

// inserindo as variáveis

char codigo1[4], codigo2[4] = "A01";
char nome1[20], nome2[20] = "JuizdeFora";
int populacao1, populacao2 = 1;
float area1, area2 = 1.2;
float pib1, pib2 = 3;
int pontoturistico1, pontoturistico2 = 4;

// inserindo novas variáveis (desafio 2)

float densidadePopulacional1, densidadePopulacional2 = 5;
float pibPerCapita1, pibPerCapita2 = 6;

// dados de entrada do jogador 1

printf("Jogador1, digite o código da cidade - Exemplo: F01:\n");
scanf("%s", &codigo1);

printf("Jogador1, digite o nome da cidade:\n");
scanf("%s", &nome1);

printf("Jogador1, digite a população da cidade:\n");
scanf("%d", &populacao1);

printf("Jogador1, digite a área da cidade (em km²) - Exemplo: 1.2:\n");
scanf("%f", &area1);

printf("Jogador1, digite o PIB da cidade:\n");
scanf("%f", &pib1);

printf("Jogador1, digite o número de Pontos Turísticos da cidade:\n");
scanf("%d", &pontoturistico1);

// dados de entrada do jogador 2

printf("Jogador2, digite o código da cidade - Exemplo: F01:\n");
scanf("%s", &codigo2);

printf("Jogador2, digite o nome da cidade:\n");
scanf("%s", &nome2);

printf("Jogador2, digite a população da cidade:\n");
scanf("%d", &populacao2);

printf("Jogador2, digite a área da cidade (em km²) - Exemplo: 1.2:\n");
scanf("%f", &area2);

printf("Jogador2, digite o PIB da cidade:\n");
scanf("%f", &pib2);

printf("Jogador2, digite o número de Pontos Turísticos da cidade:\n");
scanf("%d", &pontoturistico2);

// imprimindo os dados das cartas na tela

printf("**********Dados das cartas - Desafio Novato 1**********\n");

printf("\n");

printf("CARTA1:\n Código: %s\n Cidade: %s\n População: %d\n Área (Km²): %.2f\n PIB: %.2f\n Pontos Turísticos: %d\n", codigo1, nome1, populacao1, area1, pib1, pontoturistico1);

printf("\n");

printf("CARTA2:\n Código: %s\n Cidade: %s\n População: %d\n Área (Km²): %.2f\n PIB: %.2f\n Pontos Turísticos: %d\n", codigo2, nome2, populacao2, area2, pib2, pontoturistico2);

printf("\n");

// imprimindo a comparação das cartas (densidade populacional e PIB per capita)

printf("**********calculo da Densidade Populacional e PIB Per Capita - Desafio Novato 2**********");

printf("\n");

if (area1 != 0) {
    densidadePopulacional1 = populacao1 / area1;
    printf("Densidade Populacional da carta 1 é: %.2f hab / Km²\n", densidadePopulacional1);
}   else {
    printf("A área não  pode ser zero.\n");
}

if (area2 != 0) {
    densidadePopulacional2 = populacao2 / area2;
    printf("Densidade Populacional da carta 2 é: %.2f hab / Km²\n", densidadePopulacional2);
}   else {
    printf("A área não  pode ser zero.\n");
}

if (pib1 != 0) {
    pibPerCapita1 = pib1 / populacao1;
    printf("PIB Per Capita da carta 1 é: R$ %.2f / hab\n", pibPerCapita1);
}   else {
    printf("O PIB não  pode ser zero.\n");
}

if (pib2 != 0) {
    pibPerCapita2 = pib2 / populacao2;
    printf("PIB Per Capita da carta 2 é: R$ %.2f / hab\n", pibPerCapita2);
}   else {
    printf("O PIB não  pode ser zero.\n");
}

printf("\n");

printf("**********Imprimindo a comparação das cartas - Atributo: PIB**********\n");

printf("\n");

printf("O PIB da carta 1 é: %.2f\n", pib1);
printf("O PIB da carta 2 é: %.2f\n", pib2);


if (pib1 > pib2) {
    printf("Resultado: Carta 1 vence!!!\n", nome1);
    } else {
        printf("Resultado: Carta 2 venceu!!!\n", nome2);
    }

    return 0;
}
