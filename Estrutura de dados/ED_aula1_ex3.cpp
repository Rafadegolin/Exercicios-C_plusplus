/* Imagine que você esteja fazendo um programa de geometria, neste programa, o usuário fornece uma série de pontos de coordenada x e y para montar um 
polígono.
*/

#include <iostream>
#include <cmath>
using namespace std;

#define MAX 3

struct ponto{
    int x;
    int y;
};

int main(){
    
    ponto p[MAX];
    
    for(int i = 0; i < MAX; i++){
        cout << endl << "Vertice " << i << endl;
        cout << "Coordenada X: ";
        cin >> p[i].x;
        cout << "Coordenada Y: ";
        cin >> p[i].y;
    }
    
    cout << endl << "Vértices do polígono: " << endl;
    for(int i = 0; i < MAX; i++){
        cout << "(" << p[i].x << ", " << p[i].y << ")" << endl;
    }
    
    int menorDistancia = 99999999;
    int menorIndice = -1;
    float distancia;
    
    for(int i = 0; i < MAX; i++){
        distancia = sqrt(pow(p[i].x,2) + pow(p[i].y, 2));
        if(distancia < menorDistancia){
            menorDistancia = distancia;
            menorIndice = i;
        }
    }
    
    cout << endl << "Ponto mais próximo da origem: " << endl;
    cout << "(" << p[menorIndice].x << ", " << p[menorIndice].y << ")" << endl;
    
    return 0;
    
}

