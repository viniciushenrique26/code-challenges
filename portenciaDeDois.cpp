// João quer saber qual é o n-ésimo valor para potência de dois. Ajude ele nesta tarefa.

// Tarefa
// Escreva um programa que dada a entrada exiba o n-ésimo valor para potência de dois. (utilize laço de repetição)

// Entrada
// Irá receber um inteiro N onde (2 ≤ N ≤ 30).

// Saída
// Seu programa deve imprimir uma única linha, contendo o valor dá n-ésima potência.

// Exemplo 

// Entrada	
// 3
// Saída  
// 8

// Entrada 
// 10
// Saída  
// 1024

#include <iostream>  
#include <math.h> 
#include <iomanip> 

using namespace std;

int main() {
  // Escreva seu código aqui  
  int n; 
  cin >> n; 

  cout << fixed << setprecision(0) << pow(2 , n) << endl;
  return 0;
}