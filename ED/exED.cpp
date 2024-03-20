#include <iostream>
using namespace std;

class transacao {

    private:
            string nome;
            string telefone;
            char tipo;
            float valor;
            int dia; // 1 - segunda..//

    public:
            transacao();
            ~transacao();
            void atualizarTransacao(string n, string t, char tp, float v,
                int d);
            void calcularMovimentacao(float &totalCompra, float &totalVenda, char tp,
                float v);
            int retornaDia () {
                return dia;
            }
            void imprimirTransacoes()


};

transacao :: transacao(){

    nome = "-";
    telefone = "-";
    tipo = '-';
    valor = 0.0;
    dia = 0;
}

transacao :: ~transacao(){
    
    nome = "0";
    telefone = "0";
    tipo = '0';
    valor = 0.0;
    dia = 0;


}

void transacao :: atualizarTransacao(string n, string t, char tp, float v, int d){

    nome = n;
    telefone = t;
    tipo = tp;
    valor = v;
    dia = d;

}

void transacao :: calcularMovimentacao(float &totalCompra, float &totalVenda, char tp, float v){

    if ((tipo == 'c') or (tipo == 'c') ){
        totalCompra += valor;
    }
    else{
        totalVenda += valor;
    }

}

void transacao :: imprimirTransacoes(){

    cout << nome << "\t" << telefone << endl;
    cout << tipo << "\t" << valor << endl << dia;

}

int main (){

    transacao negocios [10];
    char operacao, tipo;
    int cont = 0, dia;
    string nome, tel;
    float valor, feriaCompra = 0, feriaVenda = 0;

    cout << "Realizar transacao? (s)im (n)ao " << endl;
    cin >> operacao;

    while ((cont < 10) and (operacao == 's')){

        cin >> nome >> tel >> tipo >> valor >> dia;
        negocios[cont].atualizarTransacao(nome, tel, tipo, valor, dia);
        cont++;

        cout << "Realizar tranzacao? (s)im (n)ao" << endl;
        cin >> operacao;
    }

    cont--;

    while (cont > 0){
        negocios[cont].calcularMovimentacao(feriaCompra, feriaVenda, tipo, valor);
        cont--;
    }

    cout < "Compras: " << feriaCompra << endl << "Vendas: " << feriaVenda << endl;

    cont = 0;

    while (cont < 10){
        negocios[cont].imprimirTransacoes();
        cout << "--------------------" << endl;
    }
}