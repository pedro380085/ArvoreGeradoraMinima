Lab 04 - SCC0216 - ICMC-USP
==============

O conteúdo abaixo foi obtido diretamente do [run.codes](http://run.codes).

Esse trabalho é referente ao laboratório 4 de Modelagem de Grafos para a Turma SCC0216 do ICMC-USP. O mesmo descreve como encontrar a árvore geradora mínima de um grafo, retornanando a soma dos pesos das arestas.


Especificação
==============
1 Especificação
O laboratório consiste na implementação de um algoritmo para encontrar árvores geradoras
mínimas em grafos ponderados não-direcionados. Deverá ser utilizada a linguagem de
programação C99. A árvore geradora mínima deverá ser encontrada utilizando os algoritmos
de Prim ou de Kruskal. Não é necessário implementar versões eficientes com lista de prioridade
ou find-set. No entanto, o programa terá um tempo limite de 3 segundos para execução
e impressão dos resultados.
O programa principal deverá ler da entrada padrão a lista de arestas do grafo e representá-
lo em memória – matriz ou lista de adjacência, conforme desejar. Em seguida, o programa
deverá imprimir na saída padrão a soma dos pesos das arestas do grafo, executar o algoritmo
para encontrar a árvore geradora mínima, e imprimir novamente a soma dos pesos das arestas
da árvore geradora mínima na saída padrão.
Na primeira linha da entrada, haverá o descritor do grafo contendo 2 números separados
por espaço. Os números indicam, nesta ordem, o número de vértices e de arestas do grafo. Nas
linhas seguintes, as arestas do grafo serão representadas por três números indicando os vértices
da aresta e o seu peso (valores de 1 à 99 inteiros).
As somas deverão ser impressas separadas por espaço. Após imprimir os pesos, insira uma
quebra de linha.
Por exemplo, a entrada
7 11
2 5 2
5 0 1
2 0 5
0 3 8
0 4 3
1 5 13
1 2 21
5 4 5
0 6 12
1 4 7
3 6 2
1
resultará no grafo e na árvore geradora mínima:
2 1 5
8
3
13 21 5
12
7
2
●
●
●
●
●
●
●
0
1
2
3
4
5
6
2 1
8
3
7
2
●
●
●
●
●
●
●
0
1
2
3
4
5
6
Deste modo, o programa terá como saída
79 23
2 Submissão
O exercício deverá ser entregue pelo sistema run.codes1
. Os alunos deverão submeter seus
códigos no exercício 4 - Árvores Geradoras Mínimas até o final da aula.
Somente a última submissão será considerada. Todas as demais submissões
serão desconsideradas, incluindo aquelas dentro do período normal de submissão.
Os exercícios deverão submetidos em um arquivo .zip contendo código-fonte do programa e
um Makefile para compilação e teste do trabalho. Se necessário, incluam no .zip um arquivo
chamado readme com informações extras.
Os códigos deverão ser compilados pelo compilador gcc com a flag -std=c99. A não conformidade
das implementações com a versão C estabelecida acarretará em nota zero.
Atenção! Todos os códigos enviados passarão pelo sistema de veri-
ficação de plágio. Se forem identificados códigos duplicados, todos os
alunos envolvidos receberão nota zero.
3 Correção e Avaliação
As implementações serão avaliadas por meio de casos de testes, com peso 7, e pela legibilidade
e boas práticas de programação, com peso 3.
Os seguintes casos implicarão em nota zero:
1https://run.codes/
2
• não conformidade com a versão C99;
• programas não estruturados como um TAD; e
• exercícios plagiados.
4 Dicas
• Uma árvore é um caso específico de um grafo, portanto, não é necessário implementar um
TAD para representar a árvore.
• Certifiquem de não contar os pesos duas vezes na matriz ou lista de adjacência, uma vez
que o grafo é não-direcionado.