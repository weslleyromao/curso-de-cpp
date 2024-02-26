#include <iostream>

using namespace std;

int main(){
    
    float nota1, nota2;

    cout << "Informe a Nota 1" << endl;
    cin >> nota1;

    cout << "Informe a Nota 2" << endl;
    cin >> nota2;
    
    float media=(nota1+nota2)/2;
    cout << "Sua media: " << media << endl;

    // Comparações: Igual: == , Diferente: != , Outros: > , < , >= , <=

        // IF simples
    //if (media >= 5){
    //    cout << "Aluno Aprovado\n";
    //}

        // IF / ELSE
    //if (media >= 5){
    //    cout << "Aluno Aprovado\n";
    //} else{
    //    cout << "Aluno Reprovado\n";
    //}

        // IF / ELSE com varias faixas
    // 0-2.5 D , 2.5-5 C , 5-7.5 B , 7.5-10 A
    if (media < 2.5){
        cout << "Nota final: D" << endl;
    } else if (media <5){
        cout << "Nota final: C" << endl;
    } else if (media <7.5){
        cout << "Nota final: B" << endl;
    } else{
        cout << "Nota final: A" << endl;
    }

    return 0;
}

