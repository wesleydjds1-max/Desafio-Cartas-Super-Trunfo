# SuperTrunfo Países - Cadastro de Cartas

A **TechNova** apresenta este projeto como parte do desenvolvimento de um jogo de **SuperTrunfo** com tema "Países". Este programa em **C** permite cadastrar cartas com informações detalhadas sobre cidades, incluindo atributos básicos e propriedades derivadas, como densidade populacional e PIB per capita.

## Objetivo

O objetivo deste projeto é criar um sistema inicial de cadastro de cartas para o jogo Super Trunfo, aplicando conceitos fundamentais de programação em **C**, como:

- Uso de variáveis, operadores e funções.
- Entrada e saída de dados.
- Estruturas (`struct`) para armazenar informações complexas.
- Operadores matemáticos para cálculos derivados.
- Operadores relacionais e modificadores de tipo.

## Funcionamento

Cada carta cadastrada contém as seguintes informações:

- Estado
- Código
- Nome da cidade
- População
- PIB (em bilhões)
- Área (em km²)
- Número de pontos turísticos

O programa também calcula automaticamente:

- **Densidade Populacional** (hab/km²)
- **PIB per Capita**

## Tecnologias Utilizadas

- Linguagem C
- Compilador GCC (ou equivalente)

## Como executar

1. Certifique-se de ter o compilador **GCC** instalado.
2. Baixe este repositório ou copie o arquivo `super_trunfo.c`.
3. Compile o código: ```bash
   gcc super_trunfo.c -o super_trunfo
4. Execute o programa: ./super_trunfo
5. Siga as instruções para cadastrar as cartas.


## Estrutura do Projeto
super_trunfo/
│
├── super_trunfo.c      # Código fonte em C
├── README.md           # Descrição do projeto

## Licença

Este projeto está licenciado sob a Licença MIT.
Você pode usar, modificar e distribuir livremente o código, desde que mantenha os créditos ao autor.

📌 Projeto desenvolvido como exercício de programação em C, focado em lógica, manipulação de dados e cálculos matemáticos.
   ```bash
   gcc super_trunfo.c -o super_trunfo
