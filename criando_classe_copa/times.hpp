#ifndef TIMES_HPP
#define TIMES_HPP

#include "includes.hpp"
#include "jogador.hpp"

class Times {
private:
    string nome;
    string chave;
    //composicao
    Jogador timeA[3];
public:
    Times();
    Times(string nome, string chave);
    void setNome(string nome);
    void setChave(string chave);
    string getNome();
    string getChave();
    void inserirJogador(Jogador A1, int local);
    void removerJogador(string nome);
};
#endif // TIME_HPP
