#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa


int main() {


    int codigo, turismo;
    char nome[50];
    int populacao, PIB, área;

    printf("Cadastre sua carta! Digite o nome da cidade para iniciar: \n");
    scanf("%s", &nome);

    printf("Agora Digiite o codigo da cidade: \n");
    scanf("%d", &codigo);

    printf("Agora Digite a população da cidade: \n");
    scanf("%d",  &populacao);

    printf("Agora Digite o tamanho da área da cidade em metros quadrados: \n");
    scanf("%d", &área);

    printf("Digite o PIB: \n");
    scanf("%d", &PIB);
    
    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &turismo);
    
    printf(" MUITO OBRIGADO CARTA CADASTRADA COM SUCESSO! \n" );

    printf(" Nome da cidade: %s", nome);

    printf(" Codigo da cidade: %d", codigo);

    printf(" População da cidade: %d", populacao);

    printf(" O PIB da cidade é: %d", PIB);

    printf(" A área da cidades em metros quadrados: %d", área);

    printf(" O numero de pontos turistico na cidade são de: %d", turismo);
    

      return 0; }


    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

      
    

