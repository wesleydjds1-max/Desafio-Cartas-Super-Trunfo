#include <stdio.h>
#include <stdlib.h>

#define MAX_CARTAS 5

// Estrutura da carta
typedef struct {
    char estado[50];
    int codigo;
    char cidade[50];
    long populacao;
    double pib;
    double area;
    int pontos_turisticos;
    double densidade_populacional;
    double pib_per_capita;
} Carta;

// Função para cadastrar uma carta
void cadastrarCarta(Carta *carta) {
    printf("Digite o estado: ");
    scanf(" %[^\n]", carta->estado);

    printf("Digite o código da carta: ");
    scanf("%d", &carta->codigo);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", carta->cidade);

    printf("Digite a população: ");
    scanf("%ld", &carta->populacao);

    printf("Digite o PIB (em bilhões): ");
    scanf("%lf", &carta->pib);

    printf("Digite a área (em km²): ");
    scanf("%lf", &carta->area);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &carta->pontos_turisticos);

    // Cálculos derivados
    carta->densidade_populacional = carta->populacao / carta->area;
    carta->pib_per_capita = (carta->pib * 1e9) / carta->populacao;
}

// Função para exibir uma carta
void exibirCarta(Carta carta) {
    printf("\n--- Carta %d ---\n", carta.codigo);
    printf("Estado: %s\n", carta.estado);
    printf("Cidade: %s\n", carta.cidade);
    printf("População: %ld\n", carta.populacao);
    printf("PIB: %.2f bilhões\n", carta.pib);
    printf("Área: %.2f km²\n", carta.area);
    printf("Pontos Turísticos: %d\n", carta.pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta.densidade_populacional);
    printf("PIB per Capita: %.2f\n", carta.pib_per_capita);
    printf("----------------------\n");
}

int main() {
    Carta cartas[MAX_CARTAS];
    int opcao, i;

    printf("=== Cadastro de Cartas - Super Trunfo Países ===\n");

    for (i = 0; i < MAX_CARTAS; i++) {
        printf("\nCadastro da carta %d:\n", i + 1);
        cadastrarCarta(&cartas[i]);
    }

    printf("\n=== Exibindo Cartas Cadastradas ===\n");
    for (i = 0; i < MAX_CARTAS; i++) {
        exibirCarta(cartas[i]);
    }

    return 0;
}
