#include <iostream>
#include "carro.h"

using namespace std;

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