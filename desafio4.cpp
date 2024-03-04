#include <iostream>

using namespace std;

    // Crie um Algoritmo em C++, que calcula a potência B elevado a E, em que o usário 
    // informa um número real "B" e um número natural "E". Nesse algoritmo, sempre que 
    // é informado o resultado da pôtencia, é porguntando ao usuário, se este deseja 
    // calcular outra pôtencia.

float poten(float b, float e){
    float base = 1;
    for (int i= 1; i<=e ; i++){
        base*=b;
    }

    return base;
}

int main(){
    float base, expoente;

    while(true){
    cout << "Informe um numero real para base: \n";
    cin >> base;

    cout << "Informe um numero natural para o expoente \n";
    cin >> expoente;

    float resultadoP = poten(base, expoente);

            
    cout << "O resultado da potencia na base " << base << " com expoente " << expoente << " e de: " << resultadoP << endl;
    
    int questionar = 1;
    cout << "digite 1 se quiser calcular mais uma potenciacao, se nao digite 0. \n";
    cin >> questionar;
    if (questionar == 0){
        break;
    }
    }

    return 0;

}