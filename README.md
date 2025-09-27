 Desafio Cartas SuperTrunfo

Este projeto é uma implementação simples do jogo SuperTrunfo em Python. O objetivo é comparar cartas com diferentes atributos e tentar vencer o computador em rodadas de escolha de atributos.

## Como funciona

- Cada carta possui três atributos: **ataque,** **defesa** e **magia.**
- No início do jogo, as cartas são embaralhadas e distribuídas entre o jogador e o computador.
- Em cada rodada, o jogador escolhe um atributo para disputar.
- Quem tiver o maior valor no atributo escolhido vence a rodada.
- O jogo termina após três rodadas, e o vencedor é anunciado.

## Exemplo de código

```python
import random

class Carta:
    def __init__(self, nome, ataque, defesa, magia):
        self.nome = nome
        self.ataque = ataque
        self.defesa = defesa
        self.magia = magia

    def __str__(self):
        return f"{self.nome} (Ataque: {self.ataque}, Defesa: {self.defesa}, Magia: {self.magia})"

class SuperTrunfo:
    def __init__(self):
        self.cartas = [
            Carta("Dragão", 9, 7, 8),
            Carta("Mago", 6, 5, 10),
            Carta("Guerreiro", 8, 9, 4),
            Carta("Elfo", 7, 6, 9),
            Carta("Orc", 10, 8, 3),
            Carta("Fada", 5, 4, 10)
        ]
        random.shuffle(self.cartas)
        self.jogador = self.cartas[:3]
        self.computador = self.cartas[3:]
        self.pontos = 0

    def jogar_rodada(self):
        carta_jogador = self.jogador.pop(0)
        carta_computador = self.computador.pop(0)
        print(f"Sua carta: {carta_jogador}")
        atributo = input("Escolha o atributo (ataque, defesa, magia): ").strip().lower()

        if atributo not in ["ataque", "defesa", "magia"]:
            print("Atributo inválido. Você perde esta rodada.\n")
            return -1

        valor_jogador = getattr(carta_jogador, atributo)
        valor_computador = getattr(carta_computador, atributo)
        print(f"Carta do computador: {carta_computador}")
        print(f"Seu {atributo}: {valor_jogador} | Computador {atributo}: {valor_computador}")

        if valor_jogador > valor_computador:
            print("Você venceu a rodada!\n")
            return 1
        elif valor_jogador < valor_computador:
            print("Você perdeu a rodada!\n")
            return -1
        else:
            print("Empate!\n")
            return 0

    def jogar(self):
        pontos = 0
        for _ in range(3):
            pontos += self.jogar_rodada()
        print(f"Pontuação final: {pontos}")
        if pontos > 0:
            print("Parabéns, você venceu o jogo!")
        elif pontos < 0:
            print("O computador venceu o jogo!")
        else:
            print("O jogo terminou empatado!")

if __name__ == "__main__":
    jogo = SuperTrunfo()
    jogo.jogar()
```

## Como executar

1. Certifique-se de ter o Python 3 instalado em seu computador.
2. Salve o código acima em um arquivo chamado `super_trunfo.py`.
3. Execute no terminal com:
   ```bash
   python super_trunfo.py
   ```
4. Siga as instruções exibidas para jogar.

## Licença

Este projeto está licenciado sob a licença MIT.
























































        
