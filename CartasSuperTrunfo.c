#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    int populacaoCidade1, populacaoCidade2, numeroPontosCidade1, numeroPontosCidade2;
    char estadoCidade1, estadoCidade2, nomeCidade1[50], nomeCidade2[50];
    char codCidade1[6], codCidade2[6];
    float areaCidade1, areaCidade2, pibCidade1, pibCidade2;

    // Cadastro das Cartas:
    // Carta 1
    printf("Digite os dados da Carta 1\n");
    
    printf("Código do Estado(Uma letra de 'A' a 'H'): "); // A letra do estado deve ser um caractere de 'A' a 'H'
    scanf(" %c", &estadoCidade1); //leitura de um caractere
    
    printf("Código da cidade(letra do estado seguido de um número de 01 a 04): "); // O código da cidade é formado pela letra do estado seguida de um número de 01 a 04
    scanf("%s", &codCidade1); //leitura de uma string
    
    printf("Nome da cidade: "); // O nome da cidade é uma string de até 50 caracteres
    scanf("%s", &nomeCidade1); //leitura de uma string
    
    printf("População: "); // A população é um número inteiro
    scanf("%d", &populacaoCidade1); //leitura de um inteiro
    
    printf("Área: "); // A área é um número com ponto flutuante
    scanf("%f", &areaCidade1); //leitura de um float
    
    printf("PIB: "); // O PIB é um número com ponto flutuante
    scanf("%f", &pibCidade1); //leitura de um float
    
    printf("Número de pontos turísticos: "); // O número de pontos turísticos é um número inteiro
    scanf("%d", &numeroPontosCidade1); //leitura de um inteiro


    // Carta 2
    printf("\nDigite os dados da Carta 2\n");

    printf("Código do Estado(Uma letra de 'A' a 'H'): "); // A letra do estado deve ser um caractere de 'A' a 'H'
    scanf(" %c", &estadoCidade2); //leitura de um caractere
    
    printf("Código da cidade(letra do estado seguido de um número de 01 a 04): "); // O código da cidade é formado pela letra do estado seguida de um número de 01 a 04
    scanf("%s", &codCidade2); //leitura de uma string
    
    printf("Nome da cidade: "); // O nome da cidade é uma string de até 50 caracteres
    scanf("%s", &nomeCidade2); //leitura de uma string
    
    printf("População: "); // A população é um número inteiro
    scanf("%d", &populacaoCidade2); //leitura de um inteiro
    
    printf("Área: "); // A área é um número com ponto flutuante
    scanf("%f", &areaCidade2); //leitura de um float
    
    printf("PIB: "); // O PIB é um número com ponto flutuante
    scanf("%f", &pibCidade2); //leitura de um float
    
    printf("Número de pontos turísticos: "); // O número de pontos turísticos é um número inteiro
    scanf("%d", &numeroPontosCidade2); //leitura de um inteiro

    // Exibição das Cartas
    //Carta 1
    printf("\nCarta 1\n");
    printf("Estado: %c\n", estadoCidade1);
    printf("Código da cidade: %s\n", codCidade1);
    printf("Nome da cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacaoCidade1);
    printf("Área: %.2fKm²\n", areaCidade1);
    printf("PIB: R$%.2f\n", pibCidade1);
    printf("Número de pontos turísticos: %d\n", numeroPontosCidade1);

    // Carta 2
    printf("\nCarta 2\n");
    printf("Estado: %c\n", estadoCidade2);
    printf("Código da cidade: %s\n", codCidade2);
    printf("Nome da cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacaoCidade2);
    printf("Área: %.2fKm²\n", areaCidade2);
    printf("PIB: R$%.2f\n", pibCidade2);
    printf("Número de pontos turísticos: %d\n", numeroPontosCidade2);

    return 0;
}