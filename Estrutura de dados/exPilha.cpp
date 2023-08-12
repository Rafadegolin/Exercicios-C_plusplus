// PILHA ESTRUTURA DE DADOS COM PONTEIROS.

#include <iostream>
#include <cstdlib>  // Para usar a malloc e o NULL

using namespace std;

struct no{
	int valor;
	no * prox;
};

no * topo = NULL;

void push(int elemento){
	no * novoElemento = (no *) malloc(sizeof(no)); // Cria uma variavel em tempo de execução que sera o novo topo
	novoElemento -> prox = topo;  // Dar a maozinha para se unir na estrutura
	topo = novoElemento;  // O novo elemento passa a ser o topo
	topo -> valor = elemento;
}

int top(){
	return topo -> valor;
}

int pop(){
	int removido = top();
	no * antigoTopo = topo;  // Salva o topo atual
	topo = antigoTopo -> prox; // Faz o topo apontar o elemento anterior
	free(antigoTopo); // Destroi a variavel
	return removido;
}

void imprimePilha(){
	no * aux = topo;
	while(aux != NULL){
		cout << aux -> valor << " ";
		aux = aux -> prox;
	}
	cout << endl;
}

int main(){

	push(10);
	imprimePilha();
	push(5);
	imprimePilha();
	push(15);
	imprimePilha();
	pop();
	imprimePilha();
	push(20);
	imprimePilha();
	pop();
	imprimePilha();
	pop();
	imprimePilha();
	
	return 0;
}
