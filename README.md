[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/4nTxA4HT)
## Enunciado

O arquivo `main.c` contém um programa que:

1. Recebe como argumentos de linha de comando um tamanho `N` e um valor `X`
2. Aloca dinamicamente um vetor de `N` inteiros
3. Preenche o vetor com valores aleatórios entre 0 e 99
4. Percorre o vetor contando quantas vezes `X` aparece (frequência)
5. Imprime o resultado

O programa já está completo e funcional. O objetivo deste exercício é **analisar o comportamento da complexidade na prática**, medindo o tempo de execução para diferentes valores de `N`.

### Como compilar e executar

```bash
make
./prog <N> <X>
```

Exemplo:

```bash
./prog 1000000 7
N=1000000  X=7  frequencia=9926
```

### Questões de análise

Considere `n = N` como o tamanho da entrada.

1. Analise o código de `main.c` e determine a classe de complexidade do algoritmo de contagem de frequência. Justifique sua resposta escrevendo a função **T(n)** que conta o número exato de comparações realizadas em função de `n`.

2. Escreva a função **T(n)** usando a notação assintótica (Big O) e explique o que isso significa em termos de comportamento do tempo de execução à medida que `N` cresce.

3. Leia atentamente as instruções a seguir para realizar as medições experimentais do tempo de execução para diferentes valores de `N` e preencha a tabela com os tempos obtidos.

#### O comando `time`

O comando `time` do bash mede o tempo de execução de qualquer programa. Basta colocá-lo antes do comando que deseja medir:

```bash
time ./prog 1000000 7
```

A saída será algo como:

```
N=1000000  X=7  frequencia=9926

real    0m0,084s
user    0m0,080s
sys     0m0,004s
```

Os três campos significam:

- **real:** tempo total decorrido desde o início até o fim do programa (o que interessa para este exercício)
- **user:** tempo que a CPU passou executando código do seu programa
- **sys:** tempo que a CPU passou executando chamadas ao sistema operacional

Use sempre o valor de **real** para preencher a tabela. Converta para milissegundos: `0m0,084s = 84 ms.

#### Valores de N para medir

Execute o programa para cada valor de N abaixo, sempre com **X=7**, e anote o tempo real em milissegundos.

| N           | Tempo (ms) |
| :---------- | :--------- |
| 100.000     |            |
| 200.000     |            |
| 500.000     |            |
| 1.000.000   |            |
| 2.000.000   |            |
| 3.000.000   |            |
| 4.000.000   |            |
| 5.000.000   |            |
| 6.000.000   |            |
| 7.000.000   |            |
| 8.000.000   |            |
| 9.000.000   |            |
| 10.000.000  |            |
| 12.000.000  |            |
| 14.000.000  |            |
| 16.000.000  |            |
| 18.000.000  |            |
| 20.000.000  |            |
| 25.000.000  |            |
| 30.000.000  |            |
| 35.000.000  |            |
| 40.000.000  |            |
| 45.000.000  |            |
| 50.000.000  |            |
| 55.000.000  |            |
| 60.000.000  |            |
| 65.000.000  |            |
| 70.000.000  |            |
| 80.000.000  |            |
| 90.000.000  |            |
| 100.000.000 |            |


#### Gráfico

Com os dados coletados, plote um gráfico com:

- **Eixo X:** valor de N
- **Eixo Y:** tempo de execução em milissegundos

Você pode usar qualquer ferramenta: Excel, Google Sheets, Python (matplotlib), etc. Após gerar o gráfico, analise se o gráfico corresponde à função T(n) que você determinou na questão 1 e 2, ou seja, se o comportamento do tempo de execução é coerente com a complexidade teórica do algoritmo.

---

### Arquivos editáveis (edição de outros arquivos resultará em nota 0)
- Nenhum arquivo deve ser editado. A entrega consiste em você submeter o gráfico gerado no repositório do Github no formato pdf ou png. 

### Notas
- Você pode usar qualquer ferramenta offline do computador para editar e compilar seu código
- Não é permitido acessar qualquer página ou ferramenta de Inteligência Artificial para realizar o exercício
- Compile com `make` e execute com `time ./prog <N> <X>`
- Não há uma resposta correta para o gráfico, mas ele deve ser coerente com a complexidade do algoritmo. Se a curva for linear, isso indica uma complexidade O(n). Se for quadrática, indica O(n^2), e assim por diante. Coloque legendas e títulos para facilitar a interpretação do gráfico.
