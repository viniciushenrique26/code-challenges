//  Leia um valor inteiro entre 1 e 12 e imprima o mês correspondente em português.
// Entrada

// A entrada contém um único valor inteiro.
// Saída

// Imprima por extenso o nome do mês correspondente ao número existente na entrada, com a primeira letra em maiúscula.
// Exemplo

//   Entrada
//   4
  
//   Saída:
//   Abril
  
//   Entrada
//   12
  
//   Saída:
//   Dezembro

#include <iostream>
using namespace std;

int main() {
  // Escreva seu código aqui 

  int numero; 
  cin >> numero;
  switch (numero) {
    case 1: 
      cout << "Janeiro" << endl;   
      break;
    case 2: 
      cout << "Fevereiro" << endl;   
      break;
    case 3: 
      cout << "Março" << endl;   
      break;
    case 4: 
      cout << "Abril" << endl;   
      break;
    case 5: 
      cout << "Maio" << endl;   
      break;
    case 6: 
      cout << "Junho" << endl;  
      break; 
    case 7: 
      cout << "Julho" << endl;   
      break;
    case 8: 
      cout << "Agosto" << endl;  
      break; 
    case 9: 
      cout << "Setembro" << endl;   
      break;
    case 10: 
      cout << "Outubro" << endl;  
      break;
    case 11: 
      cout << "Novembro" << endl;  
      break;
    case 12: 
      cout << "Dezembro" << endl;  
      break;  
    default: 
      cout << "Número invalido" << endl; 
    
  }




  return 0;
}