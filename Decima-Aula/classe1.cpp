#include <iostream>

using namespace std;

class truth{
    private:

    public:
    
    void escrever1(){
        cout << "Eu so extremamento apaixonado pela minha noiva!" << endl;
    }

    void escrever2(){
        cout << "Talvez ela nao sinta o mesmo";
    }

};

int main(){

    truth verdades;

    verdades.escrever1();
    verdades.escrever2();

    return 0;
}