#include <iostream>
using namespace std;
/*  Crie um Algoritmo em C++, em que o usuário
informa as notas de três provas de um
determinado aluno e também a média de nota da
turma toda. O Algoritmo deve calcular a média
deste aluno e informar se sua nota é acima da
média, abaixo da média ou está na média.*/

float m_aluno(float n[], int size) {
    float soma = 0.0;
    for (int j = 0; j < size; j++) {
        soma += n[j];
    }
    return soma / size;
}

void m_sala(float media_aluno, float m_s) {
    if (media_aluno < m_s) {
        cout << "Aluno abaixo da média geral!\n";
    } else if (media_aluno > m_s) {
        cout << "Aluno acima da média geral!\n";
    } else {
        cout << "Média do Aluno igual à média geral!\n";
    }
}


int main() {
    float n[3];  // Array para armazenar n1, n2, n3
    float m_s;   // Média da sala

    // Solicitando as notas do aluno
    for (int j = 0; j < 3; j++) {
        cout << "Informe a Nota " << j + 1 << " do Aluno!\n";
        cin >> n[j];    
    }

    // Solicitando a média da sala
    cout << "Informe a Média da Sala\n";
    cin >> m_s;

    // Calculando a média do aluno
    float media_aluno = m_aluno(n, 3); // n é um array e 3 é declarando valor de size.

    // Comparando a média do aluno com a média da sala
    m_sala(media_aluno, m_s);

    return 0;
}