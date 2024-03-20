#include <iostream>

using namespace std;

struct Alunos{
    string nome;
    float media;
    int faltas;
};

int main(){

    int n;
    Alunos *vet;

    cin >> n;

    vet = new Alunos[n];

    for (int i = 0; i < n; i++)
    {
        cin >> vet[i].nome >> vet[i].media >> vet[i].faltas;
    }

    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            if (vet[i].media < vet[j].media){
                swap(vet[i], vet[j]);
            }
            
        }
    }

    for (int i = 0; i < n; i++){
        cout << vet[i].nome << endl;
    }
    
    
    


    return 0;
}