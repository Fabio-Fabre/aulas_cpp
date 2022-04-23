#include "includes.hpp"
#include "times.hpp"

class Copa_do_Mundo {
private:
    Times TA[2];
public:
    Copa_do_Mundo();
    void inserirTime(Times T1, int local);
    void removerTime(string nome);
};
