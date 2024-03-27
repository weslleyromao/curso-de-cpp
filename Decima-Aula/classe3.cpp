#include <iostream>

using namespace std;

class carro{
    private:

    int ano;
    float valor, km;

    public:

        //ANO
    void setano(int ano);
    int getano();

        //VALOR
    void setvalor(float valor);
    float getvalor();

        //KM
    void setkm(float km);
    float getkm();

};

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

        //ANO
    void carro::setano(int ano){
        this->ano = ano;
    }
    int carro::getano(){
        return ano;
    }

        //VALOR
    void carro::setvalor(float valor){
        this->valor = valor;
    }
    float carro::getvalor(){
        return valor;
    }

        //KM
    void carro::setkm(float km){
        this->km = km;
    }
    float carro::getkm(){
        return km;
    }