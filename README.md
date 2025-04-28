
# Protótipo de Movimentos de Xadrez em C

Este é um protótipo simples desenvolvido em C para simular os movimentos de algumas peças do jogo de xadrez. O objetivo do projeto é demonstrar o uso de recursividade, loops avançados e lógica de controle (como o uso de `continue`, `break` e laços aninhados).

## Visão Geral

O protótipo simula os movimentos de quatro peças de xadrez: **Torre**, **Bispo**, **Rainha** e **Cavalo**. Para cada peça, os movimentos são predefinidos, e o programa permite ao usuário escolher qual peça deseja mover, bem como visualizar como ela se move no tabuleiro.

## Funcionalidade

O programa permite que o usuário escolha entre quatro peças e simule os seguintes movimentos:

1. **Torre**: Movimenta-se horizontal ou verticalmente. O programa faz a torre se mover 5 casas para a direita.
2. **Bispo**: Movimenta-se na diagonal. O programa faz o bispo se mover 5 casas para cima e para a direita.
3. **Rainha**: Movimenta-se em todas as direções. O programa faz a rainha se mover 8 casas para a esquerda.
4. **Cavalo**: Movimenta-se em um "L" (duas casas para uma direção e uma casa perpendicular). O programa faz o cavalo executar esse movimento 5 vezes.

Além disso, o programa oferece a opção de **sair** ou **cancelar** a simulação a qualquer momento.

## Funcionalidades do Programa

### Recursividade

A recursividade foi usada para os movimentos da **Torre** e **Bispo**. A cada movimento, a função se chama novamente até que o número total de movimentos seja atingido.

### Loops Avançados

A lógica para o movimento do **Cavalo** foi implementada utilizando loops avançados, com `continue` e `break`, para controlar os movimentos do cavalo em formato de "L".

### Estruturas de Controle

Foi utilizado:
- `for` para o controle de movimentos das peças, especialmente para movimentos com direção predeterminada.
- `while` para o movimento do cavalo.
- `do-while` para o movimento da rainha.

## Como Rodar o Programa

1. Compile o código C usando um compilador como o GCC:
   ```bash
   gcc -o xadrez xadrez.c
   ```

2. Execute o programa:
   ```bash
   ./xadrez
   ```

3. O programa solicitará que você escolha uma peça para mover, e o movimento de cada peça será impresso no console.

## Exemplo de Execução

Quando o programa é executado, ele irá exibir algo semelhante a isso:

```
Bem-vindo ao Protótipo de Xadrez da Jotas Companies

Lembre-se: Este jogo é um protótipo básico. Por enquanto, vamos trabalhar apenas com 3 peças e seus movimentos já predefinidos. Para mais informações, entre em contato conosco.

Escolha sua peça para movimentação: 
1 - TORRE
2 - BISPO
3 - RAINHA
4 - CAVALO
5 - SAIR

Opção: 1
Torre:
Direita
Direita
Direita
Direita
Direita
```

## Explicação do Código

### Função `movimentoTorre`

A função `movimentoTorre` utiliza recursividade para mover a torre 5 casas para a direita. A cada chamada recursiva, o contador é incrementado até que o número de movimentos seja atingido.

### Função `movimentoBispo`

A função `movimentoBispo` utiliza recursividade e loops para mover o bispo 5 casas na diagonal para cima e à direita. A lógica é repetida até que o número de movimentos seja alcançado.

### Função `movimentoRainha`

A função `movimentoRainha` utiliza um loop `do-while` para mover a rainha 8 casas para a esquerda. Esse movimento é repetido até atingir o número predefinido de movimentos.

### Função `Cavalo`

O movimento do **Cavalo** é feito utilizando um loop `while` combinado com `continue` e `break` para controlar os movimentos em "L". O cavalo se move duas casas para baixo e uma para a esquerda, e esse movimento é repetido 5 vezes.

## Estrutura do Código

O código é dividido em funções, cada uma responsável pelo movimento de uma peça:
- `movimentoTorre`: Movimenta a torre 5 casas para a direita.
- `movimentoBispo`: Movimenta o bispo 5 casas na diagonal para cima e à direita.
- `movimentoRainha`: Movimenta a rainha 8 casas para a esquerda.
- `Cavalo`: Movimenta o cavalo 5 vezes em um "L".

A função principal (`main`) contém o menu interativo para que o usuário escolha qual peça movimentar, executando a função correspondente.

## Como Melhorar o Projeto

- **Validação de Entrada**: Atualmente, não há validação de entradas do usuário. Seria interessante garantir que o usuário insira um número válido no menu.
- **Visualização do Tabuleiro**: Uma possível melhoria seria adicionar uma representação visual do tabuleiro de xadrez para mostrar o movimento das peças.

## Conclusão

Este projeto serve como uma excelente introdução ao uso de recursividade e loops avançados em C. Ele mostra como podemos controlar o movimento das peças de xadrez em um ambiente controlado e interativo.

 
