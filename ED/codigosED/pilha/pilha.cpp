#include <iostream>

using namespace std;

class noh
{	
	friend class Pilha;
	
	private:
    string mNome;
    char mTipo;
    int mValor;
    noh *proximoItem;

    public:
    noh(string nome, char tipo, int valor);
};

noh :: noh(string nome, char tipo, int valor){
    mNome = nome;
    mTipo = tipo;
    mValor = valor;
    proximoItem = NULL;
}

class Pilha
{
    private:
         noh *topoPilha;
    
    public:
        Pilha();
        ~Pilha();
        void empilhar(string nome, char tipo, int valor);
        int desempilhar();
        void limpar();
        void espiar();
};

Pilha :: Pilha(){
	topoPilha = NULL;
}

Pilha :: ~Pilha(){
	topoPilha = NULL;
	
}



void Pilha :: limpar(){
	while (topoPilha != NULL)
        {
            desempilhar();
        }
}

void Pilha :: espiar(){
    if (topoPilha == NULL){
        cout << "Erro: pilha vazia!" << endl;
        return;
    }
    cout << "Nome: " << topoPilha->mNome << " Tipo: " << topoPilha->mTipo << " Valor: " << topoPilha->mValor << endl;
}

void Pilha :: empilhar(string nome, char tipo, int valor){
    noh *novo = new noh(nome, tipo, valor);
    novo->mNome = nome;
    novo->mTipo = tipo;
    novo->mValor = valor;
    novo->proximoItem = topoPilha;
    topoPilha = novo;
}

void Pilha :: desempilhar(){
    if (topoPilha == NULL)
        {
            cout << "Erro: pilha vazia!" << endl;
            return;
        }
        noh *aux = topoPilha;
        topoPilha = topoPilha->proximoItem;
        cout << "Nome: " << aux->mNome << " Tipo: " << aux->mTipo << " Valor: " << aux->mValor << endl;
        delete aux;
}

int main()
{
    Pilha pilha;
    string nome;
    char comando;
    char tipo;
    int valor;
    int contPilha = 1;
    while (cin >> comando)
    {
        if (comando == 'i')
        {
            cin >> nome >> tipo >> valor;
            pilha.empilhar(nome, tipo, valor);
            contPilha++;
        }
        else if (comando == 'r')
        {
            pilha.desempilhar();
            contPilha--;
        }
        else if (comando == 'l')
        {
            pilha.limpar();
        }
        else if (comando == 'e')
        {
            pilha.espiar();
        }
        else if (comando == 'f')
        {
            while (contPilha != 0)
            {
                pilha.desempilhar();
                contPilha--;
            }
            return 0;
        }
    }
    return 0;
}