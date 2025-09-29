
# SuperTrunfo de Países em C

## Descrição
Jogo de cartas SuperTrunfo com tema de países. Cada carta representa um país com atributos numéricos (população, área, PIB, IDH).

## Como funciona

- Cartas são carregadas de um arquivo CSV (`paises.csv`).
- Cada jogador recebe uma quantidade igual de cartas.
- Em cada rodada, um atributo é escolhido para comparação.
- Quem tiver o maior valor leva a carta do adversário.
- O jogo termina quando um jogador fica com todas as cartas.

## Estrutura dos arquivos

- `main.c`: Código principal do jogo.
- `cartas.h` / `cartas.c`: Funções para lidar com cartas.
- `paises.csv`: Lista de países e atributos.
- `README.md`: Explicação do projeto.

## Exemplo de entrada (paises.csv)

```
País,População,Área,PIB,IDH
Brasil,214000000,8515767.00,1847000000000.00,0.754
Estados Unidos,331000000,9833520.00,22675271000000.00,0.921
...
```

## Como compilar

```bash
gcc main.c cartas.c -o supertrunfo
```

## Como rodar

```bash
./supertrunfo
```

## O que implementar

- Lógica do jogo (distribuição das cartas, rodadas, comparação, vencedor)
- Interface interativa no console
- Estatísticas finais (opcional)
