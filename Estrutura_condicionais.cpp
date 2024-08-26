#include <iostream>

using namespace std;

int main(){
    float nota1, nota2;
    cout << "Informe a Primeira Nota\n";
    cin >> nota1;
    cout << "Informe a Segunda Nota\n";
    cin >> nota2;
    float media = (nota1+nota2)/2;
    cout << "Média: " << media << endl;

    if (media >= 5){
        cout << "Aluno Aprovado\n";
    } else{
        cout << "Aluno Reprovado\n";
    }
    // 0-2.5 D, 2.5-5 C, 5-7.5 B, 7.5-10 A
    if (media < 2.5){
        cout << "NOTA D" << endl;
    } else if (media < 5){
        cout << "NOTA C" << endl;
    } else if (media <7.5){
        cout << "NOTA B" << endl;
    } else{
        cout << "NOTA A" << endl;
    }

    // Operadores Lógicos: e &&, ou ||, Não !
    float freq;
    cout << "Qual é a Frequência do Aluno?\n";
    cin >> freq;

    if (media >= 5 && freq >= 75){
        cout << "Aluno Nota 10!!\n";
    } else {
        cout << "Vai estudar seu burro!\n";
    }

    //Operador Ternário
    //(media >= 5) ? cout <<"Aprovado\n" : cout << "Reprovado\n";

    return 0;
}