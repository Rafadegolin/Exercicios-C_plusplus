#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

queue<int> ipP1;
queue<int> ipP2;

int tempoImpressao = 2;

vector<int> impP1;
vector<int> impP2;
vector<int> sessaoImpressao;
 
int gerarSessao(vector<int>& vet1) {
    int x = 1 + rand() % 50;

}


int main(){

    srand(time(0));

    //gerando


    // gerando o vetor com numeros randomicos
    for (int i = 0; i < 5; i++) {
        int j = 1 + rand() % 50;
        impP1.push_back(j);
    }

    // Imprimir o vetor sem nenhum tipo de ordem
    cout << "Vetor gerado sem ordem: " << endl;
    for (auto i = 0; i < impP1.size(); i++) {
        cout << impP1[i] << " ";
    }
    cout << endl;

    // Organizando o vetor em ordem crescente
    sort(impP1.begin(), impP1.end());

    // Imprimir agora o vetor em ordem crescente
    cout << "Vetor gerado com ordem: " << endl;
    for (auto i = 0; i < impP1.size(); i++) {
        cout << impP1[i] << " ";
    }
    cout << endl;

    return 0;
}


//int main() {
//
//	srand(time(0));
//
//	for (auto i = 0; i < 50; i++) {
//		int P1 = rand() % 10;
//		impP1.push(P1);
//	}
//
//	cout << "tamanho da fila: " << impP1.size() << endl;
//
//	for (auto i = 0; i < impP1.size(); i++) {
//		cout << impP1.front() << endl;
//	}
//
//	cout << "Vetor 1: " << endl;
//	for (auto i = 0; i < impP1.size(); i++) {
//		cout << impP1[i] << " ";
//	}
//	cout << endl << endl;
//
//	return 0;
//}