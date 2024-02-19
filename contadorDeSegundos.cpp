// Senku é um garoto muito inteligente e gosta de contar o tempo em segundos. As vezes, quando precisa contar um tempo muito longo, ele pode se perder e errar a conta. Senku quer saber se contou o tempo de um determinado evento em segundos corretamente, para isso ele precisa que você converta o tempo em segundos, que ele calculou, para horas, minutos e segundos.

// Entrada
// Será dado um número inteiro N (1 <= N <= 100000000) que representa o tempo do evento em segundos.

// Saída
// Contém o tempo dado em segundos convertido para horas, minutos e segundos, como nos exemplos abaixo.

// Entrada	
// 4000
  
// Saída
// 1h 6m 40s 

#include <iostream> 
#include <iomanip>
using namespace std;

int main() {
  // Escreva seu código aqui 
  int seg; 
  cin >> seg; 
  int hora = seg / 3600; 
  int minutos = (seg % 3600)/ 60;
  int segundos = seg % 60;
 
  cout << hora << "h " << minutos << "m " << segundos << "s" << endl;
  
}