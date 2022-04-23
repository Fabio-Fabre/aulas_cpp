#include "copa_do_mundo.hpp"

Copa_do_Mundo::Copa_do_Mundo(){
}

void Copa_do_Mundo::inserirTime(Times T1, int local){
    this->TA[local] = T1;
}

void Copa_do_Mundo::removerTime(string nome){
    Times vazio;
    for (int i; i < 32; i++){
        if(TA[i].getNome() == nome){
            this->TA[i] = vazio;
        }
    }
}
