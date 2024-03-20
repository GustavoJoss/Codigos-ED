#include <iostream> 
using namespace std;

int main(){
    int n1, n2;

    cin >> n1;
    char *letras1 = new char[n1];

    for (int i = 0; i < n1; i++){
        cin >> letras1[i];
    }
    

    cin >> n2;
    char *letras2 = new char[n2];

    for (int i = 0; i < n2; i++){
        cin >> letras2[i];
    }

    int tamMin = min(n1, n2);

    for (int i = 0; i < tamMin; i++){
        if (letras1[i] != letras2[i]){
            cout << letras1[i] << " ";
        }    
    }

    if (n1 > tamMin){
        for (int i = tamMin; i < n1; i++){
            cout << letras1[i] << " ";
        }
        
    }
    else if (n2 > tamMin){
        for (int i = tamMin; i < n2; i++){
            cout << letras2[i] << " ";
        }
    }
    
    
    



}