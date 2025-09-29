/*
================================================================================
Projeto: Sistema de Cadastro de Cartas - Super Trunfo de Países (TechNova)

Objetivos do Projeto:
- Implementar um programa em C para cadastrar cartas do jogo Super Trunfo de Países, permitindo a entrada e exibição de informações básicas das cidades.
- Aplicar operadores matemáticos em C para aprimorar as funcionalidades do jogo Super Trunfo de Países.
- Aplicar operadores relacionais e modificadores de tipo em C para refinar o jogo Super Trunfo de Países.

Descrição:
Desenvolvido para a TechNova, este sistema inicial cadastra cartas do Super Trunfo com informações detalhadas sobre cidades. Cada carta possui atributos essenciais (estado, código, nome da cidade, população, PIB, área, pontos turísticos) e propriedades derivadas (densidade populacional e PIB per capita), calculadas automaticamente, enriquecendo a estratégia do jogo. O programa utiliza variáveis, operadores matemáticos e relacionais, além de funções de entrada e saída para garantir praticidade e robustez.
================================================================================
*/

#include <stdio.h>

#define MAX_CARTAS 50

typedef struct {
    char estado[30];
    int codigo;
    char nome[50];
    int populacao;
    double pib;
    double area;
    int pontos_turisticos;
    double densidade_populacional;
    double pib_per_capita;
} CartaCidade;

// Função para calcular propriedades derivadas usando operadores matemáticos e relacionais
void calcularPropriedades(CartaCidade *carta) {
    // Densidade populacional: população / área (se área > 0)
    carta->densidade_populacional = (carta->area > 0) ? ((double)carta->populacao / carta->area) : 0.0;
    // PIB per capita: PIB / população (se população > 0)
    carta->pib_per_capita = (carta->populacao > 0) ? (carta->pib / carta->populacao) : 0.0;
}

// Função para registrar uma carta (entrada de dados)
void registrarCarta(CartaCidade *carta) {
    printf("Estado: ");
    scanf(" %[^\n]", carta->estado);

    printf("Código da cidade: ");
    scanf("%d", &carta->codigo);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", carta->nome);

    printf("População: ");
    scanf("%d", &carta->populacao);

    printf("PIB (em reais): ");
    scanf("%lf", &carta->pib);

    printf("Área (em km²): ");
    scanf("%lf", &carta->area);

    printf("Número de pontos turísticos: ");
    scanf("%d", &carta->pontos_turisticos);

    calcularPropriedades(carta);
}

// Função para exibir uma carta (saída de dados)
void exibirCarta(const CartaCidade *carta) {
    printf("\n-------- Carta da Cidade --------\n");
    printf("Estado: %s\n", carta->estado);
    printf("Código: %d\n", carta->codigo);
    printf("Nome: %s\n", carta->nome);
    printf("População: %d\n", carta->populacao);
    printf("PIB: %.2lf\n", carta->pib);
    printf("Área: %.2lf km²\n", carta->area);
    printf("Pontos turísticos: %d\n", carta->pontos_turisticos);
    printf("Densidade Populacional: %.2lf hab/km²\n", carta->densidade_populacional);
    printf("PIB per capita: %.2lf reais\n", carta->pib_per_capita);
    printf("---------------------------------\n");
}

int main() {
    int n, i;
    CartaCidade cartas[MAX_CARTAS];

    printf("Quantas cartas deseja registrar? (Máximo %d): ", MAX_CARTAS);
    scanf("%d", &n);

    // Uso de operador relacional para validar entrada
    if (n <= 0 || n > MAX_CARTAS) {
        printf("Número inválido!\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        printf("\n== Registrando carta %d ==\n", i + 1);
        registrarCarta(&cartas[i]);
    }

    printf("\nExibindo todas as cartas:\n");
    for (i = 0; i < n; i++) {
        exibirCarta(&cartas[i]);
    }

    return 0;
}
