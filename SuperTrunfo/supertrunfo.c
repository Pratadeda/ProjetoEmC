#include <stdio.h>
#include <windows.h>
#include <string.h>

// Desafio Super Trunfo - Cidades
// Tema 1 - Cadastro das Cartas

int main() {
    // Configura��o para exibir caracteres acentuados corretamente
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);

    // Carta 1
    int populacao1, numeroturisticos1;
    float area1, pib1;
    char estado1;
    char cidade1[50], codigocarta1[10];

    // Carta 2
    int populacao2, numeroturisticos2;
    float area2, pib2;
    char estado2;
    char cidade2[50], codigocarta2[10];

    // CARTA 1
    printf("\t=====CARTA 1=====\n");

    printf("Estado (letra de A a H): ");
    scanf(" %c", &estado1); 

    printf("C�digo da carta (ex: A01): ");
    scanf("%s", codigocarta1);

    printf("Cidade: ");
    getchar(); // limpa buffer
    fgets(cidade1, sizeof(cidade1), stdin);
    cidade1[strcspn(cidade1, "\n")] = '\0'; // remove \n

    printf("Popula��o: ");
    scanf("%d", &populacao1);

    printf("�rea (km�): ");
    scanf("%f", &area1);

    printf("PIB (em bilh�es R$): ");
    scanf("%f", &pib1);

    printf("N�mero de pontos tur�sticos: ");
    scanf("%d", &numeroturisticos1);

    // Dados Carta 1 
    printf("\n=== DADOS DA CARTA 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("C�digo: %s\n", codigocarta1);
    printf("Cidade: %s\n", cidade1);
    printf("Popula��o: %d habitantes\n", populacao1);
    printf("�rea: %.2f km�\n", area1);
    printf("PIB: R$ %.2f bilh�es\n", pib1);
    printf("Pontos tur�sticos: %d\n", numeroturisticos1);

    // CARTA 2 
    printf("\nCARTA 2\n");

    printf("Estado (letra de A a H): ");
    scanf(" %c", &estado2);

    printf("C�digo da carta (ex: B02): ");
    scanf("%s", codigocarta2);

    printf("Cidade: ");
    getchar(); // limpa buffer
    fgets(cidade2, sizeof(cidade2), stdin);
    cidade2[strcspn(cidade2, "\n")] = '\0'; // remove \n

    printf("Popula��o: ");
    scanf("%d", &populacao2);

    printf("�rea (km�): ");
    scanf("%f", &area2);

    printf("PIB (em bilh�es R$): ");
    scanf("%f", &pib2);

    printf("N�mero de pontos tur�sticos: ");
    scanf("%d", &numeroturisticos2);

    // Dados Carta 2 
    printf("\n--- DADOS DA CARTA 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("C�digo: %s\n", codigocarta2);
    printf("Cidade: %s\n", cidade2);
    printf("Popula��o: %d habitantes\n", populacao2);
    printf("�rea: %.2f km�\n", area2);
    printf("PIB: R$ %.2f bilh�es\n", pib2);
    printf("Pontos tur�sticos: %d\n", numeroturisticos2);

    return 0;
}
