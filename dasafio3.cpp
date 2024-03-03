#include <iostream>

using namespace std;

int fato(int ftr){
    int fatorial = 1;

    for (int i=1 ; i<=ftr ; i++){
        fatorial*=i;
    }

    return fatorial;

}

int main(){
    int num;

    cout << "Informe um numero inteiro positivo: \n";
    cin >> num;

    int valorfat = fato(num);

    cout << "O fatorial de " << num << " e: " << valorfat << endl;

    return 0;
}