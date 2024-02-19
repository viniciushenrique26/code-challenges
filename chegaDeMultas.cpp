// Carlos viajou para outro país e alugou um carro, no dia da devolução foi notificado que havia 300 reais em multa por alta velocidade. Após longas conversas percebeu que o velocímetro estava configurado em milhas por horas, então enquanto achava que estava a 80Km/h na verdade estava em 80mph. Lembrando que 1 km/h corresponde a 0,62137 mph.

// Tarefa
// Escreva um programa que converta o valor em milhas/h para Km/h.

// Entrada
// A entrada consiste de um único número N.

// Saída
// Seu programa deve imprimir uma única linha, contendo o valor convertido para Km/h (com duas casas decimais).

// Exemplo
// Entrada	
// 80

// Saída
// 128.75 

#include <iostream> 
#include <iomanip>
using namespace std;

int main() {
  // Escreva seu código aqui 
  int n; 
  cin >> n ; 
 
 
  cout << fixed << setprecision(2) << n / 0.62137 << endl;


  return 0;
}