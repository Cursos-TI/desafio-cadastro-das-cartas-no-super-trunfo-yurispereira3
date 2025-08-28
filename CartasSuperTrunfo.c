#include <stdio.h>

struct CartaSuperTrunfo {

char estado;
char codigo[4];
char nomeCidade[50];
int populacao;
float area;
float pib;
int pontosTuristicos;
};


int main() {

struct CartaSuperTrunfo carta1;
struct CartaSuperTrunfo carta2;


printf("Desafio Super Trunfo!\n");

//Instruções para o usuário
printf("Cadastro carta 1; \n");

printf("Informe o Estado (A-H): \n");
scanf(" %c", &carta1.estado);

printf("Informe o código da carta (ex: A01): ");
scanf("%s", &carta1.codigo);

printf("Informe o nome da cidade: ");
scanf("%s[^\n]", &carta1.nomeCidade);

printf("Informe a população: ");
scanf("%d", &carta1.populacao);

printf("Informe a área (em km2): ");
scanf("%f", &carta1.area);

printf("Informe o PIB (em Bilhões de reais): ");
scanf("%f", &carta1.pib);

printf("Informe a quantidade de pontos turísticos: ");
scanf("%d", &carta1.pontosTuristicos);

printf("\n Cadastro da carta 2: \n");

printf("Informe o estado: \n");
scanf("%s", &carta2.estado);

printf("Informe o código da carta: ");
scanf("%s", &carta2.codigo);

printf("Informe o nome da cidade: ");
scanf("%s[^\n]", &carta2.nomeCidade);

printf("Insira a população: ");
scanf("%d", &carta2.populacao);

printf("Insira a área: ");
scanf("%f", &carta2.area);

printf("Insira o PIB: ");
scanf("%f", &carta2.pib);

printf("Insira a quantidade de pontos turísticos: ");
scanf("%d", &carta2.pontosTuristicos);







return 0;
}
