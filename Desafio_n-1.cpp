#include <iostream>
#include <cmath>

using namespace std;
/*  Dada a função f(x)=x²-3x+5.
    Crie um Algoritmo com C++, que tenha
uma função que calcula o valor de f(a), 
em que a é um número real informado 
pelo usuário.*/

float function(float num){
    float func;
    func = pow(num, 2) - 3 * num + 5;
    return func;
}

int main(){
    float a;
    cout << "Escolha o valor de x: \n";
    cin >> a;
    a = function(a);
    cout << a << endl;
    return 0;
}