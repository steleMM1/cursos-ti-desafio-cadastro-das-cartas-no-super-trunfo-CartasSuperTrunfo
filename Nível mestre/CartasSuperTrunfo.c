#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    //Variáveis carta N°1:
    char estado1[30];
    char nome1[30];
    int populacao1;
    float area1;
    float PIB1;
    int qntpontosturisticos1;
    float densidade1;
    float pibcpt1;
    char codigo1;



    //Variáveis carta N°2:
    char estado2[30];
    char nome2[30];
    int populacao2;
    float area2;
    float PIB2;
    int qntpontosturisticos2;
    float densidade2;
    float pibcpt2;


    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.


    //Aquisição de dados da carta N°1: 

    printf("Digite os dados da carta 1:");
    printf("\n");
    printf("\n");

    printf("Digite o nome do estado que a cidade se encontra:");
    scanf("%s", estado1);

    printf("Digite o nome da cidade:");
    scanf("%s", nome1);

    printf("Digite a população da cidade:");
    scanf ("%d", &populacao1);   

    printf("Digite a área da cidade:");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade:");
    scanf("%f", &PIB1);

    printf("Digite a quantidade de pontos turísitcos da cidade:");
    scanf("%i", &qntpontosturisticos1);

    //Cálculo das variáveis da carta N°1:
    densidade1 = (float) populacao1 / area1;
    pibcpt1 = (float) PIB1 / populacao1;

    printf("\n");
    printf("\n");
    printf("\n");

    //Aquisição de dados da carta N°2: 

    printf("Digite os dados da carta 2:");
    printf("\n");
    printf("\n");


    printf("Digite o nome do estado que a cidade se encontra:");
    scanf("%s", estado2);

    printf("Digite o nome da cidade:");
    scanf("%s", nome2);

    printf("Digite a população da cidade:");
    scanf ("%d", &populacao2);   

    printf("Digite a área da cidade:");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade:");
    scanf("%f", &PIB2);

    printf("Digite a quantidade de pontos turísitcos da cidade:");
    scanf("%i", &qntpontosturisticos2);

    //Cálculo das variáveis da carta N°2:
    densidade2 = (float) populacao2 / area2;
    pibcpt2 = (float) PIB2 / populacao2;

    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");


    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    //Carta N°1:
    printf("Dados da carta 1:");
    printf("\n");
    
    printf("Estado: %s \n", estado1);
    printf("Código: A01\n");
    printf("Nome: %s \n", nome1);
    printf("População: %i habitantes\n", populacao1);
    printf("Área: %f km²\n", area1);
    printf("PIB: %f bilhões de reais\n", PIB1);
    printf("Quantidade de pontos turísticos: %i \n", qntpontosturisticos1);
    printf("Densidade populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capta: %.2f reais\n", pibcpt1);

    printf("\n");

    
    //Carta N°2:
    printf("Dados da carta 2:");
    printf("\n");
    
    printf("Estado: %s \n", estado2);
    printf("Código: B02\n");
    printf("Nome: %s \n", nome2);
    printf("População: %i habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Quantidade de pontos turísticos: %i \n", qntpontosturisticos2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capta: %.2f reais\n", pibcpt2);

    printf("\n");
    printf("\n");
    printf("\n");
    return 0;
}
