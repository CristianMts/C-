#include <iostream>

using namespace std;

int main(){
    int inteiro;
    inteiro = 5;
    cout << inteiro << endl;

    float real;
    float real2;
    real = 5.2e37;
    cout << real << endl;
    real2 = 5.2e39;
    cout << real2 << endl;

    double real3;
    real3 = 5.2e307;
    cout << real3 << endl;

    bool booleano;
    booleano = false;
    cout << booleano << endl;

    char letra;
    letra = 'b';
    cout << letra << endl;
    
    string palavra;
    palavra = "bola";
    cout << palavra << endl;

    int idade;
    cout << "Qual sua idade?" << endl;
    cin >> idade;
    cout << "Sua idade e: " << idade << endl;
    
    system ("pause");

    return 0;
}