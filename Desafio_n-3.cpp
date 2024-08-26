#include <iostream>

using namespace std;

/*  Crie um Algoritmo em C++, que tenha uma função que calcula o
fatorial de um número inteiro positivo, informado pelo usuário
*/

int fatorial(int num){
    int fator = 1; //Fatorial de 0 e 1 é 1;
    for (int i = 2; i <= num; i++)
        fator *= i;
    return fator;
}

int main(){
    int resultado;
    int num;
    cout << "Informe o número que deseja o Fatorial: \n";
    cin >> num;
    resultado = fatorial(num);
    cout << "O Fatorial de " << num << " é : " << resultado << endl;
    return 0;
}