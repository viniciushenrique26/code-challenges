// Espelho
// Mostrar detalhes

// Por meio de um espelho plano de maneira metafórica e matematicamente falando pode - se espelhar números, com isso, espelhando um número de uma reta numérica irá se obter o seu número oposto.
// Gustavo deseja exemplificar essa técnica utilizando o conjunto de números inteiros. Ajude-o nesta tarefa

// Tarefa

// Escreva um programa que, dado um número inteiro exiba o seu oposto no conjunto de números inteiros.
// Entrada

// Consiste de um inteiro N, onde N != 0. O programa deve executar até que receba como entrada o número 0.
// Saída

// Para cada N seu programa deve imprimir o oposto de N no conjunto de números inteiros.
// Exemplo
// Entrada 	

// 30
// 18
// -5
// 0

	
// Saída
// -30
// -18
// 5


#include <iostream>
using namespace std;

int main() {
  // Escreva seu código aqui 
  int numero; 
     
    while(cin >> numero && numero != 0){
        
        cout << numero * -1 << endl;
      
    }  
    
  
  return 0;
}