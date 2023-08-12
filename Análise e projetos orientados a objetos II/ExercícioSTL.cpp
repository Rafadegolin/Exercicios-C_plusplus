#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/* utlizando vetor */
//vector<int> v1;
// 
//int main(){
//
//    srand(time(0));
//
//    // gerando o vetor com numeros randomicos
//    for (int i = 0; i < 5; i++) {
//        int j = rand() % 100;
//        v1.push_back(j);
//    }
//
//    // Imprimir o vetor sem nenhum tipo de ordem
//    cout << "Vetor gerado sem ordem: " << endl;
//    for (auto i = 0; i < v1.size(); i++) {
//        cout << v1[i] << " ";
//    }
//    cout << endl;
//
//    // Organizando o vetor em ordem crescente
//    sort(v1.begin(), v1.end());
//
//    // Imprimir agora o vetor em ordem crescente
//    cout << "Vetor gerado com ordem: " << endl;
//    for (auto i = 0; i < v1.size(); i++) {
//        cout << v1[i] << " ";
//    }
//    cout << endl;
//
//    return 0;
//}

/* utlizando matriz*/

int l = 3; // numeros de linhas
int c = 4; //numero de colunas

vector<vector<int>> v1(l, vector<int>(c));

int main() {

    srand(time(0));

    for (auto i = 0; i < v1.size(); i++) {
        int j = rand() % 50;
        v1[i].resize(j);
    }

    for (auto i = 0; i < v1.size(); i++) {
        cout << "Linha " << i << " possui tamanho: " << v1[i].size() << endl;
    }

    for (auto i = 0; i < v1.size(); i++) {
        for (auto j = 0; j < v1[i].size(); j++) {
            v1[i][j] = rand() % 20;
        }
    }

    cout << "max size: " << v1[0].max_size() << endl; // tamanho maximo alocado na linha 0
    cout << "capacity: " << v1[0].capacity() << endl; // capacidade de alocação do vetor
    cout << "empty: " << v1[0].empty() << endl; // função que testa vazio na linha 0
    
    v1[0].shrink_to_fit();

    cout << "size: " << v1[0].size() << endl; // tamanho alocado na linha 0
    cout << "max size: " << v1[0].max_size() << endl; // tamanho maximo alocado na linha 0
    cout << "capacity: " << v1[0].capacity() << endl; // capacidade de alocação do vetor na linha 0

    cout << "posicao 2, linha 0 pelo metodo: " << v1[0].at(2) << endl; // metodo pra acessar a posicao 2 na linha 0
    cout << "posicao 2, linha 0 jeito padrao: " << v1[0][2] << endl;
    cout << "front: " << v1[0].front() << endl;
    cout << "back: " << v1[0].back() << endl;

    auto* aux = v1[0].data();
    
    // para imprimir a posição 2
    for (int i = 0; i < 2; i++)aux++; // anda o ponteiro 2x

    cout << "posicao 2, linha 0 por ponteiro: " << *aux << endl;


}
