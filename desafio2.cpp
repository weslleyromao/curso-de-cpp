#include <iostream>

using namespace std;

    // Crie um Algoritmo em C++, em que o usuário informa as notas de três provas de 
    // um determinado aluno e também a média de nota da turma toda. O algoritmo deve 
    // calcular a média deste aluno e informa se sua nota é acima da média, abaixo da 
    // média ou está na média.

int main(){

    int nota1, nota2 , nota3;
    
    cout << "Informe a nota da primeira prova: " << endl;
    cin >> nota1;

    cout << "Informe a nota da segunda prova: " << endl;
    cin >> nota2;

    cout << "Informe a nota da terceira prova: " << endl;
    cin >> nota3;

    int medialuno=(nota1+nota2+nota3)/2;

    cout << "A media do aluno: " << medialuno << endl;

    int medialunos;

    cout << "Informe a media dos alunos: " << endl;
    cin >> medialunos;

    if(medialuno > medialunos){
        cout << "O aluno esta acima da media!";
    }else if(medialuno < medialunos){
        cout << "O aluno esta abaixo da media!";
    }else if(medialuno == medialunos){
        cout << "O aluno esta na media!";
    }



    return 0;
}