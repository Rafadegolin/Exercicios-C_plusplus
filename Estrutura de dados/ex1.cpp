#include <iostream>

using namespace std;

struct aluno{
	int ra;
	float nota;
	char turma;
};

void lerAluno(aluno & s){
	cout << "Ra: ";
	cin >> s.ra;
	cout << "Nota: ";
	cin >> s.nota;
	cout << "Turma: ";
	cin >> s.turma;
}

int main() {
	
	aluno * ps;  // ponteiro para struct do tipo aluno.
	aluno a;
	lerAluno(a);
	
	ps = & a;
	(*ps).ra = 234;                       // ps -> ra = 234
	
	if((*ps).nota >= 5){                 // if(ps -> nota >= 5)
		cout << "Aprovado" << endl;
	}
	
	ps -> turma = 'B';                   // (*ps).turma = 'B'
	
	ps -> nota = ps -> nota + 2.5;       // (*ps).nota = (*ps).nota + 2.5;

	return 0;
}
