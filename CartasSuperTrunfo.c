#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  // Variáveis da Carta 1
    char Estado1;
    char Codigo1[4];
    char NomedaCidade1[50];
    int Populacao1;
    float Area1;
    float PIB1;
    int NumerosdePontosTuristicos1;
    float DensidadePopulacional1;
    float PIBperCapita1;
    

    // Variáveis da Carta 2
    char Estado2;
    char Codigo2[4];
    char NomedaCidade2[50];
    int Populacao2;
    float Area2;
    float PIB2;
    int NumerosdePontosTuristicos2;
    float DensidadePopulacional2;
    float PIBperCapita2;

   
  // Área para entrada de dados
  // Cadastro da Carta 1
printf("=== Cadastro Da Carta 1 ===\n");
printf("Estado (A-H): ");
scanf(" %c", &Estado1);
printf("Codigo da carta (A01,B02...): ");
scanf(" %s", Codigo1);
printf("Nome da cidades: ");
scanf(" %[^\n]", NomedaCidade1);
printf("Populacao: ");
scanf("%d", &Populacao1);
printf("Area (Km2): ");
scanf("%f", &Area1);
printf("PIB: ");
scanf("%f", &PIB1);
printf("Numeros de pontos turisticos: ");
scanf("%d", &NumerosdePontosTuristicos1);
DensidadePopulacional1 = Populacao1 / Area1;
PIBperCapita1 = (PIB1 * 1000000000.0) / Populacao1;

// Cadastro da Carta 2
printf("===Cadastro Da Carta 2 ===\n");
printf("Estado (A-H): ");
scanf(" %c", &Estado2);
printf("Codigo da carta (A01,B02...): ");
scanf(" %s", Codigo2);
printf("Nome da Cidade: ");
scanf(" %[^\n]", NomedaCidade2);
printf("Populacao: ");
scanf (" %d", &Populacao2);
printf("Area (Km2): ");
scanf(" %f", &Area2);
printf("PIB: ");
scanf(" %f", &PIB2);
printf("Numeros de pontos turisticos: ");
scanf(" %d", &NumerosdePontosTuristicos2);
DensidadePopulacional2 = Populacao2 / Area2;
PIBperCapita2 = (PIB2 * 1000000000.0) / Populacao2;




  // Área para exibição dos dados da cidade
// Exibição da Carta 1
printf("\n========== Carta 1 ==========\n");
printf("Estado: %c\n", Estado1);
printf("Codigo: %s\n", Codigo1);
printf("Nome da cidade: %s\n", NomedaCidade1);
printf("Populacao: %d\n", Populacao1);
printf("Area: %.2f Km2\n", Area1);
printf("PIB: %.2f\n", PIB1);
printf("Numero de pontos turisticos1: %d\n", NumerosdePontosTuristicos1);
printf("Densidade Populacional: %.2f hab/km2\n", DensidadePopulacional1);
printf("PIB per Capita: %.2f reais\n", PIBperCapita1);

// Exibiçãp da Carta 2
printf("\n========== Carta 2 ==========\n");
printf("Estado: %c\n", Estado2);
printf("Codigo: %s\n", Codigo2);
printf("Nome da Cidade: %s\n", NomedaCidade2);
printf("Populacao: %d\n", Populacao2);
printf("Area: %.2f Km2\n", Area2);
printf("PIB: %.2f\n", PIB2);
printf ("Numros de pontos turisticos: %d\n", NumerosdePontosTuristicos2);
printf("Densidade Populacional: %.2f hab/km2\n", DensidadePopulacional2);
printf("PIB per Capita: %.2f reais\n", PIBperCapita2);

return 0;
}
