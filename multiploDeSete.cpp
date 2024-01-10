// Chegou a hora de testar seus dotes de programação, escreva um algoritmo que identifique múltiplos de 7.

// Entrada
// Como entrada terá um inteiro N onde N < 1000

// Saída
// Informe se é múltiplo de 7

// Exemplo:

// Entrada	
// 70

// Saída  
// É MULTIPLO DE 7

// Entrada
// 13

// Saída
// ESSE NÃO É 


#include <iostream> 

using namespace std;

int main() {
  // Escreva seu código aqui 
  int entrada;  
  int multiplo = 7;  
  int calculo; 
  
  cin >> entrada; 

  calculo = entrada % multiplo; 
  if(calculo == 0) 
  { 
    cout << "É MULTIPLO DE 7" << endl;
  }
  else 
  {
    cout << "ESSE NÃO É" << endl;
  }
    


  return 0;
}