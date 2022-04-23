// Arquivo principal
// Programador: Fabio Henrique Fabre - RA: 107677
// Data: 10/04/22   Hora:21:32
#include "Aluno.cpp"

int main()
{
    Aluno aluno1;
    Aluno aluno2("Rafaela Almeida Pinto", 357691, "Psicologia", false);

    aluno1.setNome("Monteiro Lobato Junior");
    aluno1.setRa(000001);
    aluno1.setCurso("Pedagogia");
    aluno1.setDividaFinanceira(true);
    aluno1.schoolnet(aluno1);

    cout<<"Aluno:"<<aluno2.getNome()<<endl;
    cout<<"RA:"<<aluno2.getRa()<<endl;
    cout<<"Curso:"<<aluno2.getCurso()<<endl;
    cout<<"Divida:"<<aluno2.getDividaFinanceira()<<endl;

    return 0;
}
