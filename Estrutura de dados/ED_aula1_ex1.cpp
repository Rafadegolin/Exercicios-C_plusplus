/* Modelo de um aluno:
    Ra,
    Nome,
    Nota,
    Periodo
*/
#include <iostream>

using namespace std;

#define MAX 10

// Dado estruturado.
struct aluno{
   int ra;
   char nome[20];
   float nota;
   int periodo;
};

int main()
{
    aluno a1, a2;
    
    float media; 
    
    a1.ra   = 100;
    a1.nota = 8.5;
    
    a2.ra = 200;
    a2.nota = 4.5;

    media = (a1.nota + a2.nota) / 2;


    return 0;
}

