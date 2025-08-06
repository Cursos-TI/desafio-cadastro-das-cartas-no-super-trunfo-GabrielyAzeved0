#include <stdio.h>

int main()
{
    char estado[2], estado2[2];
    char codigoCarta[4], codigoCarta2[4];
    char nomeCidade[30], nomeCidade2[30];
    int populacao, populacao2;
    float area, area2;
    float pib, pib2;
    float pontosTuristicos, pontosTuristicos2;
    float densidadePopulacional, densidadePopulacional2;
    float pibPerCapita, pibPerCapita2;



    //Carta 1
    printf("Carta 1 \n");
    printf("Digite o Estado(A-H): ");
    scanf("%s", estado);

    printf("Digite o Código da Carta: ");
    scanf("%s", codigoCarta);

    printf("Digite o Nome da Cidade: ");
    scanf("%s", nomeCidade);

    printf("Digite o número de Habitantes da Cidade: ");
    scanf("%d", &populacao);

    printf("Digite a área da cidade em quilômetros quadrados: ");
    scanf("%f", &area);

    printf("Digite o PIB(Produto Interno Bruto da cidade): ");
    scanf("%f", &pib);

    printf("Digite a quantidade de pontos turísticos na cidade: ");
    scanf("%f", &pontosTuristicos);


    //Carta 2
    printf("Digite o Estado (A-H): ");
    scanf("%s", estado2);

    printf("Digite o Código da Carta: ");
    scanf("%s", codigoCarta2);

    printf("Digite o Nome da Cidade: ");
    scanf("%s", nomeCidade2);

    printf("Digite o número de Habitantes da Cidade: ");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade em quilômetros quadrados: ");
    scanf("%f", &area2);

    printf("Digite o PIB(Produto Interno Bruto da cidade): ");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos na cidade: ");
    scanf("%f", &pontosTuristicos2);

    //calculo da densidade
    densidadePopulacional = populacao / area;
    densidadePopulacional2 = populacao2 / area2;
    //PIB per capita
    pibPerCapita = pib / populacao;
    pibPerCapita2 = pib2 / populacao2;
    
    //Carta 1
    printf("\nCarta 1: \n");
    printf("Estado: %s\n", estado); 
    printf("Código: %s \n", codigoCarta);
    printf("Nome da Cidade: %s \n", nomeCidade);
    printf("População: %d \n", populacao);
    printf("Área: %2.f km² \n", area);
    printf("PIB: %f bilhões de reais \n", pib);
    printf("Número de Pontos Turísticos: %f \n", pontosTuristicos);
    printf("Densidade Populacional:  %.2f hab/km² \n", densidadePopulacional);
    printf("PIB per Capita: %.2f reais \n", pibPerCapita);

    //Carta 2
    printf("\nCarta 2: \n");
    printf("Estado: %s\n", estado2); 
    printf("Código: %s \n", codigoCarta2);
    printf("Nome da Cidade: %s \n", nomeCidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %f.2 km² \n", area2);
    printf("PIB: %f bilhões de reais \n", pib2);
    printf("Número de Pontos Turísticos: %f \n", pontosTuristicos2);
    printf("Densidade Populacional:  %.2f hab/km² \n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais \n", pibPerCapita2);


    return 0;
}
