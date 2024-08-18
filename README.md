# Prova de Algoritmo e Programação

**Nome:** Luis Eduardo Pinheiro Martins  
**Data:** 19/08/2024  
**Professor:** Felipe Gonçalves dos Santos  

## Introdução

Este README contém a explicação de cada questão da prova de Algoritmo e Programação. Cada questão foi resolvida através de código, e aqui apresento uma breve descrição do problema seguido pela explicação do código utilizado para resolvê-lo.

## Questão 1: Questão sobre Arrays

### Descrição do Problema

Você foi contratado para desenvolver uma função que analisa um conjunto de dados representado por um array de números inteiros. Sua tarefa é implementar uma função em C que receba um array de números inteiros e o tamanho desse array, e retorne a soma dos elementos do array. Em seguida, escreva um programa que leia um número `n` indicando o tamanho do array, leia `n` números inteiros do usuário, e utilize a função para calcular e imprimir a soma dos números.

### Explicação do Código

A função `soma_array` soma todos os elementos de um array e retorna o resultado. No programa principal, o tamanho do array é lido do usuário, seguido pelos elementos do array. A função é chamada com o array e seu tamanho, e o resultado é impresso na tela.

### Exemplo de Entrada e Saída

**Exemplo de Entrada:**
5
1 2 3 4 5

**Exemplo de Saída:**
A soma dos elementos do array é: 15


## Questão 2: Multiplicação de Matrizes

### Descrição do Problema

Implemente uma função em C que multiplique duas matrizes quadradas de tamanho `n x n` e retorne a matriz resultante. Em seguida, escreva um programa que leia o tamanho das matrizes e os elementos das duas matrizes do usuário, calcule a multiplicação e exiba a matriz resultante.

### Explicação do Código

A função `multiplica_matrizes` realiza a multiplicação de duas matrizes quadradas e armazena o resultado em uma terceira matriz. O programa principal lê o tamanho das matrizes e os elementos de ambas as matrizes do usuário, chama a função de multiplicação e imprime a matriz resultante.

### Exemplo de Entrada

**Entrada:**
2
1 2
3 4
5 6
7 8

**Saída:**
19 22
43 50


## Questão 3: Validação de Números de Cartões de Crédito

### Descrição do Problema

Implemente uma função em C que valida um número de cartão de crédito usando o algoritmo de checksum conhecido como Algoritmo de Luhn. A função deve verificar se o número do cartão é válido e identificar o tipo de cartão (American Express, MasterCard ou Visa) com base no número de dígitos e nos dois primeiros dígitos.

### Explicação do Código

O Algoritmo de Luhn é utilizado para validar números de cartões de crédito e detectar erros comuns de digitação. O código realiza os seguintes passos:

- **Número de Dígitos:** A função `num_digitos` conta quantos dígitos há no número do cartão.
- **Dois Primeiros Dígitos:** A função `dois_primeiros` extrai os dois primeiros dígitos do número do cartão.
- **Multiplicação e Soma:** 
  - A função `multiplicar` aplica o algoritmo de Luhn, que dobra cada segundo dígito a partir da direita e soma os dígitos do resultado.
  - A função `somar` soma os dígitos restantes que não foram dobrados.
- **Validação e Identificação:** 
  - A função `valido` verifica se a soma total dos dígitos é um múltiplo de 10.
  - Dependendo dos dois primeiros dígitos e do número total de dígitos, o cartão é classificado como American Express, MasterCard ou Visa.

### Exemplo de Entrada e Saída

**Exemplo de Entrada:**
4532015112830366


**Exemplo de Saída:**
VISA


## Questão 4: Dinheiro

### Descrição do Problema

Implemente um programa em C que calcula o número mínimo de moedas necessárias para dar um determinado valor de troco em centavos. O programa deve pedir ao usuário um valor inteiro positivo e calcular o número de moedas necessárias usando as denominações comuns (1, 5, 10, 25 centavos).

### Explicação do Código

O programa solicita ao usuário o valor do troco e verifica se é positivo. Em seguida, calcula o número mínimo de moedas necessárias utilizando uma abordagem gulosa:

- Usa um array com os valores das moedas em ordem decrescente.
- Para cada valor de moeda, subtrai-o do valor do troco até que o troco seja menor que a moeda atual.
- Conta quantas moedas são usadas e exibe o total.

### Exemplo de Entrada e Saída

**Exemplo de Entrada:**
70

**Exemplo de Saída:**
Total de moedas necessárias: 4


## Questão 5: Scrabble

### Descrição do Problema

Implemente um programa que determine o vencedor entre dois jogadores de Scrabble, calculando a pontuação das palavras fornecidas por cada um. O programa deve:

- Solicitar ao usuário que insira duas palavras, uma para cada jogador.
- Calcular a pontuação de cada palavra com base em um valor fixo para cada letra.
- Informar quem teve a maior pontuação ou se houve um empate.

### Explicação do Código

- **Entrada:** O programa solicita duas palavras, uma de cada jogador.
- **Cálculo da Pontuação:** A função `calculo_pontuacao` calcula a pontuação de cada palavra somando os valores das letras com base em um array predefinido.
- **Resultado:** Compara as pontuações das palavras dos jogadores e imprime se "Jogador 1 vence!", "Jogador 2 vence!" ou "Empate!".

