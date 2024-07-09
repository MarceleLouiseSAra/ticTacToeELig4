#ifndef Tabuleiro_H
#define Tabuleiro_H
#include <iostream>
#include <string>

using namespace std;

class Tabuleiro{
  public: 
  char** p;
  int rows;
  int columns;

  Tabuleiro();

  void criaTabuleiro();
  
  void imprimeTabuleiro();

  void liberaMemoria();
};

#endif