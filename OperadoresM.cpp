#include <iostream>
#include <math.h> //Biblioteca com Funções Matemáticas

using namespace std;

int main(){
    int a = 5, b = 2;

    int soma = a + b;
    cout << "Soma: " << soma << endl;
    //cout << "Soma: " << a + b << endl;

    int sub = a - b;
    cout << "Subtração: " << sub << endl;

    int mult = a * b;
    cout << "Multiplicação: " << mult << endl;

    int qDiv = a / b;
    int rDiv = a % b;
    float Div = (float)a / (float)b;
    cout << "Divisão: " << Div << endl;
    cout << "Quociente: " << qDiv << endl;
    cout << "Resto da Divisão: " << rDiv << endl;    

    float pot = pow(a, b);
    cout << "Potência: " << pot << endl;

    //Incremento e Decremento
    cout << "a antigo: " << a << endl;
    a +=1; 
    //a = a+2;
    //a -= 2; 
    //a++;
    //a--;
    //a*=2;
    cout << "a novo: " << a << endl;

    return 0;
}