#include <iostream>
#include <fstream>

using namespace std;

void fibonacci(int n, ofstream& arquivo) {
    int termo1 = 0, termo2 = 1;
    int proxTermo = 0;

    for (int i = 0; i < n; ++i) {
        
        if (termo1 % 2 == 0) {
            arquivo << termo1 << " ";
        }

        
        proxTermo = termo1 + termo2;
        termo1 = termo2;
        termo2 = proxTermo;
    }
}

int main() {
    string nomeArq;
    int n;

    cin >> nomeArq >> n;

    ofstream arq(nomeArq);

    fibonacci(n, arq);

    return 0;
}