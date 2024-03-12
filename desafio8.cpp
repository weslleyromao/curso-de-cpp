#include <iostream>

using namespace std;

int main(){

    int* idade1 = new int, *idade2 = new int;

    cout << "informe a idade da primeira pessoa: ";
    cin >> *idade1;
    cout << "Informe a idade da segunda pessoa: ";
    cin >> *idade2;

    int* media = new int;

    *media = (*idade1+*idade2)/2;

    cout << "Media da idade entre essas pessoas e de: " << *media;

    return 0;
}