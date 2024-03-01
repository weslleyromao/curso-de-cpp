#include <iostream>

using namespace std;

    //  f(x) = x^2 - 3x +5.

float f(float x){
    
   float v;
    v = x*x - 3*x + 5;

    return v;
}

int main(){
    float a;
    cout << "Digite um numero real: " << endl;
    cin >> a;

    float valorf = f(a);

    cout << "O valor da funcao no ponto " << a << " e igual a: " << valorf << endl;

}