/* Modelo de um carro
    Modelo
    Dono
    tempo de permanencia
    placa
    valor pago
    vaga (letra)
*/

#include <iostream>

using namespace std;

struct carro{
    char modelo[20];
    char dono[20];
    int  tempo;
    char placa[20];
    float valorPago;
    char vaga;
};  

int main(){
    
    carro c;
    
    cout << "Modelo: ";
    cin >> c.modelo;
    cout << "Dono: ";
    cin >> c.dono;
    cout << "Tempo de permanência: ";
    cin >> c.tempo;
    cout << "Placa: ";
    cin >> c.placa;
    cout << "Valor pago: ";
    cin >> c.valorPago;
    cout << "Vaga: ";
    cin >> c.vaga;

    cout << endl << "O seguinte carro " << c.modelo << " de placa " << c.placa << " pertencente a "<< c.dono 
         << ", estacionou na vaga " << c.vaga << ", ficou " << c.tempo << " minutos.\nValor pago: " 
         << c.valorPago << endl << endl;
    
    
    
    return 0;
}

