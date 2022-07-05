#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

int main(){

    int N;
    double media;

    cout << "Quantos alunos serao digitados? ";
    cin >> N;

    string nomes[N];
    double notas1[N], notas2[N];

    for(int i = 0; i < N; i++){
        cout << "Digite nome, primeira e segunda nota do " << i + 1 << "o aluno:" << endl;
        cin.ignore(INT_MAX, '\n');
        getline(cin, nomes[i]);
        cin >> notas1[i];
        cin >> notas2[i];
    }

    cout << "Alunos aprovados:" << endl;

    for(int i = 0; i < N; i++){
        media = (notas1[i] + notas2[i]) / 2;

        if(media >= 6.0){
            cout << nomes[i] << endl;
        }
    }

    return 0;
}
