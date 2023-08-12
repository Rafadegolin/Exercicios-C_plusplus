#include <iostream>
#include <cstdlib>

using namespace std;

struct No{
	int valor;
	No * prox;
};

No * cabeca = NULL;

bool empty(){
	return cabeca == NULL;
}

void insert(int valor, int pos){
	No * novoElemento = (No *) malloc(sizeof(No));
	novoElemento -> valor = valor;
	
	if(pos == 0){
		novoElemento -> prox = cabeca;
		cabeca = novoElemento;
	}else{
		No * aux = cabeca;
		for(int i = 0; i < pos-1; i++){
			aux = aux -> prox;
		}
		novoElemento -> prox = aux -> prox;
		aux -> prox = novoElemento;
	}
}

int element (int pos){
	No * aux = cabeca;
	for(int i = 0; i < pos; i++){
		aux = aux -> prox;
	}
	return aux -> valor;
}

void printList(){
	No * aux = cabeca;
	while(aux != NULL){
		cout << aux -> valor << " ";
		aux = aux -> prox;
	}
	cout << endl << endl;
}

int removeL(int pos){
	No * removido;
	if(pos == 0){
		removido = cabeca;
		cabeca = removido -> prox;
	}else{
		No * aux = cabeca;
		for(int i = 0; i < pos-1; i++){
			aux = aux -> prox;
		}
		removido = aux -> prox;
		aux -> prox = removido -> prox;
	}
	
	int valor = removido -> valor;
	free(removido);
	return valor;
}

int main(){
	
	insert(1, 0);
	printList();
	insert(2, 0);
	printList();
	insert(3, 1);
	printList();
	insert(4, 2);
	printList();
	insert(5, 1);
	printList();
	
	cout << element(3) << endl;
	cout << element(1) << endl;
	
	removeL(0);
	printList();
	removeL(2);
	printList();
	
	return 0;
}
