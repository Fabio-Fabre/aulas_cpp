#ifndef JOGADOR_HPP
#define JOGADOR_HPP

#include "includes.hpp"

class Jogador {
private:
    string nome;
    string posicao;
    int camisa;
public:
    Jogador();
    Jogador(string nome, string posicao, int camisa);
    void setNome(string nome);
    void setPosicao(string posicao);
    void setCamisa(int camisa);
    string getNome();
    string getPosicao();
    int getCamisa();
};

#endif // JOGADOR_HPP
