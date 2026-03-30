#include <stdio.h>
#include <stdlib.h>
#define MAX 100
typedef struct {
  int numVertices
  int matrizadj[MAX][MAX];
} Grafo;
//Função para criar grafos
Grafo*criarGrafo(int vertices) {
  Grafo*g =(Grafo*)malloc(sizeof(Grafo));
if(g==NULL)
  Printf("Erro de memória")
    break
  }
g->numVertices=vertices;
//inicializar a matriz com 0
for(int i=0;i<vertices;i++){
  for(int j=0;j<vertices;j++){
    g->matrizadj[i][j]=0
      }
}
return g;
}
void adicionarAresta(Grafo*g,int v1,int v2) {
  printf("Vertice Inválido\n");
return;
 }
  g->matrizadj[v1][v2]=1
  g->matrizadj[v2][v1]=1
}
void imprimirGrafo(Grafo*g){
  printf("\nMatriz de Adjacencia:\n");
  for (int i=0;i<g->numVertices;i++){
    for(int j=0;j<->numVertices;j++){
  printf(""%d",g->matrizadj[i][i]);
    }
printf("\n");
  }
}
int main() {
  int vertices,arestas;
int v1, v2;
printf("Numero de vertices");
scanf("%d",&arestas,i++);
Grafo*g=criarGrafo(vertices);
printf("Nunero de arestas");
scanf("%d",&arestas);
for(int=0;i<arestas,i++){
  printf("Aresta %d(v1v2):"i+1)
  scanf("%d %d", &v1, &v2);

  adicionarAresta(g,v1,v2);
}
imprimirGrafo(g);
free(g);


return 0;
}


  
  
    

      
