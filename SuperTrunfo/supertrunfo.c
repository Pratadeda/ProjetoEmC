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
    int populacao1;
    int numeroturisticos1;
    float area1, pib1, dens1, pibp1;
    char estado1;
    char cidade1[50], codigocarta1[10];
    float superpoder1;

    //Carta 2
    int populacao2, numeroturisticos2;
    float area2, pib2, dens2, pibp2;
    char estado2;
    char cidade2[50], codigocarta2[10];
    float superpoder2;
   
    //CARTA 1 
    printf("CARTA 1\n");

    printf("Estado (letra de A a H): ");
    scanf(" %c", &estado1); 

    printf("Código da carta (ex: A01): ");
    scanf("%s", codigocarta1);

    printf("Cidade: ");
    getchar(); // limpa buffer
    fgets(cidade1, sizeof(cidade1), stdin);
    cidade1[strcspn(cidade1, "\n")] = '\0'; 

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área (km²): ");
    scanf("%lf", &area1);

    printf("PIB (em bilhões R$): ");
    scanf("%lf", &pib1);

    printf("Número de pontos turísticos: ");
    scanf(" %d", &numeroturisticos1);

    dens1 = populacao1 / area1;
    pibp1 = ((pib1 * 1e9) / populacao1);
    superpoder1 = populacao1 + area1 + pib1 + numeroturisticos1 + (1 / dens1) + pibp1;

    // Coleta de dados Carta 1 
    printf("\n--- DADOS DA CARTA 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigocarta1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$ %.2f bilhões\n", pib1);
    printf("Pontos turísticos: %d\n", numeroturisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", dens1);
    printf("PIB per Capita: %.2f reais\n", pibp1);
    printf("Super Poder: %.2f\n", superpoder1);
    
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


    dens2 = populacao2 / area2;
    pibp2 = (pib2 / populacao2) * 1000000000; 
    superpoder2 = populacao2 + area2 + pib2 + numeroturisticos2 + (1 / dens2) + pibp2;

    // Coleta de dados Carta 2 
    printf("\n--- DADOS DA CARTA 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigocarta2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f bilhões\n", pib2);
    printf("Pontos turísticos: %d\n", numeroturisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", dens2);
    printf("PIB per Capita: %.2f reais\n", pibp2);
    printf("Super Poder: %.2f\n", superpoder2);
    printf("\n");
    //Comparações das Cartas
    double resultadoPopulacao, resultadoArea, resultadoPib, resultadoPonto, resultadoDensidade, resultadoPIBp, resultadoSuperpoder;

    resultadoPopulacao = populacao1 > populacao2;
    resultadoArea = area1 > area2;
    resultadoPib = pib1 > pib2;
    resultadoPonto = numeroturisticos1 > numeroturisticos2;
    resultadoDensidade = dens1 < dens2;
    resultadoPIBp = pibp1 > pibp2;
    resultadoSuperpoder = superpoder1 > superpoder2;

    printf("Comparação de Cartas:\n");
    printf("População: Carta 1 venceu (%d)\n", resultadoPopulacao);
    printf("Area: Carta 1 venceu (%d)\n", resultadoArea);
    printf("PIB: Carta 1 venceu (%d)\n", resultadoPib);
    printf("Ponto Turisticos: Carta 1 venceu (%d)\n", resultadoPonto);
    printf("Densidade Populacional: Carta 2 venceu (%d)\n", resultadoDensidade);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", resultadoPIBp);
    printf("Super Poder: Carta 1 venceu (%d)\n", resultadoSuperpoder);
    printf("\n");


    
    return 0;

}
