#include <iostream>
#include <cstdlib> // utilizar o malloc.

using namespace std;




int main() {
	
	int * p;
	
	float * pf;
	
	int a = 20;
	
	// Cria uma variavel dinamica do tipo int
	p = (int *) malloc(sizeof(int));
	
	// Cria uma variavel dinamica do tipo int
	pf = (float *) malloc(sizeof(float));
	
	*p = 10;
	
	*pf = *p + 4;
	
	cout << *p << endl;
	cout << *pf << endl;
	
	// Destroi a variavel, liberando a memoria para uso posterior
	free(p);
		
	return 0;
}
