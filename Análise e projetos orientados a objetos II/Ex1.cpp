#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> v1;

int main(){

	cout << "=-=-==-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" << endl;
	cout << "Exercicio STL" << endl;
	cout << "1. Escreva um programa explorando STL que declara um vetor de inteiros. \nArmazene no vetor os 5 valores informados e entao imprima o vetor de elementos com comando cout" << endl;
	cout << "=-=-==-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" << endl;
	cout << "Aqui voce ira digitar 5 numeros diferentes, pra serem adicionados ao vetor" << endl;
	for (auto i = 0; i < 5; i++) {
		int j = 0;
		cout << "Digite um valor: " << endl;
		cin >> j;
		v1.push_back(j);
	}

	cout << "Numeros do Vetor: " << endl;
	for (auto i = 0; i < v1.size(); i++) {
		cout << v1[i] << " ";
	}
	cout << endl << endl;

	return 0;
}
