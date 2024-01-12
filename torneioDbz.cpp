// O torneio de artes marciais começou e como sempre as equipes estão sendo formadas. Para evitar confusões como aquelas das últimas temporadas, o novo regulamento do torneio permite apenas que cada equipe composta por 5 membros tenha um KI máximo (soma de todos os KIs dos membros) de 5000. Caso o valor ultrapasse este máximo, a equipe não poderá entrar no torneio.
// Entrada
// A entrada possui cinco números inteiros N1, N2, N3, N4 e N5 (1 ≤ N1, N2, N3, N4, N5 ≤ 5000), que representa o KI de cada membro da equipe.

// Saída
// A saída consiste em imprimir a frase "Acesso proibido", caso a equipe tenha mais de 5000 de KI, ou imprimir a frase "Acesso liberado", em caso contrário.

// Entrada 	

// 300
// 500
// 1000
// 350
// 100
  
// Saida esperada:

// Acesso liberado


// Entrada 

// 2000
// 500
// 1800
// 700
// 800

	
// Saida esperada: 

// Acesso proibido


#include <iostream>
using namespace std;

int main() {
  // Escreva seu código aqui 

  int N1,N2,N3,N4,N5; 
  cin >> N1 >> N2 >> N3 >> N4 >> N5; 
   
  int kis; 

  kis = N1 + N2 + N3 + N4 + N5;


  if (kis <= 5000) {
    cout << "Acesso liberado" << endl; 
  }else {
    cout << "Acesso proibido" << endl;
  }
  
  return 0;
}