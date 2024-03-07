#include <iostream>

using namespace std;

int main(){

        //Alocação Estática

    // int vet[4];
    // vet[0]=5;
    // vet[1]=10;

    // cout << vet[1] << endl;

    // int vet[4] = {5,10};

    // cout << vet[1] << endl;

    // cout << "[ ";
    // for (int i=0 ; i<4 ; i++){
    //     cout << vet[i] << " ";
    // }
    // cout << "]" << endl;

    // int x = sizeof(vet)/sizeof(int);
    // cout << "Quantidade de elementos do vetor: " << x << endl;
    // int y = sizeof(int);
    // cout << "Tamanho de inteiro: " << y << endl;

        //Alocação Dinamica

    int tamanho;

    cout << "Digite o tamanho do vetor!" << endl;
    cin >> tamanho;

    int* vetor = new int[tamanho]; 
    
    for (int i=0 ; i<tamanho ; i++){
        cout << "Digite o elemento " << i+1 << " do vetor: " << endl;
        cin >> vetor[i];
    }

    for (int i=0 ; i<tamanho ; i++){
        cout << vetor[i] << " ";
    }
    
    return 0;
}