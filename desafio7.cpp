#include <iostream>

using namespace std;

int main(){
    int tamanho;

    while(true){
    cout << "Informe o tamanho do vetor: ";
    cin >> tamanho;

    int* vetor = new int[tamanho];

    for (int i=0 ; i<tamanho ; i++){
        cout << "Informe o elemento " << i+1 << " do vetor: ";
        cin >> vetor[i];
    }

    cout << "[ ";
    for (int i=0 ; i<tamanho ; i++){
        cout << vetor[i] << " ";
    }
    cout << "]" << endl;

    int reset = 1;
    cout << "Deseja continuar? Digite 1 para recomecar e 0 para finalizar!" << endl;
    cin >> reset;

    if (reset == 0){
        break;
    }

    }

    return 0;
}