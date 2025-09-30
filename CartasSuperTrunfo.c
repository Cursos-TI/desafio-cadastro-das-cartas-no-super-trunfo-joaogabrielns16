#include <stdio.h>

int main(){
int PontosTuristicos, PontosTuristicos2, populacao, populacao2;
char Codigo[4], Codigo2[4];
char NomeCidade[50], NomeCidade2[50];
char Estado1, Estado2;
float Area, Area2, PIB, PIB2;
float DensidadePopulacional, DensidadePopulacional2;
float PIBperCapita, PIBperCapita2;
float SuperPoder1, SuperPoder2;
int ResultadoPopulacao, ResultadoArea, ResultadoPIB, ResultadoPontosTuristicos;
int ResultadoPIBperCapita, ResultadoDensidadePopulacional, ResultadoSuperPoder;



printf("**Carta 1**\n");

printf("Estado1: ");
scanf(" %c", &Estado1);

printf("Código: ");
scanf(" %s", Codigo);

printf("Nome Da Cidade: ");
scanf(" %[^\n]", NomeCidade);

printf("População: ");
scanf("%d", &populacao);

printf("Área(em km²): ");
scanf("%f", &Area);

printf("PIB: ");
scanf("%f", &PIB);

printf("Número de Pontos Turístícos: ");
scanf("%d", &PontosTuristicos);

DensidadePopulacional = populacao / Area;
PIBperCapita = PIB / populacao;


printf("**Carta 2**\n");

printf("Estado2: ");
scanf(" %c", &Estado2);

printf("Código: ");
scanf(" %s", Codigo2);

printf("Nome Da Cidade: ");
scanf(" %[^\n]", NomeCidade2);

printf("População: ");
scanf("%d", &populacao2);

printf("Área(em km²): ");
scanf("%f", &Area2);

printf("PIB: ");
scanf("%f", &PIB2);

printf("Número de Pontos Turístícos: ");
scanf("%d", &PontosTuristicos2);

DensidadePopulacional2 = populacao2 / Area2;
PIBperCapita2 = PIB2 / populacao2;

    printf("\nCarta 1:\n");
    printf("Estado1: %c\n", Estado1);
    printf("Código: %s\n", Codigo);
    printf("Nome da Cidade: %s\n", NomeCidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", Area);
    printf("PIB: %.2f bilhões de reais\n", PIB);
    printf("Número de Pontos Turísticos: %d\n", PontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", DensidadePopulacional);
    printf("PIB PER CAPITA: %2.f reais\n", PIBperCapita);


    printf("\nCarta 2:\n");
    printf("Estado2: %c\n", Estado2);
    printf("Código: %s\n", Codigo2);
    printf("Nome da Cidade: %s\n", NomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", Area2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Número de Pontos Turísticos: %d\n", PontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n ", DensidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", PIBperCapita2);

    SuperPoder1: populacao + Area + PIB + PontosTuristicos + PIBperCapita + (1.0 / DensidadePopulacional);
    SuperPoder2: populacao2 + Area2 + PIB2 + PontosTuristicos2 + PIBperCapita2 + (1.0 / DensidadePopulacional2);

    ResultadoPopulacao = populacao > populacao2;
    ResultadoArea = Area > Area2;
    ResultadoPIB = PIB > PIB2;
    PontosTuristicos = PontosTuristicos > PontosTuristicos2;
    ResultadoPIBperCapita = PIBperCapita > PIBperCapita2;
    ResultadoDensidadePopulacional = DensidadePopulacional > DensidadePopulacional2;
    ResultadoSuperPoder = SuperPoder1 > SuperPoder2;

    printf("\n**Resultado Das Comparações**\n");
    printf("População: %d\n", ResultadoPopulacao);
    printf("Área: %d\n", ResultadoArea);
    printf("PIB: %d\n", ResultadoPIB);
    printf("Pontos Turísticos: %d\n", ResultadoPontosTuristicos);
    printf("PIBperCapita: %d\n", ResultadoPIBperCapita);
    printf("Densidade Populacional (menor vence): %d\n", ResultadoDensidadePopulacional);
    printf("SuperPoder: %d\n", ResultadoSuperPoder);


    return 0;
}