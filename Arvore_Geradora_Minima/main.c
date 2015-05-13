#include <string.h> /* memcpy */
#include <stdlib.h>
#include <stdio.h>

#include "grafo.h"

#define RELEASE 1

static void ler_arestas(Grafo *grafo, int m);

/**
 * O programa principal receberá sempre um argumento.
 * Se este argumento for 'B', realiza a busca em largura,
 * caso contrário, a busca em profundidade.
 */
int main(int argc, char *argv[])
{
    Grafo *grafo;

    if (argc < 2) {
        return 1;
    }
    
#if RELEASE
    int n, m;
    scanf("%d %d\n", &n, &m);

    grafo = criar_grafo(n, 1, MATRIZ_DE_ADJACENCIA);
#else
    grafo = criar_grafo(10, 1, MATRIZ_DE_ADJACENCIA);
#endif

#if RELEASE
    ler_arestas(grafo, m);
#else
    ler_arestas(grafo, 30);
#endif
    
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
#if RELEASE
    int u, v, p;
#else
    int us[30] = {6, 9, 4, 6, 8, 9, 9, 9, 4, 7, 4, 7, 8, 4, 8, 6, 2, 8, 3, 7, 7, 8, 8, 8, 3, 5, 9, 1, 5, 6};
    int vs[30] = {1, 3, 3, 5, 7, 8, 7, 6, 0, 3, 1, 0, 2, 2, 1, 3, 1, 3, 2, 2, 6, 6, 5, 4, 0, 0, 0, 0, 4, 2};
    int ps[30] = {27, 39, 59, 67, 47, 55, 23, 92, 53, 97, 41, 64, 96, 24, 5, 34, 19, 21, 60, 57, 98, 13, 53, 17, 3, 51, 9, 45, 69, 95};
#endif
    
    int i;
    for (i = 0; i < m; ++i)
    {
#if RELEASE
        scanf("%d %d %d\n", &u, &v, &p);
        adicionar_aresta(grafo, u, v, p);
#else
        adicionar_aresta(grafo, us[i], vs[i], ps[i]);
#endif
    }
}
