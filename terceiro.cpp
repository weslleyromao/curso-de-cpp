#include <iostream>
#include <math.h>

using namespace std;

int main(){

    int a=5, b=2;
    int soma;
    soma = a+b;
    cout << soma << endl;
    //cout << "Soma: " << a+b << endl;

    int sub = a-b;
    cout << "Subtracao: " << sub << endl;

    int mult = a*b;
    cout << "Multiplicacao: " << mult << endl;

    int quocdiv = a/b;
    cout << "Quociente da divisao: " << quocdiv << endl;

    int restodiv = a%b;
    cout << "Resto da divisao: " << restodiv << endl;

    float div = (float)a / (float)b;
    cout << "Divisao: " << div << endl;

    float pot = pow(a,b); //a^b
    cout << "Potencia: " << pot << endl;

    //Incremento e Decremento
    cout << "a antigo: " << a << endl;
    //a = a+1
    //a+=1;
    //a++
    //a = a-1
    //a-=1;
    //a--
    //a*=2;
    cout << "a novo: " << a << endl;

    return 0;
}