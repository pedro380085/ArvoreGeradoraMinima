#include <string.h> /* memcpy */
#include <stdlib.h>
#include <stdio.h>

#include "grafo.h"

static void ler_arestas(Grafo *grafo, int m);
static void ler_commandos(Grafo *grafo, void (*fn)(const Grafo*, int, vertice_fn, aresta_fn, void *));

/**
 * O programa principal receberá sempre um argumento.
 * Se este argumento for 'B', realiza a busca em largura,
 * caso contrário, a busca em profundidade.
 */
int main(int argc, char *argv[])
{
    Grafo *grafo;
    int n, m;

    if (argc < 2) {
        return 1;
    }

    scanf("%d %d\n", &n, &m);

    grafo = criar_grafo(n, 1, MATRIZ_DE_ADJACENCIA);
//    grafo = criar_grafo(7, 1, MATRIZ_DE_ADJACENCIA);

    ler_arestas(grafo, m);
//    ler_arestas(grafo, 11);
    
    int i, j, total;
    for (i = 0; i < n_vertices(grafo); ++i) {
        for (j = 0; j < n_vertices(grafo); ++j) {
            total += peso_aresta(grafo, i, j);
        }
    }
    printf("%d ", total);
    
    printf("%d", algoritmo_prim(grafo));

    destruir_grafo(grafo);

    return 0;
}

void ler_arestas(Grafo *grafo, int m)
{
    int u, v, p;
    
//    int us[11] = {2, 5, 2, 0, 0, 1, 1, 5, 0, 1, 3};
//    int vs[11] = {5, 0, 0, 3, 4, 5, 2, 4, 6, 4, 6};
//    int ps[11] = {2, 1, 5, 8, 3, 13, 21, 5, 12, 7, 2};
    
    int i;
    for (i = 0; i < m; ++i)
    {
        scanf("%d %d %d\n", &u, &v, &p);
        adicionar_aresta(grafo, u, v, p);
//        adicionar_aresta(grafo, us[i], vs[i], ps[i]);
    }
}
