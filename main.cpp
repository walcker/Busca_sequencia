#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <string>
#include <sstream>
#include <fstream>
#include <iostream>
#include <new>
#include <random>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    //Permite usar acentos
    setlocale(LC_ALL,"");

    //Gerando os 6 números aleatórios
  random_device rd; // obtain a random number from hardware
  mt19937 gen(rd()); // seed the generator
  uniform_int_distribution<> distr(01, 60); // define the range

  //Criando vetor dos números sorteados e aposta
  vector<int> sorteio;
  vector<int> aposta;

    //Declarando variáveis
    int aux;

    //Criando números aleatórios e colocando no vetor
  for(int i = 0 ;i < 6; i++){
        sorteio.push_back(distr(gen));
  }

  //vetor de apostas do usuário
  for(int i = 0 ;i < 6; i++){
    int valor;
    cout << "Entre com o número apostado " << i << endl;
    cin >> valor;
        aposta.push_back(valor);
  }

  //Verifica quantos números acertou
  for(int i = 0; i < aposta.size(); i++){
    for(int j = 0; j < sorteio.size(); j++){
      if(aposta[i] == sorteio[j]){
        aux++;
      }
    }
  }

  //Mostrando valores sorteados
  cout << "Valores sorteados: ";
  for(int i = 0 ;i < 6; i++){
        cout << sorteio[i] << " ";
  }
  cout << endl;

  //Mostrando valores apostados
  cout << "Valores apostados: ";
  for(int i = 0 ;i < 6; i++){
        cout << aposta[i] << " ";
  }
  cout << endl;

  //Dizendo o número de acertos
  cout << "Você acertou: " << aux << " números." << endl;

    //system("pause");
    return 0;
}