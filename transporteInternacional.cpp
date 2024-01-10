/* 

    A Betalândia é um país que apenas recentemente se abriu para o comércio exterior e está preparando agora sua primeira grande exportação. A Sociedade Betalandesa de Comércio (SBC) ficou encarregada de conduzir a exportação e determinou que, seguindo os padrões internacionais, a carga será transportada em contêineres, que são, por sua vez, colocados em grandes navios para o transporte internacional.

     Todos os contêineres betalandeses são idênticos, medindo A metros de largura, B metros de comprimento e C metros de altura. Um navio porta-contêineres pode ser visto como um retângulo horizontal de X metros de largura e Y metros de comprimento, sobre o qual os contêineres são colocados. Nenhuma parte de contêiner pode ficar para fora do navio. Além disso, para possibilitar a travessia de pontes, a altura máxima da carga no navio não pode ultrapassar Z metros.


    imagem de ilustração 
    https://congenial.com.br/img-problem/wanderley_transporte-e1631625803438.jpg  

    Devido a limitações do guindaste utilizado, os contêineres só podem ser carregados alinhados com o navio. Ou seja, os contêineres só podem ser colocados sobre o navio de tal forma que a largura e o comprimento do contêiner estejam paralelos à largura e ao comprimento do navio, respectivamente.

A SBC está com problemas para saber qual a quantidade máxima de contêineres que podem ser colocados no navio e pede sua ajuda. Sua tarefa, neste problema, é determinar quantos contêineres podem ser carregados no navio respeitando as restrições acima.


Entrada
A entrada consiste de duas linhas. A primeira linha contém três inteiros A, B e C que representam as dimensões dos contêineres, enquanto a segunda linha contém outros três inteiros X, Y e Z que representam as dimensões do navio.


Saída
Seu programa deve imprimir apenas uma linha contendo um inteiro que indica a quantidade máxima de contêineres que o navio consegue transportar.


Restrições
1 ≤ A, B, C, X, Y, Z ≤ 106
É garantido que a maior resposta será menor ou igual a 106

Exemplos
Entrada
1 1 1
1 1 1

Saída
1

Entrada
1 2 5
9 6 11

Saída
54

Entrada
1 2 12
6 9 10

Saída
0

*/ 


#include <iostream> 


using namespace std;

int main() {
  // Escreva seu código aqui  '
  long larguraConteiner, comprimentoConteiner, alturaConteiner; 
  long larguraNavio, comprimentoNavio, alturaNavio; 
  long quantidadeLargura, quantidadeComprimento, quantidadeAltura; 
  long result; 

  cin >> larguraConteiner >> comprimentoConteiner >> alturaConteiner; 
  cin >> larguraNavio >> comprimentoNavio >> alturaNavio; 

  quantidadeLargura = larguraNavio / larguraConteiner; 
  quantidadeComprimento = comprimentoNavio / comprimentoConteiner; 
  quantidadeAltura = alturaNavio / alturaConteiner; 

  result = quantidadeLargura * quantidadeComprimento * quantidadeAltura; 
  
  
  cout << result << endl;
  



  return 0;
}

