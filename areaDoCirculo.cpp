/*
Faça um Programa que peça o diametro de um círculo, calcule e mostre sua área.
*/ 

#include <iostream>
using namespace std;

int main() {
  // Escreva seu código aqui 
  int diametro,raio,quadrado; 
  cout << "Digite o número do seu diametro: " << endl;
  cin >> diametro;  

  float pi = 3.14; 
  raio = diametro / 2; 
  quadrado = raio * raio; 

  float areaDoCirculo = pi * quadrado; 

  cout << "A área do seu circulo é " << areaDoCirculo << "m2" << endl;
   
  
  return 0;
}