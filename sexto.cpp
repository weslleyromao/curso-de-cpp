#include <iostream>

using namespace std;

int main(){

    int n;
    cout << "Diga um numero inteiro nao negativo" << endl;
    cin >> n;

    int soma=0;
    // int cont=1;
    
        // Estrutura de repetição com WHILE
    // while (cont <= n){
    //     soma+=cont;
    //     cont++;
    // }

        // Estrutura de repetiçao com DO WHILE
    // do{
    //     soma+=cont;
    //     cont++;
    // } while(cont <=n);

        // Estrutura de repetição com FOR
    for (int j=1 ; j<=n ; j+=1){
        soma+=j;
    }

    cout << "A soma dos numero de 0 ate " << n << " = " << soma << endl;

    return 0;
}