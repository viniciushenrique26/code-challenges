

// Dada uma lista de N inteiros, encontre a soma de todos eles.

// Entrada

// A entrada é composta de um único caso de teste. A primeira linha contém um inteiro positivo N. As N linhas seguintes contêm cada uma um inteiro X, representando os N números a serem somados.

// Saída

// Seu programa deve produzir uma única linha na saída, contendo a soma de todos os N inteiros.

// Restrições

//     0 ≤ N ≤ 50
//     |X| ≤ 5000


// Exemplo

// Entrada
// 2
// 2
// 3

// Saída
// 5

// Entrada
// 3
// 1
// 5
// 3

// Saída
// 9
 

#include <iostream> 

using namespace std;

int main() {
  // Escreva seu código aqui 
  int contador, numero;
  int soma = 0; 

  cin >> contador; 

  for (int i = 0; i < contador; i++){
    cin >> numero; 
    soma += numero;
  } 
  cout << soma << endl;

  return 0;
}