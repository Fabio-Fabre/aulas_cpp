// Implementando os métodos da classe Aluno
// Programador: Fabio Henrique Fabre - RA: 107677
// Data: 10/04/22   Hora:20:30

#include "Aluno.hpp"

//Construtor default
    Aluno::Aluno(){
    this->nome = "";
    this->ra = 0;
    this->curso = "";
    this->dividaFinanceira = false;
}

//Construtor parâmetrico
Aluno::Aluno(string nome, int ra, string curso, bool dividaFinanceira){
    this->nome = nome;
    this->ra = ra;
    this->curso = curso;
    this->dividaFinanceira = dividaFinanceira;
}

void Aluno::setNome(string nome){
    this->nome = nome;
}

void Aluno::setRa(int ra){
    this->ra = ra;
}

void Aluno::setCurso(string curso){
    this->curso = curso;
}

void Aluno::setDividaFinanceira(bool dividaFinanceira){
    this->dividaFinanceira = dividaFinanceira;
}

string Aluno::getNome(){
	return this->nome;
}

int Aluno::getRa(){
	return this->ra;
}

string Aluno::getCurso(){
	return this->curso;
}

bool Aluno::getDividaFinanceira(){
    return this->dividaFinanceira;
}

void Aluno::schoolnet(Aluno alunoN){
    cout<<"Bem Vindo a plataforma de aluno da FHO!!!"<<endl;
    cout<<"A seguir seguem seus dados:"<<endl;
    cout<<"Aluno:"<<alunoN.getNome()<<endl;
    cout<<"RA:"<<alunoN.getRa()<<endl;
    cout<<"Curso:"<<alunoN.getCurso()<<endl;
    cout<<"Possui pendencia financeira?:"<<alunoN.getDividaFinanceira()<<endl;
}
