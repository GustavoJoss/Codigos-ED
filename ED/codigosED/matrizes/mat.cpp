#include <iostream>
using namespace std;

void minimax(int mat[10][10], int& minimax, int& linha, int& col) {
    int indLinMax = 0;
    int max = mat[0][0];
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            if (mat[i][j] > max) {
                max = mat[i][j];
                indLinMax = i;
            }
        }
    }
    
    minimax = mat[indLinMax][0];
    col = 0;
    for (int j = 1; j < 10; ++j) {
        if (mat[indLinMax][j] < minimax) {
            minimax = mat[indLinMax][j];
            col = j;
        }
    }
    
    linha = indLinMax;
}

int main(){

    int mat[10][10];

    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            cin >> mat[i][j];

        }
        
    }

    int min, lin, col;

    minimax(mat, min, lin, col);

    cout << min << endl;
    cout << lin << " " << col << endl;


    
}