#include <iostream>

using namespace std;

#define MAX 10

struct fila{
	int elementos[MAX];
	int inicio;
	int fim;
};

void enqueue(fila & f, int novoElemento){
	
	f.elementos[f.fim] = novoElemento;
	f.fim++;
}

int first(fila f){
	return f.elementos[f.inicio];
}

int dequeue(fila & f){
	int removido = first(f);
	f.inicio++;
	return removido;
}

int main()
{
   	fila f1;
   	f1.inicio = f1.fim = 0;
   	enqueue(f1, 1);
   	enqueue(f1, 3);
   	enqueue(f1, 7);
   	enqueue(f1, 9);
   	
   	cout << first(f1) << endl;
   	
   	dequeue(f1);
   	dequeue(f1);
	  
	return 0;
}

