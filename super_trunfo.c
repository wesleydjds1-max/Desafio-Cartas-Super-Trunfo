#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CARTAS 100
#define MAX_NOME 50

typedef struct {
    char nome[MAX_NOME];
    int populacao;
    float area;
    double pib;
    float idh;
} CartaPais;

// Função para carregar cartas de um arquivo CSV
int carregarCartas(CartaPais baralho[], const char *nomeArquivo) {
    FILE *fp = fopen(nomeArquivo, "r");
    if (!fp) {
        printf("Erro ao abrir o arquivo '%s'.\n", nomeArquivo);
        return -1;
    }

    int i = 0;
    while (fscanf(fp, "%49[^,],%d,%f,%lf,%f\n",
                  baralho[i].nome,
                  &baralho[i].populacao,
                  &baralho[i].area,
                  &baralho[i].pib,
                  &baralho[i].idh) == 5) {
        i++;
        if (i >= MAX_CARTAS) break;
    }
    fclose(fp);
    return i;
}

// Função para exibir uma carta
void exibirCarta(CartaPais carta) {
    printf("País: %s\n", carta.nome);
    printf("População: %d\n", carta.populacao);
    printf("Área: %.2f km²\n", carta.area);
    printf("PIB: %.2lf USD\n", carta.pib);
    printf("IDH: %.2f\n", carta.idh);
    printf("------------------------\n");
}

// Função para comparar cartas por atributo
int compararCartas(CartaPais c1, CartaPais c2, int atributo) {
    switch (atributo) {
        case 1: // População
            return (c1.populacao > c2.populacao) ? 1 : (c1.populacao < c2.populacao) ? -1 : 0;
        case 2: // Área
            return (c1.area > c2.area) ? 1 : (c1.area < c2.area) ? -1 : 0;
        case 3: // PIB
            return (c1.pib > c2.pib) ? 1 : (c1.pib < c2.pib) ? -1 : 0;
        case 4: // IDH
            return (c1.idh > c2.idh) ? 1 : (c1.idh < c2.idh) ? -1 : 0;
        default:
            return 0;
    }
}

// Função para mostrar os atributos disponíveis
void mostrarAtributos() {
    printf("Escolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - IDH\n");
}

int main() {
    CartaPais baralho[MAX_CARTAS];
    int totalCartas = carregarCartas(baralho, "paises.csv");

    if (totalCartas <= 0) {
        printf("Nenhuma carta carregada.\n");
        return 1;
    }

    // Distribuição simples: metade para cada jogador (modo demonstração)
    int metade = totalCartas / 2;
    int cartasJogador1 = metade;
    int cartasJogador2 = totalCartas - metade;

    int idx1 = 0, idx2 = metade;

    printf("SuperTrunfo de Países - Demonstração\n");
    printf("Total de cartas: %d\n\n", totalCartas);

    // Exemplo de rodada única
    printf("Jogador 1:\n");
    exibirCarta(baralho[idx1]);
    printf("Jogador 2:\n");
    exibirCarta(baralho[idx2]);

    int atributo;
    mostrarAtributos();
    printf("Jogador 1, escolha o atributo (1-4): ");
    scanf("%d", &atributo);

    int resultado = compararCartas(baralho[idx1], baralho[idx2], atributo);
    if (resultado == 1)
        printf("Jogador 1 vence a rodada!\n");
    else if (resultado == -1)
        printf("Jogador 2 vence a rodada!\n");
    else
        printf("Empate!\n");

    // Você pode expandir para rodadas, controle de cartas e fim de jogo
    return 0;
}
