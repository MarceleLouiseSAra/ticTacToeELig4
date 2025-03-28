#ifndef Jogadores_H
#define Jogadores_H
#include <string>
#include <iostream>
#include <sstream>
#include <fstream>
#include <vector>

using namespace std;

class Jogadores{
    public:
    string Apelido;
    string Nome;
    int reversiWins;
    int reversiDefeats;
    int lig4Wins;
    int lig4Defeats;
    int tictactoeWins;
    int tictactoeDefeats;
    bool victory;

    int pesquisaJogador(string Apelido); //procura o jogador pelo seu apelido no arquivo

    Jogadores(); //construtor default

    Jogadores(string Apelido); //de fato faz o cadastro

    void signIn(string Apelido, vector<Jogadores> &jogadoresVector);

    void reescreveArquivo(vector<Jogadores> &jogadoresVector);

    void removeJogador(vector<Jogadores> &jogadoresVector);

    void atualizaEstatisticas(int gameMode, vector<Jogadores> &jogadoresVector);

};

#endif