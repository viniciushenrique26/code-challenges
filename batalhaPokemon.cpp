// Chegou a hora de você escolher se deve ou não deve travar uma batalha contra um pokémon. Você está em uma região onde as batalhas só são consideradas como justas se você utilizar apenas a principal habilidade de ataque do seu pokémon para levar o oponente a zero pontos de resistência. Um absurdo, não é?! Pois, diante dessa regra, você não quer se desgastar com batalhas que não poderá vencer. Desenvolva um programa que diga quantos ataques você precisaria disparar contra o oponente para desmaiá-lo, sabendo que cada vez que você dispara o ataque principal, o ataque perde 1 unidade de seu poder de dano no próximo disparo.

// Exemplo de simulação:

// Entrada: 100 30

// Execução:

//     1º ataque será de 30, e o oponente ficará com 70 pontos de resistência.
//     2º ataque será de 29, e o oponente ficará com 41 pontos de resistência.
//     3º ataque será de 28, e o oponente ficará com 13 pontos de resistência.
//     4º ataque será de 27, e os pontos de resistência do oponente chegarão ao fim.

// Então você precisaria disparar 4 ataques para desmaiar o oponente.
// Entrada

// A entrada contém o valor E (1 ≤ E ≤ 10000) de pontos de resistência do seu oponente e o valor P (1 ≤ P ≤ 1000) de pontos de dano da habilidade de ataque principal do seu pokémon.
// Saída

// A saída é composta por 1 linha contendo o número de ataques necessários para desmaiar o adversário ou a letra ‘F’, caso não seja possível vencer a batalha.
// Exemplo
// Entrada 	

// 250 20
  
// Saída

// F

// Entrada
// 2000 150

	
// Saida
// 14
  
#include <iostream>
using namespace std;

int main() {
  // Escreva seu código aqui 
 // ataque perde 1 uniade de seu poder de dano no proximo desparo
 
  int resistencia,dano, ataques = 0; 
  cin >> resistencia >> dano; 
  
  
  while ( resistencia > 0) {
    if(dano <= 0){
      cout << 'F' << endl; 
      return 0;
    } 

    resistencia -= dano; 
    dano--; 
    ataques++; 


  }
    cout << ataques << endl;


  
  return 0;
}

  