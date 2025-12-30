#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
char estado1, estado2;
int cidade1, cidade2, populacao1, populacao2, pontosturisticos1, pontosturisticos2;
char codigocarta1 [4];
char codigocarta2 [4];
char nomecidade1 [30], nomecidade2 [30];
float area1, area2, pib1, pib2;
  // Área para entrada de dados da CARTA 1
  printf("Vamos inserir os dados da carta 1! \n");
  printf("Digite a letra do estado da carta 1 (A a H): \n");
  scanf ("%c", &estado1);
  printf("Digite o número da cidade (1 a 4) da carta 1: \n");
  scanf ("%d", &cidade1);
  printf("A cidade é: %d \n", cidade1);

  //Declarar o código da cidade como um vetor de char, ou seja, uma string
  codigocarta1 [0]=estado1;
  codigocarta1 [1]= '0';
  codigocarta1 [2]=cidade1 + '0';
  codigocarta1 [3]='\0';

  printf("Digite o nome da cidade da carta 1: \n");
  scanf("%c", &nomecidade1);
  printf("O nome da cidade da carta 1 é: %c \n", nomecidade1);
 printf("Digite o número de habitantes da cidade da carta 1: \n");
 scanf("%d", &populacao1);
 printf("Digite a área em km2 da cidade da carta 1: \n");
 scanf("%f", &area1);
 printf("Digite o Produto Interno Bruto da cidade da carta 1: \n");
scanf("%f", &pib1);
printf ("Digite a quantidade de pontos turísticos da carta 1: \n");
scanf("%d", &pontosturisticos1);

  // Área para exibição dos dados da cidade
   printf("CARTA 1 \n");
   printf("ESTADO: %c \n", estado1);
   printf("CÓDIGO: %c \n", codigocarta1);
   printf("NOME DA CIDADE: %c \n", nomecidade1);
   printf("POPULAÇÃO: %d \n", populacao1);
   printf("ÁREA: %f \n", area1);
   printf("PIB: %f \n", pib1);
   printf("PONTOS TURÍSTICOS: %d \n", pontosturisticos1);

   // Área para entrada de dados da CARTA 2
  printf("Vamos inserir os dados da carta 2! \n");
  printf("Digite a letra do estado da carta 2 (A a H): \n");
  scanf ("%c", &estado2);
  printf("Digite o número da cidade (1 a 4) da carta 2: \n");
  scanf ("%d", &cidade2);
  printf("A cidade é: %d \n", cidade2);

  //Declarar o código da cidade como um vetor de char, ou seja, uma string
  codigocarta2 [0]=estado2;
  codigocarta2 [1]= '0';
  codigocarta2 [2]=cidade2 + '0';
  codigocarta2 [3]='\0';

  printf("Digite o nome da cidade da carta 2: \n");
  scanf("%c", &nomecidade2);
  printf("O nome da cidade da carta 2 é: %c \n", nomecidade2);
 printf("Digite o número de habitantes da cidade da carta 2: \n");
 scanf("%d", &populacao2);
 printf("Digite a área em km2 da cidade da carta 2: \n");
 scanf("%f", &area2);
 printf("Digite o Produto Interno Bruto da cidade da carta 2: \n");
scanf("%f", &pib2);
printf ("Digite a quantidade de pontos turísticos da carta 2: \n");
scanf("%d", &pontosturisticos2);

  // Área para exibição dos dados da cidade da CARTA 2
   printf("CARTA 2 \n");
   printf("ESTADO: %c \n", estado2);
   printf("CÓDIGO: %c \n", codigocarta2);
   printf("NOME DA CIDADE: %c \n", nomecidade2);
   printf("POPULAÇÃO: %d \n", populacao2);
   printf("ÁREA: %f \n", area2);
   printf("PIB: %f \n", pib2);
   printf("PONTOS TURÍSTICOS: %d \n", pontosturisticos2);
return 0;
} 
