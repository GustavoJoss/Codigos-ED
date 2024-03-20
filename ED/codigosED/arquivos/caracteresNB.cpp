#include <iostream>
#include <fstream>

using namespace std;

int main(){
    string arqNome;
    char letra;
    int cont = 0;

    getline(cin,arqNome);

    ifstream arq1(arqNome);

    while (arq1.get(letra)){
        if(!isspace(letra)){
            cont++;
        }
    }
    
    cout << cont <<  endl;
    
    return 0;
}