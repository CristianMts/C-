#include <iostream>

//Variável Global e Local: Declarada Dentro e fora das funções.
//Constante - #define pi 3.14; - Não é possível alterar o valor.
#define pi 3.14;
#define curtir cout << "Curtir essa aula! " << endl;

int t = 1;

using namespace std;
//Void - Significa que não vai retornar nada
// () - Nenhuma Entrada
void inscrever(){
    cout << "Revisão de C++\nEstrutura de Dados";
    t = 0;
}    

int somar(int x, int y){
    //Se colocar & antes de x ou y, tudo que ocorrer com x y , altera a b.
    int soma;
    soma = x + y;
    return soma;
}

int main(){
    
    inscrever();
    cout << "\n-------------------------" << endl;
    
    int a = 5, b = 4;
    int s = somar(a,b);
    cout << "Soma: " << s << endl;

    cout << pi;

    cout << endl << t << endl;
    curtir;
    curtir;

    return 0;
}