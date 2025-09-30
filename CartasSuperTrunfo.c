#include <stdio.h>

int main()
{
    char estado[3], estado2[3];
    char codigoCarta[4], codigoCarta2[4];
    char nomeCidade[30], nomeCidade2[30];
    int populacao, populacao2;
    float area, area2;
    float pib, pib2;
    int pontosTuristicos, pontosTuristicos2;
    float densidadePopulacional, densidadePopulacional2;
    float pibPerCapita, pibPerCapita2;

    // Carta 1
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
    scanf("%d", &pontosTuristicos);

    // Carta 2
    printf("Carta 2");
    printf("\nDigite o Estado (A-H): ");
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
    scanf("%d", &pontosTuristicos2);

    // calculo da densidade
    densidadePopulacional = populacao / area;
    densidadePopulacional2 = populacao2 / area2;
    // PIB per capita
    pibPerCapita = pib / populacao;
    pibPerCapita2 = pib2 / populacao2;

    int opcoes;
    printf("\n *** Comparando as Cartas *** \n");
    printf("1. População \n");
    printf("2.Área \n");
    printf("3.PIB \n");
    printf("4.Número de pontos turísticos \n");
    printf("5.Densidade demográfica \n");
    printf("Digite o  numero de qual atributo quer comparar: \n");
    scanf("%d", &opcoes);

    switch (opcoes)
    {

    case 1:
        printf("*** COMPARANDO POPULAÇÃO *** \n");
        printf("Carta 1 - %s: %d habitantes \n", nomeCidade, populacao);
        printf("Carta 2 - %s: %d habitantes \n", nomeCidade2, populacao2);
        if (populacao > populacao2)
        {
            printf("Resultado: Carta 1 venceu!  \n");
        }
        else if(populacao < populacao2){
            printf("Resultado: Carta 2 venceu!  \n");
        } else{
            printf("Empate!");
        }
        break;

    case 2:
        printf("*** COMPARANDO ÁREA *** \n");
        printf("Carta 1 - %s:  %.2f km²\n", nomeCidade, area);
        printf("Carta 2 - %s: %.2f km² \n", nomeCidade2, area2);
        if (area > area2)
        {
            printf("Resultado: Carta 1 venceu!  \n");
        }
         else if(area < area2){
            printf("Resultado: Carta 2 venceu!  \n");
        } else{
            printf("Empate!");
        }
        break;

    case 3:
        printf("*** COMPARANDO PIB *** \n");
        printf("Carta 1 - %s: R$ %.2f \n", nomeCidade, pib);
        printf("Carta 2 - %s: R$ %.2f \n", nomeCidade2, pib2);
        if (pib > pib2)
        {
            printf("Resultado: Carta 1 venceu!  \n");
        }
         else if(pib < pib2){
            printf("Resultado: Carta 2 venceu!  \n");
        } else{
            printf("Empate!");
        }
        break;
     
    case 4:
        printf("*** COMPARANDO PONTOS TURISTICOS *** \n");
        printf("Carta 1 - %s: %d pontos turísticos \n", nomeCidade, pontosTuristicos);
        printf("Carta 2 - %s: %d pontos turísticos \n", nomeCidade2, pontosTuristicos2);
        if (pontosTuristicos > pontosTuristicos2)
        {
            printf("Resultado: Carta 1 venceu!  \n");
        }
        else if(pontosTuristicos < pontosTuristicos2){
            printf("Resultado: Carta 2 venceu!  \n");
        } else{
            printf("Empate!");
        }
        break;
    case 5:
        printf("*** COMPARANDO DENSIDADE POPULACIONAL *** \n");
        printf("Carta 1 - %s: %.2f hab/km² \n", nomeCidade, densidadePopulacional);
        printf("Carta 2 - %s: %.2f hab/km² \n", nomeCidade2, densidadePopulacional2);
        if (densidadePopulacional < densidadePopulacional2)
        {
            printf("Resultado: Carta 1 venceu!  \n");
        }
        else if(densidadePopulacional > densidadePopulacional2){
            printf("Resultado: Carta 2 venceu!  \n");
        } else{
            printf("Empate!");
        }
        break;
    default:
        printf("Opção inválida!");
        break;
    }

    return 0;
}
