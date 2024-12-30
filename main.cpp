#include <iostream>
using namespace std;

int Somar() {
    int n1, n2;
    int soma;
    cout << "escolha o n1 \n";
    cin >> n1;
    cout << "escolha o n2 \n";
    cin >> n2;
    
    soma = n1 + n2;
    cout << "o resultado da soma e: " << soma  << "\n";
    
    return soma;
}

int main()
{
    
    int op;

    do {
        cout << "\n";
        cout << "escolha a operacao \n";
        cout << "(1)soma \n";
        cout << "(2)subtracao \n";
        cout << "(3)multiplicacao \n";
        cout << "(4)divisao \n";
        cout << "(0)finalizar programa \n";
        cin >> op;
        
        switch(op) {
            case 0:
                cout << "fim do programa";
            break;
            case 1:
                Somar();
            break;
        }
    } while(op != 0);
}
