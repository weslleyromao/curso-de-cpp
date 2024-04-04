#include <iostream>
#include "carro.h"

using namespace std;

int main(){

carro palio;

    palio.setano(2005);
    palio.setvalor(4600);
    palio.setkm(350000);
    cout << "Palio" << endl;
    cout << "Ano: " << palio.getano() << endl;
    cout << "valor: " << palio.getvalor() << endl;
    cout << "km rodados: " << palio.getkm() << endl << endl;

    carro corolla;

    corolla.setano(2001);
    corolla.setvalor(25000);
    corolla.setkm(363564);
    cout << "Corolla" << endl;
    cout << "Ano: " << corolla.getano() << endl;
    cout << "valor: " << corolla.getvalor() << endl;
    cout << "km rodados: " << corolla.getkm() << endl;

    return 0;
}