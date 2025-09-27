#include <stdio.h>

int main(){
int PontosTuristicos, populacao;
char Codigo[4], Carta, NomeCidade[50];
char Estado1;
float Area, PIB;

printf("**Carta 1**\n");

printf("Estado1: ");
scanf("%c", &Estado1);

printf("Código: ");
scanf(" %s", Codigo);

printf("Nome Da Cidade: ");
scanf(" %s", NomeCidade);

printf("População: ");
scanf("%d", &populacao);

printf("Área(em km²): ");
scanf("%f", &Area);

printf("PIB: ");
scanf("%f", &PIB);

printf("Número de Pontos Turístícos: ");
scanf("%d", &PontosTuristicos);

 printf("\nCarta 1:\n");
    printf("Estado1: %c\n", Estado1);
    printf("Código: %s\n", Codigo);
    printf("Nome da Cidade: %s\n", NomeCidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", Area);
    printf("PIB: %.2f bilhões de reais\n", PIB);
    printf("Número de Pontos Turísticos: %d\n", PontosTuristicos);



}