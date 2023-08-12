#include <iostream>

using namespace std;

template <class T>
void troca(T &a, T &b) {
    int tmp = a;
    a = b;
    b = tmp;
}

template <class T>
void imprime(T &a, T &b) {
    cout << "Valor de A: " << a << endl;
    cout << "valor de B: " << b << endl;
}

int main()
{
    cout << "=-=-==-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" << endl;
    cout << "Exercicio TEMPLATE" << endl;
    cout << "3. Considere a funcao abaixo que a realiza a troca de conteudo de duas variáveis: \nCaso um usuario deseje utiliza-la para diversos tipos eh necessario reescreve-la para cadatipo.\nImplemente essa funcao utilizando template" << endl;
    cout << "=-=-==-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" << endl;

    float a = 0;
    float b = 0;

    cout << "Digite um valor para A: " << endl;
    cin >> a;

    cout << "Digite um valor para B: " << endl;
    cin >> b;

    cout << "Valores digitados anteriormente: " << endl;
    imprime(a, b);
    troca(a, b);
    cout << "Valores depois da inversao: " << endl;
    imprime(a, b);

    return 0;
}

