#include <iostream>

using namespace std;

int main(){
    int n;
    cout << "Diga um número inteiro nao negativo\n";
    cin >> n;

    int soma = 0;
    int cont = 1;

    // WHILE
    while (cont <= n){
        soma += cont;
        cont ++;
    }

    cout << "Soma dos numeros de 0 ate " << n << " = " << soma << endl;

    /* DO WHILE
    do{
        soma += cont;
        cont ++;
    } while (cont <= n); 
    // O valor daria erro se n = 0, pois incrementaria coun = 1 */

    /* FOR
    for (int j = 1; j <=n; j++j){
        soma += j;
    }
    // O contador ja esta incrementado no FOR*/

    return 0;
}