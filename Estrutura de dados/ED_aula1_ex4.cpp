/* Produto
    Codigo
    Nome
    Peso
    Preco / Peso
*/

#include <iostream>

using namespace std;

struct produto{
    int codigo;
    char nome[20];
    float peso;
    float preco;
};

void lerDados(produto & p){
    cout << "Codigo: ";
    cin >> p.codigo;
    
    cout << "Peso em kilos: ";
    cin >> p.peso;
    
    cout << "Preco por kilo: ";
    cin >> p.preco;
}

void imprimeDados(produto p){
    cout << "Codigo: ";
    cout << p.codigo;
    
    cout << " Peso em kilos: ";
    cout << p.peso;
    
    cout << " Preco por kilo: ";
    cout << p.preco << endl << endl;
}

int main(){
    
    produto p1, p2;
    lerDados(p1);
    lerDados(p2);
    imprimeDados(p1);
    imprimeDados(p2);
    
    cout << "O codigo do produto mais caro é: ";
    if(p1.peso * p1.preco > p2.peso * p2.preco){
        cout << p1.codigo << endl;
    }else{
        cout << p2.codigo << endl;
    }
 
    return 0;   
}

