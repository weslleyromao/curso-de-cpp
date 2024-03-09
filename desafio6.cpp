#include <iostream>

using namespace std;

int main(){

    float familias[5];
    for (int i=0 ; i<5 ; i++){
        cout << "informe o gasto da familia " << i+1 << ": ";
        cin >> familias[i];
    }

    float media=0;
    for (int i=0 ; i<5 ; i++){
        media+=familias[i];
    }

    media=media/5;
    cout << "A media de gastos das familias: " << media << endl;

    for (int i=0 ; i<5 ; i++){
        if (familias[i] < media){
            cout << "A familia " << i+1 << " os gatos estao abaixo da media!" << endl;
        } else if (familias[i] == media){
            cout << "A familia " << i+1 << " esta com gastos na media!" << endl;
        } else{
            cout << "A familia " << i+1 << " esta com gastos a cima da media!" << endl;
        }
    }

    return 0;
}