#include <iostream>

using namespace std;

    // f(x) = x^2 - 3x + 5.
    // Crie um Algoritmo em C++, que tenha uma função que calcula o valor de "f(a)", em que "a" é um número real informado pelo usuário.

float f(float x){
    
   float valor;
    valor = x*x - 3*x + 5;

    return valor;
}

int main(){
    float a;
    cout << "Digite um numero real: \n";
    cin >> a;

    float valorfun = f(a);

    cout << "O valor da funcao no ponto " << a << " e igual a: " << valorfun << endl;

    return 0;
}