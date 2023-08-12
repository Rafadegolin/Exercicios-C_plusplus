#include <iostream>

using namespace std;

class Fibo {
public:
    int a, b, c;
    void gerar(int);
};

void Fibo::gerar(int n) {
    a = 0;
    b = 1;

    cout << a << " " << b;

    for (int i = 1; i <= n - 2; i++) {
        c = a + b;
        cout << " " << c;
        a = b;
        b = c;
    }
}

int main(){
    int n = 0;

    cout << "=-=-==-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" << endl;
    cout << "Exercicio TEMPLATE" << endl;
    cout << "2. Escreva um programa que calcule a sequencia de Fibonacci usando templates." << endl;
    cout << "=-=-==-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" << endl;
    cout << "Digite a quantidade de numeros que voce deseja printar: " << endl;
    cin >> n;

    Fibo f1;
    f1.gerar(n);

    return 0;
}
