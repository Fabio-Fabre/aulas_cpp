#include "includes.hpp"
#include "jogador.hpp"
#include "times.hpp"
#include "copa_do_mundo.hpp"

int main(){
    Jogador jogador1("Fred", "Atacante", 10);
    Jogador jogador2("Alisson", "Goleiro", 01);
    Jogador jogador3("Kaka", "Zagueiro", 04);

    cout<< jogador1.getNome()<< endl;
    cout<< jogador2.getCamisa()<< endl;
    cout<< jogador3.getPosicao()<< endl<< endl;

    Jogador jogador4("Josue", "Meio-campo", 07);
    Jogador jogador5("Aladin", "Reserva", 00);
    Jogador jogador6("Mohamad", "Atacante", 13);

    Times tA1("Brasil","C");
    Times tA2("Egito","B");

    cout<< tA1.getNome() << endl;
    cout<< tA2.getChave() << endl;

    tA1.inserirJogador(jogador1, 0);
    tA1.inserirJogador(jogador2, 1);
    tA1.inserirJogador(jogador3, 2);

    tA2.inserirJogador(jogador4, 0);
    tA2.inserirJogador(jogador5, 1);
    tA2.inserirJogador(jogador6, 2);

    Copa_do_Mundo cp2022;

    cp2022.inserirTime(tA1, 0);
    cp2022.inserirTime(tA2, 1);
}
