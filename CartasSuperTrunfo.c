#include <stdio.h>

int main(){
int PontosTuristicos, PontosTuristicos2, populacao, populacao2;
char Codigo[4], Codigo2[4], Carta, Carta2, NomeCidade[50], NomeCidade2[50];
char Estado1, Estado2;
float Area, Area2, PIB, PIB2;

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


printf("**Carta 2**\n");

printf("Estado2: ");
scanf(" %c", &Estado2);

printf("Código: ");
scanf(" %s", Codigo2);

printf("Nome Da Cidade: ");
scanf(" %s", NomeCidade2);

printf("População: ");
scanf("%d", &populacao2);

printf("Área(em km²): ");
scanf("%f", &Area2);

printf("PIB: ");
scanf("%f", &PIB2);

printf("Número de Pontos Turístícos: ");
scanf("%d", &PontosTuristicos2);

 printf("\nCarta 2:\n");
    printf("Estado1: %c\n", Estado2);
    printf("Código: %s\n", Codigo2);
    printf("Nome da Cidade: %s\n", NomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", Area2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Número de Pontos Turísticos: %d\n", PontosTuristicos2);


    return 0;
}