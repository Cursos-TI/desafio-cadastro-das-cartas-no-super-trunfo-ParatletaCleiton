
#include <stdio.h>

int main(){
printf("desafio Cartas Super Trunfo!/n");
}
#define TAMANHO_CÓDIGO 4
#define TAMANHO_CIDADE 50

// Estrutura para armazenar os dados de uma carta
typedef struct {
    char estado;
    char codigo[TAMANHO_CÓDIGO + 1]; // +1 para o nulo
    char cidade[TAMANHO_CIDADE + 1]; // +1 para o nulo
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
} Carta;

// Função para ler os dados de uma carta
void lerDadosCarta(Carta *carta, int numeroCarta) {
    printf("\nCarta %d:\n", numeroCarta);

    printf("Estado: ");
    scanf(" %c", &carta->estado);

    printf("Código: ");
    scanf(" %s", carta->codigo);

    printf("Nome da Cidade: ");
    scanf(" %s", carta->cidade);

    printf("População: ");
    scanf("%d", &carta->populacao);

    printf("Área (em km²): ");
    scanf("%f", &carta->area);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &carta->pib);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &carta->pontosTuristicos);
}

// Função para exibir os dados de uma carta
void exibirDadosCarta(Carta carta, int numeroCarta) {
    printf("\nCarta %d:\n", numeroCarta);
    printf("Estado: %c\n", carta.estado);
    printf("Código: %s\n", carta.codigo);
    printf("Nome da Cidade: %s\n", carta.cidade);
    printf("População: %d\n", carta.populacao);
    printf("Área: %.2f km²\n", carta.area);
    printf("PIB: %.2f bilhões de reais\n", carta.pib);
    printf("Número de Pontos Turísticos: %d\n", carta.pontosTuristicos);
}

int main() {
    Carta carta1, carta2;

    // Ler os dados da primeira carta
    lerDadosCarta(&carta1, 1);

    // Ler os dados da segunda carta
    lerDadosCarta(&carta2, 2);

    // Exibir os dados da primeira carta
    exibirDadosCarta(carta1, 1);

    // Exibir os dados da segunda carta
    exibirDadosCarta(carta2, 2);

    return 0;
}