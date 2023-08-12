#include <iostream>
#include <cstdlib>

using namespace std;

#define MAX 6

struct vertice{
    bool visitado;
    int custo;
    int origem;
};

vertice tabela [MAX];

void imprimeDjikstra(){
    
    cout << "Vert   Vis    Custo  Origem " << endl;
    
    for(int i = 0; i < MAX; i++){
        cout << i << "\t" << tabela[i].visitado << "\t" << tabela[i].custo << "\t" << tabela[i].origem << endl;
    }
    cout << endl;
}

int main()
{
    // Matrix de adjcencências
    int adj[][MAX] = {    //0  1  2  3  4  5
                           {0, 1, 3, 7, 3, 9},   // 0
                           {9, 0, 1, 0, 3, 1},   // 1                       
                           {0, 3, 0, 8, 1, 0},   // 2
                           {1, 0, 0, 0, 4, 2},   // 3   
                           {0, 0, 1, 0, 0, 6},   // 4
                           {0, 0, 1, 1, 5, 0},   // 5
                     };
    
    for(int i = 0; i < MAX; i++){
        tabela[i].visitado = false;
        tabela[i].custo    = RAND_MAX;   // Infinito
        tabela[i].origem   = -1;       // Sem origem
    }
    
    int atual = 0; // Definição da origem
    bool terminou = false;
    int menorCusto = RAND_MAX; // Começa com infinito
    
    tabela[atual].visitado = true; // E marcar a origem como visitada
    tabela[atual].custo    = 0;
    
    int cont = 0;
    
    // Definição o algoritmo de Djikstra
    while(!terminou){
        int custoAcumulado = tabela[atual].custo;
        
        // 1) Encontrar os vértices adjacentes do vértice atual.
        for(int j = 0; j < MAX; j++){
            // Só olhará arestas que CHEGAM em vértices que NÃO foram visitados
            if(!tabela[j].visitado){
                // Verificar se existe uma aresta entre o nó atual e o vértice adjacente
                if(adj[atual][j] > 0){
                    // Agora sim, existe uma aresta entre os vértices avaliados na qual o vértice incidente não foi visitado
                    if(custoAcumulado + adj[atual][j] < tabela[j].custo){
                        tabela[j].custo = custoAcumulado + adj[atual][j];
                        tabela[j].origem = atual;
                    }
                }
            }
        }
        
        imprimeDjikstra();
        menorCusto = RAND_MAX;
        // Escolher o próximo vértice que NÃO foi visitado
        for(int i = 0; i < MAX; i++){
            if(!tabela[i].visitado){
                if(tabela[i].custo < menorCusto){
                    menorCusto = tabela[i].custo;
                    atual = i;
                }
            }
        }
        
        if(menorCusto == RAND_MAX)
            terminou = true;
        else{
            tabela[atual].visitado = true;
            cout << "Proximo vertice = " << atual << endl;
        }
    }

    return 0;
}
