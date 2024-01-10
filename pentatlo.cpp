/*
Entrada
Serão dados em uma única linha o número inteiro 'X' de inscrição do candidato (1 <= X <= 1000), seguido de mais 5 notas inteiras N1, N2, N3, N4 e N5 (0 <= N1, N2, N3, N4, N5 <= 10), relativas ao Tiro ao alvo, Natação, Esgrima, Hipismo e Corrida.

Saída
A saída deve imprimir o número de inscrição do atleta seguido de sua média final com uma casa decimal de precisão.

Entrada	
123 5 10 5 10 10

Saída 
123 8.0

*/ 

#include <iostream> 
#include <iomanip> // biblioteca para manipular a formatacao de saida

using namespace std;

int main() {
  // Escreva seu código aqui 

  int X,N1,N2,N3,N4,N5; 
  float media; 
  

 
  cin >> X >> N1 >> N2 >> N3 >> N4 >> N5; 
   

  media = (N1 + N2 + N3 + N4 + N5) / 5.0; 

  cout <<  X  << " " << fixed << setprecision(1) << media << endl ;


  return 0;
}