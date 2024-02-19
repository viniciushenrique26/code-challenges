// Dada uma lista de números, identifique o tamanho da maior subsequência crescente existente.
// Uma subsequência é simplesmente uma sequência de números dentro da lista.

// Entrada
// A entrada consiste de duas linhas:
// Na primeira linha é dado um inteiro N que irá indicar a quantidade de números da sequência.
// Na segunda linha é informada a sequência com N inteiros.

// Saída
// A saída do seu programa deve ser também apenas uma linha, contendo o tamanho da maior subsequência crescente.

// Restrições
// 1 <= N <= 10 4

// Exemplos
// Entrada  
// 10
// 1 2 3 4 5 6 3 2 1 0

// Saída
// 6

// Entrada
// 12
// 10 11 12 1 2 3 0 2 4 6 8 9

// Saída
// 6

// Explicação:
// No primeiro caso, a sequência dada é 1 2 3 4 5 6 3 2 1 0, e temos somente uma subsequência crescente com 6 números:  1 2 3 4 5 6.
// No segundo caso, a sequência dada é  10 11 12 1 2 3 0 2 4 6 8 9,  e temos 3 subsequências crescentes: 10 11 12  1 2 3  0 2 4 6 8 9.
// A resposta é 6 pois a maior subsequência entre as 3 é 0 2 4 6 8 9, contendo 6 números.
// Dicas
// Para este problema você só precisa de conhecimentos básicos de lógica e da sua linguagem de programação.
// Você vai precisar de variáveis, comandos de entrada e saída, desvios condicionais, laço de repetição e expressões lógicas.


#include <iostream>
#include <vector>
using namespace std;

int main() {
    int numero;
    cin >> numero;

    vector<int> sequencia(numero);
    for (int i = 0; i < numero; ++i) {
        cin >> sequencia[i];
    }

    int tamanhoMaximoSequencia = 0; // Comprimento máximo do segmento crescente
    int tamanhoAtualSequencia = 1; // Comprimento atual do segmento crescente

    for (int i = 1; i < numero; ++i) {
        if (sequencia[i] > sequencia[i - 1]) {
            // O próximo número é maior que o anterior, incrementa o contador
            tamanhoAtualSequencia++;
        } else {
            // O próximo número não é maior, reinicia a contagem
            tamanhoMaximoSequencia = max(tamanhoMaximoSequencia, tamanhoAtualSequencia);
            tamanhoAtualSequencia = 1;
        }
    }

    // Verifica se o último segmento é o maior
    tamanhoMaximoSequencia = max(tamanhoMaximoSequencia, tamanhoAtualSequencia);

    cout << tamanhoMaximoSequencia << endl;

    return 0;
}