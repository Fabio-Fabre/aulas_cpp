// Criando classe Aluno e declarando atributos e m�todos
// Programador: Fabio Henrique Fabre - - RA: 107677
// Data: 10/04/22   Hora:19:54

//Impedindo redefini��o de classe, caso inclu�da mais de uma vez
#ifndef ALUNO_HPP
#define ALUNO_HPP

//Adicionando bibliotecas
#include <iostream>
#include <string>

//configurando o escopo para utiliza��o da biblitoeca padr�o
using namespace std;

class Aluno{
//Atributos primeiro:
private:
    string nome;
    int ra;
    string curso;
    bool dividaFinanceira;

//M�todos depois:
public:
    Aluno();//Construtor default
    Aluno(string nome, int ra, string curso, bool dividaFinanceira);//Construtor param�trico
    void setNome(string nome);
    void setRa(int ra);
    void setCurso(string curso);
    void setDividaFinanceira(bool dividaFinanceira);
    string getNome();
    int getRa();
    string getCurso();
    bool getDividaFinanceira();
    void schoolnet(Aluno alunoN);
};
#endif // ALUNO_HPP
