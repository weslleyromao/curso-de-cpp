#include <iostream>

using namespace std;

class carro{
    private:

    int ano;
    float valor, km;

    public:

        //CONSTRUTOR
    carro(int ano=0, float valor=-1, float km=-1){
        this->ano = ano;
        this->valor = valor;
        this->km = km;
    }

        //ANO
    void setano(int ano){
        this->ano = ano;
    }
    int getano(){
        return ano;
    }

        //VALOR
    void setvalor(float valor){
        this->valor = valor;
    }
    float getvalor(){
        return valor;
    }

        //KM
    void setkm(float km){
        this->km = km;
    }
    float getkm(){
        return km;
    }

};

int main(){
    carro celta(2016, 31500, 55000);
    cout << "Celta" << endl;
    cout << "Ano: " << celta.getano() << endl;
    cout << "valor: " << celta.getvalor() << endl;
    cout << "km rodados: " << celta.getkm() << endl << endl;

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