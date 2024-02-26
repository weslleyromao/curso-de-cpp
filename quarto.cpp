#include <iostream>

using namespace std;

#define pi 3.14 << endl;
#define curtir cout << "Eu amo muito minha noiva" << endl;

int t=1;

void inscrever(){

    cout << "Beba agua" << endl;

}

int somar(int &x, int &y){
    //int t;
    //t=1;

    int soma;
    soma = x+y;
    x=30;
    return soma;
}

int main(){

    //int t;
    //t=0;

    cout << "Valor de T: " << t << endl;

    inscrever();

    int a=5, b=4;
    int s;
    s = somar(a,b);
    cout << "Valor de A: " << a << endl;
    cout << "Soma: " << s << endl;

    cout << pi;

    curtir;

    return 0;
}