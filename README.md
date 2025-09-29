# SuperTrunfo de Países em C

## Descrição

Jogo de cartas SuperTrunfo com o tema "Países", desenvolvido em linguagem C. Cada carta representa um país e possui atributos numéricos como população, área territorial, PIB e IDH. O objetivo é comparar atributos das cartas para superar o adversário em cada rodada, até que um jogador fique com todas as cartas.

## Funcionalidades

- Cartas dos países representadas por uma struct.
- Carregamento de cartas a partir de um arquivo CSV.
- Dois jogadores: humano vs humano ou humano vs computador.
- Em cada rodada, o jogador escolhe um atributo para comparar.
- O vencedor da rodada recebe a carta do adversário.
- Interface em modo texto (console).
- Código modular, dividido em funções para criação, distribuição, comparação e controle das rodadas.

## Requisitos

- **Tema:** Países reais do mundo.
- **Atributos:** Cada país possui pelo menos 4 atributos numéricos (população, área territorial, PIB, IDH).
- **Estrutura de Dados:** Utilização de structs para representar as cartas.
- **Jogabilidade:** Dois jogadores, cartas distribuídas igualmente, comparação de atributos, vencedor leva as cartas.
- **Interface:** Modo texto.

## Estrutura dos arquivos

- `main.c`: Código principal e fluxo do jogo.
- `cartas.h` / `cartas.c`: Módulo para manipulação das cartas.
- `paises.csv`: Arquivo com os dados dos países.
- `README.md`: Documentação do projeto.

## Exemplo de estrutura de uma carta

```c
typedef struct {
    char nome[50];
    int populacao;
    float area;
    double pib;
    float idh;
} CartaPais;
```

## Exemplo de entrada do arquivo paises.csv

```
Brasil,214000000,8515767.00,1847000000000.00,0.754
Estados Unidos,331000000,9833520.00,22675271000000.00,0.921
China,1439323776,9596961.00,17734000000000.00,0.768
Japão,125800000,377930.00,4936800000000.00,0.925
Alemanha,83100000,357386.00,4183170000000.00,0.942
```

## Como compilar

```bash
gcc main.c cartas.c -o supertrunfo
```

## Como executar

```bash
./supertrunfo
```

## Melhorias futuras (extras)

- Leitura dinâmica de países e atributos a partir de arquivo.
- Estatísticas do jogo (rodadas, atributos mais escolhidos).
- Implementação de IA para o computador escolher atributos de forma estratégica.
- Animações simples ou mensagens para tornar o jogo mais divertido.

---
Projeto acadêmico desenvolvido para disciplina de programação.

## O que implementar

- Lógica do jogo (distribuição das cartas, rodadas, comparação, vencedor)
- Interface interativa no console
- Estatísticas finais (opcional)
