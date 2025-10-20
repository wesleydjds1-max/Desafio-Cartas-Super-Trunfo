## 🃏 SuperTrunfo Países - Cadastro de Cartas

[![License: MIT](https://img.shields.io/badge/License-MIT-green.svg)](https://opensource.org/licenses/MIT)
[![Language: C](https://img.shields.io/badge/Linguagem-C-blue.svg)]
[![Status: Academic Project](https://img.shields.io/badge/Status-Academic%20Project-orange.svg)]

📚 Projeto acadêmico desenvolvido como parte das atividades da disciplina de **Introdução à Programação de Computadores** da minha universidade.  
O objetivo é criar um sistema inicial de cadastro de cartas para um jogo de **SuperTrunfo** com tema "Países", aplicando conceitos fundamentais de programação.

---

## 📖 Sumário
- [Sobre o Projeto](#-sobre-o-projeto)  
- [Objetivos](#-objetivos)  
- [Funcionamento](#-funcionamento)  
- [Tecnologias Utilizadas](#-tecnologias-utilizadas)  
- [Como Executar](#-como-executar)  
- [Contribuição](#-contribuição)  
- [Licença](#-licença)  

---

## 📌 Sobre o Projeto

A **TechNova**, empresa fictícia deste exercício acadêmico, está desenvolvendo um jogo de Super Trunfo com tema "Países".  
Este programa em **C** permite cadastrar cartas contendo informações detalhadas sobre cidades, incluindo atributos básicos e propriedades derivadas como densidade populacional e PIB per capita.

---

## 🎯 Objetivos  

- Praticar o uso de **estruturas de dados básicas**, **tipos numéricos** e **operações matemáticas**;  
- Implementar cálculos com **conversão de tipos** (casting) em C;  
- Aplicar **operadores relacionais** e **conceitos de comparação lógica**;  
- Desenvolver um sistema funcional e interativo de comparação entre cartas.  

---

## ⚙️ Funcionamento  

O programa solicita ao usuário que cadastre as informações de **duas cartas** do Super Trunfo:  

| Atributo | Tipo | Descrição |
|-----------|------|-----------|
| Estado | `char` | Letra de 'A' a 'H' representando o estado |
| Código da Carta | `char[]` | Letra do estado + número (ex: A01, B02) |
| Nome da Cidade | `char[]` | Nome completo da cidade |
| População | `unsigned long int` | Número de habitantes |
| Área (km²) | `float` | Área da cidade |
| PIB (bilhões R$) | `float` | Produto Interno Bruto |
| Pontos Turísticos | `int` | Quantidade de pontos turísticos |

Após o cadastro, o programa calcula automaticamente:

- **Densidade Populacional:** `população / área`  
- **PIB per Capita:** `(PIB * 1.000.000.000) / população`  
- **Super Poder:**  

---

## 🛠 Tecnologias Utilizadas

- **Linguagem C;**  
- **Compilador GCC (ou equivalente).**
- **Ambiente sugerido: Replit, VS Code ou Dev-C++.**  

---

## 🚀 Como Executar  

1. **Baixe o arquivo principal:**  
   `super_trunfo.c`

2. **Compile o programa:**  
 ```bash```
 ```gcc super_trunfo.c -o super_trunfo```
3. **Execute:**                                       
 ```bash```
 ```./super_trunfo```

---

## 🤝 Contribuição

Contribuições são bem-vindas!

Para contribuir:

1. Faça um fork deste repositório.
2. Crie uma branch para sua modificação:
  ```bash```
  ```git commit -m "Minha contribuição"```
3. Commit suas alterações:
   ```bash```
   ```git push origin minha-contribuicao```
5. Push para a branch:
   ```bash```
   ```git push origin minha-contribuicao```
6. Abra um Pull Request.
  
---

## 📜 Licença
Este projeto está licenciado sob a Licença MIT.
Você pode usar, modificar e distribuir livremente o código, desde que mantenha os créditos ao autor.

---

## 🧩 Créditos

Projeto desenvolvido como exercício acadêmico para consolidação dos conceitos fundamentais de Programação em C,
incluindo manipulação de dados, cálculos matemáticos e lógica de comparação.

🎓 _“A prática leva à maestria, e o SuperTrunfo leva à diversão!”_

