
#include <stdio.h>

int main(){
printf("desafio Cartas Super Trunfo!/n");
}

#define TAM_CODIGO 4
#define TAM_CIDADE 50

// Estrutura para representar uma carta do Super Trunfo
typedef struct {
    char estado;
    char codigo[TAM_CODIGO + 1];
    char nomeCidade[TAM_CIDADE + 1];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
} Carta;


    Carta cartas[2];  // Array para armazenar as informações de duas cartas
    int i;

    // Solicita as informações para cada carta
    for (i = 0; i < 2; i++) {
        printf("Carta %d:\n", i + 1);

        // Estado
        printf("Estado: ");
        scanf(" %c", &cartas[i].estado);

        // Código
        printf("Código da Carta: ");
        scanf("%s", cartas[i].codigo);

        // Nome da Cidade
        printf("Nome da Cidade: ");
        scanf(" %49[^\n]", cartas[i].nomeCidade);

        // População
        printf("População: ");
        scanf("%d", &cartas[i].populacao);

        // Área
        printf("Área (em km²): ");
        scanf("%f", &cartas[i].area);

        // PIB
        printf("PIB: ");
        scanf("%f", &cartas[i].pib);

        // Número de Pontos Turísticos
        printf("Número de Pontos Turísticos: ");
        scanf("%d", &cartas[i].pontosTuristicos);

        printf("\n"); // Linha em branco para separar as cartas
    }

    // Exibe as informações das cartas
    for (i = 0; i < 2; i++) {
        printf("Carta %d:\n", i + 1);
        printf("Estado: %c\n", cartas[i].estado);
        printf("Código: %s\n", cartas[i].codigo);
        printf("Nome da Cidade: %s\n", cartas[i].nomeCidade);
        printf("População: %d\n", cartas[i].populacao);
        printf("Área: %.2f km²\n", cartas[i].area);
        printf("PIB: %.2f bilhões de reais\n", cartas[i].pib);
        printf("Número de Pontos Turísticos: %d\n", cartas[i].pontosTuristicos);
        printf("\n"); // Linha em branco para separar as cartas
    }

    return 0;
}