#include "includes.hpp"
#include "jogador.hpp"

Jogador::Jogador(){
    this-> nome = "";
    this-> posicao = "Reserva";
    this-> camisa = 00;
}

Jogador::Jogador(string nome, string posicao, int camisa){
    this-> nome = nome;
    this-> posicao = posicao;
    this-> camisa = camisa;
}

void Jogador::setNome(string nome){
    this-> nome = nome;
}

void Jogador::setPosicao(string posicao){
    this-> posicao = posicao;
}

void Jogador::setCamisa(int camisa){
    this-> camisa = camisa;
}

string Jogador::getNome(){
    return this->nome;
}

string Jogador::getPosicao(){
    return this->posicao;
}

int Jogador::getCamisa(){
    return this->camisa;
}
