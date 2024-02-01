// A empresa resolveu conceder um aumento de salários a todos seus funcionários de acordo com a tabela abaixo:
// ___________________________________________ 

// Salário	Percentual de Reajuste: 
// 0 - 400.00	= 15%
// 400.01 - 800.00	 = 12%
// 800.01 - 1200.00 = 10%
// 1200.01 - 2000.00 = 7%
// Acima de 2000.00 = 4% 

// ____________________________________________ 

// Tarefa
// Faça um programa que leia o salário de um funcionário, calcule e mostre o novo salário, o valor de reajuste ganho e o índice reajustado, em percentual.

// Entrada
// A entrada contém apenas um valor de ponto flutuante, com duas casas decimais.

// Saída
// Imprima 3 linhas na saída: o novo salário, o valor ganho de reajuste e o percentual de reajuste ganho, conforme exemplo abaixo. 

// ___________________________________________ 

// Exemplo: 

// Entrada	 
// 400.00 

// Saída
// Novo salario: 460.00
// Reajuste ganho: 60.00
// Em percentual: 15 %

#include <iostream> 
#include <iomanip>
using namespace std;

int main() {
  // Escreva seu código aqui 

  //salario funcionario 
  float salario,ganho,salarioFinal; 
  cin >> salario; 
 

  if(salario <= 400.00) {
    ganho = 0.15 * salario; 
    salarioFinal = salario + ganho; 
    cout << "Novo salario: " << fixed << setprecision(2) << salarioFinal << endl; 
    cout <<  "Reajuste ganho: " << fixed << setprecision(2) << ganho << endl; 
    cout <<  "Em percentual: " << "15" << " %" << endl; 
  }else if (salario > 400.00 && salario <= 800.00) {
    ganho = 0.12 * salario; 
    salarioFinal = salario + ganho; 
    cout << "Novo salario: " << fixed << setprecision(2) << salarioFinal << endl; 
    cout <<  "Reajuste ganho: " << fixed << setprecision(2) << ganho << endl; 
    cout <<  "Em percentual: " << "12" << " %" << endl; 
  }else if (salario >= 800.01 && salario <= 1200.00) {
    ganho = 0.10 * salario; 
    salarioFinal = salario + ganho; 
    cout << "Novo salario: " << fixed << setprecision(2) << salarioFinal << endl; 
    cout <<  "Reajuste ganho: " << fixed << setprecision(2) << ganho << endl; 
    cout <<  "Em percentual: " << "10" << " %" << endl; 
  }else if (salario >= 1200.01 && salario <= 2000.00) {
    ganho = 0.07 * salario; 
    salarioFinal = salario + ganho; 
    cout << "Novo salario: " << fixed << setprecision(2) << salarioFinal << endl; 
    cout <<  "Reajuste ganho: " << fixed << setprecision(2) << ganho << endl; 
    cout <<  "Em percentual: " << "7" << " %" << endl; 
  }else {
    ganho = 0.04 * salario; 
    salarioFinal = salario + ganho; 
    cout << "Novo salario: " << fixed << setprecision(2) << salarioFinal << endl; 
    cout <<  "Reajuste ganho: " << fixed << setprecision(2) << ganho << endl; 
    cout <<  "Em percentual: " << "4" << " %" << endl; 
  }

  //Novo salario: 460.00
  //Reajuste ganho: 60.00
  //Em percentual: 15 %
  return 0;
}