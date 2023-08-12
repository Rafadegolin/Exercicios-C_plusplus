#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> v1;
vector<int> v2;
vector<int> v3;

/* funcao de achar valores iguais entre os containers, usando FIND */
//int calculaIguais(vector<int>& vet1, vector<int>& vet2) {
//	int iguais = 0;
//
//	for (auto i = 0; i < vet1.size(); i++) {
//		if (find(vet2.begin(), vet2.end(), vet1[i]) != vet2.end()) {
//			iguais++;
//		}
//	}
//	return iguais++;
//}


int calculaIguais(vector<int>& vet1, vector<int>& vet2) {
	int iguais = 0;

	for (auto i = 0; i < vet1.size(); i++) {
		for (auto j = 0; j < vet2.size(); j++) {
			if (vet1[i] == vet2[j]) {
				iguais++;
				j = vet2.size();
			}
		}
	}
	return iguais;
}

int main()
{
	srand(time(0));

	for (int i = 0; i < 5; i++) {
		int j = rand() % 10;
		v1.push_back(j);
	}

	for (int i = 0; i < 5; i++) {
		int j = rand() % 10;
		v2.push_back(j);
	}

	cout << "Vetor 1: " << endl;
	for (auto i = 0; i < v1.size(); i++) {
		cout << v1[i] << " ";
	}
	cout << endl << endl;

	cout << "Vetor 2: " << endl;
	for (auto i = 0; i < v1.size(); i++) {
		cout << v2[i] << " ";
	}
	cout << endl << endl;

	for (auto i = 0; i < 5; i++) {
		int j = v1[i] - v2[i];
		v3.push_back(j);
	}

	cout << "Vetor 3: " << endl;
	for (auto i = 0; i < v1.size(); i++) {
		cout << v3[i] << " ";
	}
	cout << endl << endl;

	cout << calculaIguais(v1, v2);




}

