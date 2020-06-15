static int num[1000];
/* A função GRAPHbfs() implementa o algoritmo de busca em largura. Ela visita todos os vértices do grafo G que estão ao alcance do vértice s e registra num vetor num[] a ordem em que os vértices são descobertos. Esta versão da função supõe que o grafo G é representado por listas de adjacência.  (Código inspirado no programa 18.9 de Sedgewick.) */
void GRAPHbfs( Graph G, vertex s) 
{ 
   int cnt = 0;
   for (vertex v = 0; v < G->V; ++v)
      num[v] = -1;
   QUEUEinit( G->V);
   num[s] = cnt++; 
   QUEUEput( s); 

   while (!QUEUEempty( )) {
      vertex v = QUEUEget( ); 
      for (link a = G->adj[v]; a != NULL; a = a->next)
         if (num[a->w] == -1) {
            num[a->w] = cnt++; 
            QUEUEput( a->w); 
         }
   }
   QUEUEfree( ); 
}
