#include <iostream>
using namespace std;

bool primo(int numero) {
    if (numero <= 1) {
        return false;
    }
    for (int i = 2; i * i <= numero; ++i) {
        if (numero % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int vet[9];

    
    for (int i = 0; i < 9; i++){
        cin >> vet[i];
    }

    
    for (int i = 0; i < 9; i++){
        if (primo(vet[i])) {
            cout << vet[i] << " " << i << endl;
        }
    }

    return 0;
}