### Exemplo de Entrada e Saída

**Exemplo de Entrada:**
Jogador 1: Question?
Jogador 2: Question!

**Exemplo de Saída:**
Empate!

**Exemplo de Entrada:**
Jogador 1: red
Jogador 2: wheelbarrow

**Exemplo de Saída:**
Jogador 2 vence!

**Exemplo de Entrada:**
Jogador 1: COMPUTER
Jogador 2: science

**Exemplo de Saída:**
Jogador 1 vence!


## Questão 6: Cifra de Substituição

### Descrição do Problema

Implemente um programa que criptografe uma mensagem usando uma cifra de substituição. A chave para a cifra é uma string de 26 caracteres, onde cada caractere representa a letra que deve substituir a letra correspondente no alfabeto.

### Explicação do Código

O programa criptografa um texto usando uma cifra de substituição baseada em uma chave de 26 caracteres. Cada letra do alfabeto é substituída pela letra correspondente na chave. Letras maiúsculas e minúsculas são preservadas, enquanto caracteres não alfabéticos são mantidos inalterados.

### Exemplo de Entrada e Saída

**Exemplo de Entrada:**
HELLO

**Exemplo de Saída:**
FOLLE


## Questão 7: César

### Descrição do Problema

Implemente um programa que criptografe mensagens usando a cifra de César. O programa deve receber uma chave e um texto simples e retornar o texto cifrado.

### Explicação do Código

O programa criptografa uma mensagem usando a cifra de César. Primeiro, ele solicita uma chave de criptografia, que é um número inteiro. Se a chave for 11111, o programa a ajusta para 1. Caso contrário, a chave é reduzida ao intervalo de 0 a 25 (usando o módulo 26). Em seguida, o programa lê o texto simples a ser criptografado. Para cada caractere do texto, o programa aplica a fórmula de César para criptografar a letra, mantendo caracteres não alfabéticos inalterados. Finalmente, o programa exibe o texto cifrado resultante.

### Exemplo de Entrada e Saída

**Exemplo de Entrada:**
Chave de criptografia: 11111
Texto simples: HELLO


**Exemplo de Saída:**
IFMMP


**Exemplo de Entrada:**
Chave de criptografia: 13
Texto simples: Hi there!


**Exemplo de Saída:**
Uv gurer!


## Questão 8: Construindo Casas

### Descrição do Problema

Você deve calcular o tamanho mínimo do lado de um terreno quadrado necessário para construir uma casa, considerando a área que pode ser utilizada conforme o percentual permitido.

### Explicação do Código

O código realiza os seguintes passos:

- **Processamento de Entradas:** Lê as dimensões da casa e o percentual de utilização permitido até encontrar um valor 0.
- **Cálculo da Área da Casa:** Calcula a área da casa com base nas suas dimensões.
- **Determinação da Área do Terreno:** Calcula a área total do terreno necessária para que a área utilizável, com base no percentual permitido, seja suficiente para a casa.
- **Cálculo do Lado do Terreno:** Encontra o comprimento do lado do terreno quadrado, que é a raiz quadrada da área do terreno calculada.
- **Conversão e Saída:** Trunca o valor do lado do terreno para o inteiro mais próximo e imprime o resultado.

### Exemplo de Entrada e Saída

**Exemplo 1:**

**Entrada:**
8 10 20

**Saída:**
20


**Exemplo 2:**

**Entrada:**
1 10 100


**Saída:**
3


**Exemplo 3:**

**Entrada:**
10 3 100


**Saída:**
5


## Questão 9: Bazinga!

### Descrição do Problema

No jogo Pedra-Papel-Tesoura-Lagarto-Spock, você deve determinar o resultado de uma disputa entre dois jogadores, Sheldon e Raj. Com base nas escolhas de cada um, o programa deve imprimir a reação de Sheldon, que pode ser "Bazinga!" se ele vencer, "Raj trapaceou!" se Raj vencer, ou "De novo!" em caso de empate. A entrada inclui várias rodadas de jogo, e o programa deve processar cada uma delas.

### Explicação do Código

O código funciona da seguinte maneira:

- Lê o número de casos de teste (T) da entrada.
- Para cada caso de teste:
  - Lê as escolhas de Sheldon e Raj.
  - Compara as escolhas usando condições pré-definidas que definem as regras do jogo.
  - Determina o resultado com base nas regras:
    - Se a escolha de Sheldon vence a escolha de Raj, imprime "Bazinga!".
    - Se ambas as escolhas são iguais, imprime "De novo!".
    - Caso contrário, imprime "Raj trapaceou!".
  - O resultado de cada caso é formatado como "Caso #t: R", onde t é o número do caso e R é a reação correspondente.

### Exemplo de Entrada e Saída

**Entrada:**
3
papel pedra
lagarto tesoura
Spock Spock


**Saída:**
Caso #1: Bazinga!
Caso #2: Raj trapaceou!
Caso #3: De novo!



