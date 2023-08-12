#include <iostream>
#include <cstdlib> // utilizar o malloc.

using namespace std;




int main() {
	
	int * p;
	
	float * pf;
	
	int a = 20;
	
	p = (int *) malloc(sizeof(int));
	
	pf = (float *) malloc(sizeof(float));
	
	*p = 10;
	
	*pf = *p + 4;
	
	cout << *p << endl;
	cout << *pf << endl;
	
	return 0;
}
