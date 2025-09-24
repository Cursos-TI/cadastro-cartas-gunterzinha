#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main (){
    // Variáveis dos estados
    char estado1 = 'A';
    char estado2 = 'B';
    char estado3 = 'C';
    char estado4 = 'D';

    // Variáveis dos códigos
    char codigo1[4] = "A01";
    char codigo2[4] = "B01";
    char codigo3[4] = "C01";
    char codigo4[4] = "D01";

    //variaveis que o usuario ira preenher
    char cidade [50]; // nome de cidade com até 49 caracteres
    int habitantes; // Número de habitantes
    float area;  // Área em km²
    float pib; // PIB da cidade
    int turistico; // Número de pontos turísticos


    printf ("digitei o nome da cidade: \n");
    scanf (" %[^\n]", cidade); // permite o usuario digitar o nome da cidade com espaço

    printf ("digite a area da cidade: \n");
    scanf ("%f", &area);

    printf ("digite a quantidade de pontos turisticos: \n");
    scanf ("%d", &turistico);

    printf ("digite a quatidade de habitantes: \n");
    scanf ("%d", &habitantes);

    printf ("digite o PIB da cidade: \n");
    scanf ("%f", &pib);

    //carta1
    printf ("Carta1 = %c%s\n", estado1, codigo1);
    printf ("nome da cidade: %s\n",cidade);
    printf ("area da cidade: %.2f km²\n", area);
    printf ("quatidade de habitantes: %d\n",habitantes);
    printf ("PIB da cidade: %f\n",pib);
    printf ("quantidade de pontos turisticos: %d\n",turistico);
    
    printf("\n");

    
    printf ("digitei o nome da cidade: \n");
    scanf (" %[^\n]", cidade); // permite o usuario digitar o nome da cidade com espaço

    printf ("digite a area da cidade: \n");
    scanf ("%f", &area);

    printf ("digite a quantidade de pontos turisticos: \n");
    scanf ("%d", &turistico);

    printf ("digite a quatidade de habitantes: \n");
    scanf ("%d", &habitantes);

    printf ("digite o PIB da cidade: \n");
    scanf ("%f", &pib);

    //carta2
    printf ("Carta2 = %c%s\n", estado2, codigo2);
    printf ("nome da cidade: %s\n",cidade);
    printf ("area da cidade: %.2f km²\n", area);
    printf ("quatidade de habitantes: %d\n",habitantes);
    printf ("PIB da cidade: %f\n",pib);
    printf ("quantidade de pontos turisticos: %d\n",turistico);

    printf("\n");
    
    
    printf ("digitei o nome da cidade: \n");
    scanf (" %[^\n]", cidade); // permite o usuario digitar o nome da cidade com espaço

    printf ("digite a area da cidade: \n");
    scanf ("%f", &area);

    printf ("digite a quantidade de pontos turisticos: \n");
    scanf ("%d", &turistico);

    printf ("digite a quatidade de habitantes: \n");
    scanf ("%d", &habitantes);

    printf ("digite o PIB da cidade: \n");
    scanf ("%f", &pib);

    //carta3
    printf ("Carta3 = %c%s\n", estado3, codigo3);
    printf ("nome da cidade: %s\n",cidade);
    printf ("area da cidade: %.2f km²\n", area);
    printf ("quatidade de habitantes: %d\n",habitantes);
    printf ("PIB da cidade: %f\n",pib);
    printf ("quantidade de pontos turisticos: %d\n",turistico);

    printf("\n");
    
    printf ("digitei o nome da cidade: \n");
    scanf (" %[^\n]", cidade); // permite o usuario digitar o nome da cidade com espaço

    printf ("digite a area da cidade: \n");
    scanf ("%f", &area);

    printf ("digite a quantidade de pontos turisticos: \n");
    scanf ("%d", &turistico);

    printf ("digite a quatidade de habitantes: \n");
    scanf ("%d", &habitantes);

    printf ("digite o PIB da cidade: \n");
    scanf ("%f", &pib);

    //carta4
    printf ("Carta4 = %c%s\n", estado4, codigo4);
    printf ("nome da cidade: %s\n",cidade);
    printf ("area da cidade: %.2f km²\n", area);
    printf ("quatidade de habitantes: %d\n",habitantes);
    printf ("PIB da cidade: %f\n",pib);
    printf ("quantidade de pontos turisticos: %d\n",turistico);

   return 0;
}
