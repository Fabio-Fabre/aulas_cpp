#include "times.hpp"

Times::Times(){
    this-> nome = "";
    this-> chave = "";
}

Times::Times(string nome, string chave){
    this-> nome = nome;
    this-> chave = chave;
}

void Times::setNome(string nome){
    this-> nome = nome;
}

void Times::setChave(string chave){
    this-> chave = chave;
}

string Times::getNome(){
    return this->nome;
}

string Times::getChave(){
    return this->chave;
}

void Times::inserirJogador(Jogador A1, int local){
    this->timeA[local] = A1;
}

void Times::removerJogador(string nome){
    Jogador vazio;
    for (int i; i < 3; i++){
        if(timeA[i].getNome() == nome){
            this->timeA[i] = vazio;
        }
    }
}
