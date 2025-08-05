#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    int populacao;
    float area;
    float pib;
    int numeroturisticos;
    char estado;
    char cidade[50];
    char codigocarta[50];
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    printf("CARTA 1\n");
    
    printf("\nEstado:");
    scanf("%c", &estado);
    //uma letra de 'A' a 'H'
    
    printf("Código da carta:");
    scanf("%s", codigocarta);
    // A letra do estado seguida de um número de 01 a 04
   
    printf("Cidade:");
    scanf("%s", cidade);
    //Nome da Cidade
    
    printf("População:");
    scanf("%d", &populacao);
    //Número de Habitantes

    printf("Area:");
    scanf("%f", &area);
    //A área da cidade em quilômetros quadrados
    
    printf("PIB:");
    scanf("%f", &pib);
    //O Produto Interno Bruto da cidade

    printf("Número de pontos túristicos:");
    scanf("%d", &numeroturisticos);
    //A quantidade de pontos turísticos na cidade.

    printf("\nEstado:%c\n", estado);
    printf("Código:%c%s\n", estado,codigocarta);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2fKm² \n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de pontos Túrsiticos: %d\n", numeroturisticos);

    printf("\nCARTA 2\n");
    
    printf("\nEstado:");
    scanf("%c", &estado);
    //uma letra de 'A' a 'H'
    
    printf("Código da carta:");
    scanf("%s", codigocarta);
    // A letra do estado seguida de um número de 01 a 04
   
    printf("Cidade:");
    scanf("%s", cidade);
    //Nome da Cidade
    
    printf("População:");
    scanf("%d", &populacao);
    //Número de Habitantes

    printf("Area:");
    scanf("%f", &area);
    //A área da cidade em quilômetros quadrados
    
    printf("PIB:");
    scanf("%f", &pib);
    //O Produto Interno Bruto da cidade

    printf("Número de pontos túristicos:");
    scanf("%d", &numeroturisticos);
    //A quantidade de pontos turísticos na cidade.

    printf("\nEstado:%c\n", estado);
    printf("Código:%c%s\n", estado,codigocarta);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2fKm² \n", area);
    printf("PIB: %.2f bilhões de reias\n", pib);
    printf("Número de pontos Túrsiticos: %d\n", numeroturisticos);


    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}

