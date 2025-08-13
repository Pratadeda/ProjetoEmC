#include <stdio.h>
#include <windows.h>
#include <string.h>

// Desafio Super Trunfo - Cidades
// Tema 1 - Cadastro das Cartas

int main(void) {
    // Configuração para exibir caracteres acentuados corretamente
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);

    //Carta 1
    int populacao1, numeroturisticos1;
    float area1, pib1;
    char estado1;
    char cidade1[50], codigocarta1[10];

    //Carta 2
    int populacao2, numeroturisticos2;
    float area2, pib2;
    char estado2;
    char cidade2[50], codigocarta2[10];

    //CARTA 1 
    printf("CARTA 1\n");

    printf("Estado (letra de A a H): ");
    scanf(" %c", &estado1); // espaço antes de %c para ignorar \n

    printf("Código da carta (ex: A01): ");
    scanf("%s", codigocarta1);

    printf("Cidade: ");
    getchar(); // limpa buffer
    fgets(cidade1, sizeof(cidade1), stdin);
    cidade1[strcspn(cidade1, "\n")] = '\0'; // remove \n

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área (km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões R$): ");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos: ");
    scanf("%d", &numeroturisticos1);

    // Coleta de dados Carta 1 
    printf("\n--- DADOS DA CARTA 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigocarta1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$ %.2f bilhões\n", pib1);
    printf("Pontos turísticos: %d\n", numeroturisticos1);

    //CARTA 2
    printf("\nCARTA 2\n");

    printf("Estado (letra de A a H): ");
    scanf(" %c", &estado2);

    printf("Código da carta (ex: B02): ");
    scanf("%s", codigocarta2);

    printf("Cidade: ");
    getchar(); // limpa buffer
    fgets(cidade2, sizeof(cidade2), stdin);
    cidade2[strcspn(cidade2, "\n")] = '\0'; // remove \n

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões R$): ");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &numeroturisticos2);

    // Coleta de dados Carta 2 
    printf("\n--- DADOS DA CARTA 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigocarta2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f bilhões\n", pib2);
    printf("Pontos turísticos: %d\n", numeroturisticos2);

    return 0;
}
