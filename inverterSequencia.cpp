//  Nathan estava escrevendo uma sequência de matriculas para cadastro na disciplina de programação, após finalizar a atividade ele percebeu que havia ordenado de maneira incorreta pois o primeiro da sequencia deveria ser o ultimo, o segundo o penúltimo e assim por diante. Para não precisar refazer o processo de separação escreva um programa que inverta uma sequencia.

// Entrada

// A primeira linha da entrada contém um inteiro N que indica o número de matrículas (1 ≤ N ≤ 40). A segunda linha contém a sequência de N-matrículas na sequência incorreta.
// Saída

// Seu programa deve imprimir uma única linha, contendo a sequência correta.
// Exemplo 

// Entrada 	
// 3
// 32 44 11
  


// Saída
// 11 44 32

#include <iostream>
using namespace std;

int main() {
  // Escreva seu código aqui 

  int numeroDeMatriculas; 
  cin >> numeroDeMatriculas;  

  int matriculas[numeroDeMatriculas]; 
  

  for (int i = numeroDeMatriculas - 1; i >= 0; i--){
    cin >> matriculas[i];
  }
  for (int i = 0 ; i < numeroDeMatriculas; i++) {
    cout << matriculas[i] << " ";
  }
  
  
  return 0;
}