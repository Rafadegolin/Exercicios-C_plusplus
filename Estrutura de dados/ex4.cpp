#include <iostream>
#include <cstdlib> // utilizar o malloc.

using namespace std;

struct aluno{
	int ra;
	float nota;
	char turma;
};


int main() {
	
	aluno * p;
	
	// Criar dinamicamente uma struct aluno
	p = (aluno *) malloc(sizeof(aluno));
	
	p -> ra = 123;
	p -> turma = 'A';
	
	cout << p -> ra << endl;
	
	free(p);
	
	return 0;
}
