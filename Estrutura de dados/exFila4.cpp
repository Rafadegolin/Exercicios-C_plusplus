#include <iostream>
#include <cstdlib>  //NULL, malloc e free

using namespace std;

struct No{
	int valor;
	No * prox;
};

No * cabeca = NULL;


bool empty(){
	return cabeca == NULL;
}

void enqueue (int valor){
	No * novoElemento = (No * ) malloc(sizeof(No));
	if (empty()){
		cabeca = novoElemento;
		novoElemento -> prox = cabeca;
	}
	else{
		novoElemento -> prox = cabeca -> prox;
		cabeca -> prox = novoElemento;
		cabeca = novoElemento;
	}
	novoElemento -> valor = valor;
}


void imprimeFila(){
	No * aux = cabeca;
	
	cout << aux -> valor << " ";
	aux = aux -> prox;
	
	while(aux != cabeca){
		cout << aux -> valor << " ";
		aux = aux -> prox;
	}
	cout << endl << endl;
}

int current(){
	return cabeca -> valor;
}

int dequeue(){
	int valor = current();
	No * retirado = cabeca;
	No * aux = cabeca;
	while(aux -> prox != cabeca){ // Para um nó antes do nó apontado pelo ponteiro cabeça
   		aux = aux -> prox;
	}
	
	aux -> prox = cabeca -> prox;
	cabeca = cabeca -> prox;
	free(retirado);
	 
	return valor;
}

int main(){
	
	enqueue(1);
	imprimeFila();
	enqueue(2);
	imprimeFila();
	enqueue(3);
	imprimeFila();
	enqueue(4);
	imprimeFila();
	enqueue(5);
	imprimeFila();
	cabeca = cabeca -> prox;
	cabeca = cabeca -> prox;
	imprimeFila();
	dequeue();
	imprimeFila();
	dequeue();
	imprimeFila();
	dequeue();
	imprimeFila();
	dequeue();
	imprimeFila();
		
	return 0;
}
