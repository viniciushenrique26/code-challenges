//  Jorge e Tiago resolveram por em prática suas habilidades em programação para ajudar a tia Ana em sua cantina. Durante um dia de expediente tia Ana precisa fazer várias operações matemáticas, Jorge e Tiago desejam acelerar este processo criando uma calculadora simples. Infelizmente eles ainda não conseguiram, você pode dar uma forcinha?

// Tarefa

// Escreva um programa que, dada a operação e os valores, retorne o resultado.
// Entrada

// A entrada consiste de um carácter C que pode ser '+', '-', '/' ou '*', representando adição, subtração, divisão e multiplicação respectivamente, e os números A e B para serem calculados.

// Caso a operação seja '/' utilize precisão de 1 dígito, e você pode assumir que B sempre será diferente de 0.

// Saída

// Seu programa deve imprimir uma única linha, contendo o resultado da operação.
// Exemplo
// Entrada 	
// + 10 2
	
// Saída
// 12



// Entrada 
// / 5 3
  
// Saída
// 1.7
  


// Entrada 
// - 7 10
  
// Saída
// -3
  

// Entrada 
// * 2 7
	
// Saída
// 14
   

#include <iostream> 
#include <iomanip>
using namespace std;

int main() {
  // Escreva seu código aqui  

  char c; 
  cin >> c;
  float n1,n2; 
  cin >> n1 >> n2; 
  
  
  if(c == '+') { 
   cout << n1 + n2 << endl;
  }else if (c == '-'){
    cout << n1 - n2 << endl;
  }else if (c == '*') {  
    cout << n1 * n2 << endl;
  }else if (c == '/' ) {
    cout << fixed << setprecision(1) << n1 / n2 << endl;
  }
  
  return 0;
}