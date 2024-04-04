#include <iostream>

using namespace std;

class cidadesbrasil{
    private:

    float PIB;
    float populacao;
    int anofundacao;

    public:

        //PIB
    void setPIB(float PIB){
        this->PIB = PIB;
    }
    getPIB(){
        return PIB;
    }

        //População
    void setpopulacao(float populacao){
        this->populacao = populacao;
    }
    getpopulacao(){
        return populacao;
    }

        //Ano de fundação
    void setanofundacao(int anofundacao){
        this->anofundacao = anofundacao; 
    }
    getanofundacao(){
        return anofundacao;
    }

};

int main(){

    cidadesbrasil Palmas;

    Palmas.setPIB(80000);
    Palmas.setpopulacao(1000);
    Palmas.setanofundacao(2001);
    cout << "Cidade Palmas" << endl;
    cout << "PIB: " << Palmas.getPIB() << endl;
    cout << "Populacao: " << Palmas.getpopulacao() << endl;
    cout << "Ano de fundacao: " << Palmas.getanofundacao() << endl;

    cidadesbrasil Natal;

    Natal.setPIB(648000);
    Natal.setpopulacao(57000);
    Natal.setanofundacao(1940);
    cout << "Cidade Natal" << endl;
    cout << "PIB: " << Natal.getPIB() << endl;
    cout << "Populacao: " << Natal.getpopulacao() << endl;
    cout << "Ano de fundacao: " << Natal.getanofundacao() << endl;
    return 0;
}