#include <iostream>

using namespace std;

    // Em um programa de Moradia Popular, somente pessoas maiores 
    // de 21 anos e com renda abaixo de R$ 1200,00 podem participar.

    // Crie um algoritmo em C++, em que o usuário informa sua idade e sua 
    // renda, e é informado se ele pode ou não participar desse programa.

int main(){

    int idade, salario;

    cout << "Informe sua idade: ";
    cin >> idade;
    cout << "Informe seu salario: ";
    cin >> salario;

    if (idade >=21 && salario >=1200){
        cout << "Voce pode participar do nosso programa de casas populares!";
    } else{
        cout << "Voce nao esta no padrao do nosso programa de casas populares!" << endl;;
    }

    return 0;
}