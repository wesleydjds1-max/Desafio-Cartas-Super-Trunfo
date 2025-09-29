
# Desafio Cartas SuperTrunfo

Este projeto é uma implementação simples do jogo SuperTrunfo em C. O objetivo é comparar cartas com diferentes atributos e tentar vencer o computador em rodadas de escolha de atributos.

## Como funciona

- Cada carta possui três atributos: **ataque,** **defesa** e **magia.**
- No início do jogo, as cartas são embaralhadas e distribuídas entre o jogador e o computador.
- Em cada rodada, o jogador escolhe um atributo para disputar.
- Quem tiver o maior valor no atributo escolhido vence a rodada.
- O jogo termina após três rodadas, e o vencedor é anunciado.

## Como executar

1. Certifique-se de ter o compilador GCC instalado em seu computador.
2. Salve o código do jogo em um arquivo chamado `super_trunfo.c`.
3. Compile o programa no terminal com:
   ```bash
   gcc super_trunfo.c -o super_trunfo
   ```
4. Execute o jogo:
   ```bash
   ./super_trunfo
   ```
5. Siga as instruções exibidas para jogar.

## Licença

Este projeto está licenciado sob a licença MIT.
