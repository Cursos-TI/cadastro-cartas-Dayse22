#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
char estado;
int cidade, populacao, pontosturisticos;
char codigocarta [4];
char nomecidade [30];
float area, pib;
  // Área para entrada de dados
  printf("Vamos inserir os dados da carta 1! \n");
  printf("Digite a letra do estado (a a h): \n");
  scanf ("%c", &estado);
  printf("Digite o número da cidade (1 a 4): \n");
  scanf ("%d", &cidade);
  printf("A cidade é: %d \n", cidade);

  //Declarar o código da cidade como um vetor de char, ou seja, uma string
  codigocarta [0]=estado;
  codigocarta [1]= '0';
  codigocarta [2]=cidade + '0';
  codigocarta [3]='\0';

  printf("Digite o nome da cidade: \n");
  scanf("%c", &nomecidade);
  printf("O nome da cidade é: %c \n", nomecidade);
 printf("Digite o número de habitantes da cidade: \n");
 scanf("%d", &populacao);
 printf("Digite a área da cidade em km2: \n");
 scanf("%f", &area);
 printf("Digite o Produto Interno Bruto da cidade: \n");
scanf("%f", &pib);
printf ("Digite a quantidade de pontos turísticos: \n");
scanf("%d", &pontosturisticos);

  // Área para exibição dos dados da cidade
   printf("CARTA 1 \n");
   printf("ESTADO: %c \n", estado);
   printf("CÓDIGO: %c \n", codigocarta);
   printf("NOME DA CIDADE: %c \n", nomecidade);
   printf("POPULAÇÃO: %d \n", populacao);
   printf("ÁREA: %f \n", area);
   printf("PIB: %f \n", pib);
   printf("PONTOS TURÍSTICOS: %d \n", pontosturisticos);

return 0;
} 
