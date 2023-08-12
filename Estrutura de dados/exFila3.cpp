#include <iostream>
#include <cstdlib>  //NULL, malloc e free

using namespace std;

struct No{
	int valor;
	No * prox;
};

No * inicio = NULL;
No * fim = inicio;

bool empty(){
	return inicio == NULL;
}

void enqueue (int valor){
	No * novoElemento = (No * ) malloc(sizeof(No));
	if (empty()){
		inicio = novoElemento;
		fim = novoElemento;
	}
	else{
		fim -> prox = novoElemento;
		fim = novoElemento;
	}
	novoElemento -> valor = valor;
	novoElemento -> prox = NULL;
}

int top(){
	return inicio -> valor;
}

int dequeue(){
	int valor = top();
	No * retirado = inicio;
	inicio = inicio -> prox;
	free(retirado);
	if(empty()){
		fim = NULL;
	}
	return valor;
}

void imprimeFila(){
	No * aux = inicio;
	cout << "----------------------------------" << endl;
	cout << " Inicio aponta: " << inicio << endl;
	while(aux != NULL){
		cout << " Endereço: " << aux << endl;
		cout << " Valor: " << aux -> valor << endl;
		cout << " Prox: " << aux -> prox << endl;
		aux = aux -> prox;
	}
	cout << " Fim aponta: " << fim << endl << endl;
}


int main(){
	
	imprimeFila();
	enqueue(1);
	imprimeFila();
	enqueue(2);
	imprimeFila();
	enqueue(3);
	imprimeFila();	
	dequeue();
	imprimeFila();	
	dequeue();
	imprimeFila();
	dequeue();
	imprimeFila();
		
	return 0;
}
