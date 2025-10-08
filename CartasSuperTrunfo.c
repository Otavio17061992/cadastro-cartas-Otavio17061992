#include <stdio.h>
#include <string.h>
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.
struct Carta {
  char estado;
  char codigo[4];
  char nomeCidade[25];
  int populacao;
  float areaEmKm;
  float PIB;
  int numeroPontosTuris;
};


int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  struct Carta Carta1;
  struct Carta Carta2;
  // Área para entrada de dados
  printf("Digite as informações da primeira Carta:\n");
  printf("Digite o estado com apenas uma letra de 'A' a 'H'\n");
  scanf("%c",Carta1.estado);
  printf("Digite o código da carta:\n");
  scanf("%c",Carta1.codigo);
  printf("Digite o nome da cidade:\n");
  scanf("%s",Carta1.nomeCidade);
  printf("Digite o numero de habitantes da cidade:\n");
  scanf("%d",Carta1.populacao);
  printf("Digite a área da cidade em quilômetros quadrados:\n");
  scanf("%f",Carta1.areaEmKm);
  printf("Digite o Produto Interno Bruto da cidade:\n");
  scanf("%f",Carta1.PIB);
  printf("Digite a quantidade de ponstos turisticos na cidade");
  scanf("%d",Carta1.numeroPontosTuris);

  // Segunda carta
  printf("Digite as informações da primeira Carta:\n");
  printf("Digite o estado com apenas uma letra de 'A' a 'H'\n");
  scanf("%c",Carta2.estado);
  printf("Digite o código da carta:\n");
  scanf("%c",Carta2.codigo);
  printf("Digite o nome da cidade:\n");
  scanf("%s",Carta2.nomeCidade);
  printf("Digite o numero de habitantes da cidade:\n");
  scanf("%d",Carta2.populacao);
  printf("Digite a área da cidade em quilômetros quadrados:\n");
  scanf("%f",Carta2.areaEmKm);
  printf("Digite o Produto Interno Bruto da cidade:\n");
  scanf("%f",Carta2.PIB);
  printf("Digite a quantidade de ponstos turisticos na cidade");
  scanf("%d",Carta2.numeroPontosTuris);
  // Área para exibição dos dados da cidade

  

return 0;
} 
