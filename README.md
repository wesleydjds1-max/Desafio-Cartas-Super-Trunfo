README.md
# Desafio Cartas SuperTrunfo - Países

Este projeto é uma implementação simples do jogo **SuperTrunfo** em **C**.  
O objetivo é comparar cartas de países com diferentes atributos e tentar vencer o computador em rodadas de escolha de atributos.

## Como funciona

- Cada carta representa um país e possui três atributos: **população**, **PIB** e **área**.
- No início do jogo, as cartas são embaralhadas e distribuídas entre o jogador e o computador.
- Em cada rodada, o jogador escolhe um atributo para disputar.
- Quem tiver o maior valor no atributo escolhido vence a rodada.
- O jogo termina após três rodadas, e o vencedor é anunciado.

## Como executar

### Pré-requisitos
- Compilador C instalado (ex: `gcc`).

### Passos
1. Clone ou baixe o projeto.
2. Compile o programa:
   ```bash
   gcc main.c -o super_trunfo


Execute o programa:

./super_trunfo

Licença

Este projeto está licenciado sob a licença MIT.


---

### main.c

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define NUM_CARTAS 6

typedef struct {
    char nome[50];
    long populacao;
    double pib; // em trilhões
    double area; // em km²
} Carta;

// Função para embaralhar as cartas
void embaralhar(Carta cartas[], int n) {
    for (int i = n - 1; i > 0; i--) {
        int j = rand() % (i + 1);
        Carta temp = cartas[i];
        cartas[i] = cartas[j];
        cartas[j] = temp;
    }
}

// Função para jogar uma rodada
int jogar_rodada(Carta jogador, Carta computador) {
    printf("\nSua carta: %s (População: %ld, PIB: %.2lf, Área: %.2lf)\n",
           jogador.nome, jogador.populacao, jogador.pib, jogador.area);

    char atributo[20];
    printf("Escolha o atributo (populacao, pib, area): ");
    scanf("%s", atributo);

    double valor_jogador = 0, valor_computador = 0;

    if (strcmp(atributo, "populacao") == 0) {
        valor_jogador = jogador.populacao;
        valor_computador = computador.populacao;
    } else if (strcmp(atributo, "pib") == 0) {
        valor_jogador = jogador.pib;
        valor_computador = computador.pib;
    } else if (strcmp(atributo, "area") == 0) {
        valor_jogador = jogador.area;
        valor_computador = computador.area;
    } else {
        printf("Atributo inválido. Você perde esta rodada.\n");
        return -1;
    }

    printf("Carta do computador: %s (População: %ld, PIB: %.2lf, Área: %.2lf)\n",
           computador.nome, computador.populacao, computador.pib, computador.area);

    printf("Seu %s: %.2lf | Computador %s: %.2lf\n", atributo, valor_jogador, atributo, valor_computador);

    if (valor_jogador > valor_computador) {
        printf("Você venceu a rodada!\n");
        return 1;
    } else if (valor_jogador < valor_computador) {
        printf("Você perdeu a rodada!\n");
        return -1;
    } else {
        printf("Empate!\n");
        return 0;
    }
}

int main() {
    srand(time(NULL));

    Carta cartas[NUM_CARTAS] = {
        {"Brasil", 213000000, 1.44, 8516000},
        {"China", 1440000000, 14.34, 9597000},
        {"Estados Unidos", 331000000, 21.43, 9834000},
        {"Alemanha", 83000000, 4.00, 357000},
        {"Japão", 126000000, 5.08, 378000},
        {"Austrália", 25000000, 1.39, 7692000}
    };

    embaralhar(cartas, NUM_CARTAS);

    Carta jogador[3] = {cartas[0], cartas[1], cartas[2]};
    Carta computador[3] = {cartas[3], cartas[4], cartas[5]};

    int pontos = 0;
    for (int i = 0; i < 3; i++) {
        printf("\n=== Rodada %d ===\n", i + 1);
        pontos += jogar_rodada(jogador[i], computador[i]);
    }

    printf("\nPontuação final: %d\n", pontos);
    if (pontos > 0) {
        printf("Parabéns, você venceu o jogo!\n");
    } else if (pontos < 0) {
        printf("O computador venceu o jogo!\n");
    } else {
        printf("O jogo terminou empatado!\n");
    }

    return 0;
}






















































        
