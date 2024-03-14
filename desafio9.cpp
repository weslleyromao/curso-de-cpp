#include <iostream>

using namespace std;

void troca(int* &pont1, int* &pont2){
    int temp;
    temp = *pont1;
    *pont1 = * pont2;
    *pont2 = temp;
}

int main(){

    int* pont1 = new int;
    int* pont2 = new int;

    cout << "Informe o valor do ponteiro 1: ";
    cin >> *pont1;
    cout << "informe o valor do ponteiro 2: ";
    cin >> *pont2;

    cout << "O ponteiro 1: " << pont1 << " e " << *pont1 << endl;
    cout << "O ponteiro 2: " << pont2 << " e " << *pont2 << endl;

    troca(pont1, pont2);

    cout << "O ponteiro 1: " << pont1 << " e " << *pont1 << endl;
    cout << "O ponteiro 2: " << pont2 << " e " << *pont2;

    return 0;
}