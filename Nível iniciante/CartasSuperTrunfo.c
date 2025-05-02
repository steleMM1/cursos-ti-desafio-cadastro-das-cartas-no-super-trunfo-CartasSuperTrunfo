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
    char nome1[30];
    int populacao1;
    float area1;
    float PIB1;
    int qntpontosturisticos1;

    //Variáveis carta N°2:
    char nome2[30];
    int populacao2;
    float area2;
    float PIB2;
    int qntpontosturisticos2;


    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.


    //Aquisição de dados da carta N°1: 

    printf("Digite os dados da carta 1:");
    printf("\n");
    printf("\n");


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

    printf("\n");
    printf("\n");
    printf("\n");

    //Aquisição de dados da carta N°2: 

    printf("Digite os dados da carta 2:");
    printf("\n");
    printf("\n");


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
    

    printf("Nome: %s \n", nome1);
    printf("População: %i \n", populacao1);
    printf("Área: %f \n", area1);
    printf("PIB: %f \n", PIB1);
    printf("Quantidade de pontos turísticos: %i \n", qntpontosturisticos1);

    printf("\n");

    
    //Carta N°2:
    printf("Dados da carta 2:");
    printf("\n");
    

    printf("Nome: %s \n", nome2);
    printf("População: %i \n", populacao2);
    printf("Área: %f \n", area2);
    printf("PIB: %f \n", PIB2);
    printf("Quantidade de pontos turísticos: %i \n", qntpontosturisticos2);

    printf("\n");
    printf("\n");
    printf("\n");
    return 0;
}
