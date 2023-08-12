#include <cstdlib>
#include <iostream>
#include <stdlib.h>

using namespace std;

#define LINHAS 10
#define COLUNAS 15
#define INICIO_LINHA 1
#define INICIO_COLUNA 0
#define FIM_LINHA 2
#define FIM_COLUNA 14

int l = INICIO_LINHA;
int c = INICIO_COLUNA;

int passos = 0;

int esquerda, direita, baixo, cima;

int labirinto[LINHAS][COLUNAS] = {
    {1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 0, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1},
    {1, 0, 1, 0, 1, 0, 1, 1, 1, 0, 1, 1, 1, 0, 0},
    {1, 0, 1, 0, 1, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1},
    {1, 0, 1, 0, 1, 1, 1, 0, 1, 0, 1, 0, 1, 0, 1},
    {1, 0, 1, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1},
    {1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1},
    {1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1},
    {1, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1}
};

void imprimirLabirinto() {
    char c;
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            switch (labirinto[i][j]) {
            case 0:
                c = ' ';
                break; //espaço vago
            case 1:
                c = '#';
                break; //parede
            case 2:
                c = '@';
                break;
            case 3:
                c = ' ';
                break; //caminho percorrido no labirinto
            default:
                c = ' ';
                break; //qualquer outro valor é considerado como espaço vazio
            }
            cout << c;
        }
        cout << endl;
    }
}

void imprimirLabirinto2() {
    char c;
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            if (labirinto[i][j] == 0) {
                c = ' ';
            }
            if (labirinto[i][j] == 1) {
                c = '+';
            }
            if (labirinto[i][j] == 2) {
                c = '@';
            }
            if (labirinto[i][j] == 3) {
                c = ' ';
            }
            cout << c;
        }
        cout << endl;
    }
}

void AndarLabirintoAuto() {
    system("CLS");
    esquerda = labirinto[l][c - 1];
    direita = labirinto[l][c + 1];
    cima = labirinto[l - 1][c];
    baixo = labirinto[l + 1][c];
    if (baixo == 0) {
        l++;
        labirinto[l][c] = 2;
    }
    else if (direita == 0) {
        c++;
        labirinto[l][c] = 2;
    }
    else if (cima == 0) {
        l--;
        labirinto[l][c] = 2;
    }
    else if (esquerda == 0) {
        c--;
        labirinto[l][c] = 2;
    }
    //*******************************************************
    else if (baixo == 2) {
        l++;
        labirinto[l][c] = 2;
        labirinto[l - 1][c] = 3;
    }
    else if (direita == 2) {
        c++;
        labirinto[l][c] = 2;
        labirinto[l][c - 1] = 3;
    }
    else if (cima == 2) {
        l--;
        labirinto[l][c] = 2;
        labirinto[l + 1][c] = 3;
    }
    else if (esquerda == 2) {
        c--;
        labirinto[l][c] = 2;
        labirinto[l][c + 1] = 3;
    }
}

void ModoAutomatico() {
    while (l != FIM_LINHA || c != FIM_COLUNA) {
        imprimirLabirinto2();
        cout << endl;
        cout << "Linha: " << l << endl;
        cout << "Coluna: " << c << endl;
        cout << "Placar: " << passos << " passo(s)." << endl;
        cout << endl;
        //system ("PAUSE");
        AndarLabirintoAuto();
        passos++;
    }
}

int main() {
    ModoAutomatico();
    system("CLS");
    cout << "Fim de Jogo!" << endl << endl;
    cout << "Placar: " << passos << " passos." << endl << endl;
    imprimirLabirinto2();
    cout << endl;
    system("PAUSE");
    return 0;
}


