#include "GrafoLista.h"
#include <list>
#include <algorithm>
#include <iostream>
using namespace std;

GrafoLista::GrafoLista(int vertices){
    numeroDeVertices=vertices;
    listaAdjacente = new list<int>[numeroDeVertices];
}

GrafoLista::~GrafoLista(){
}

void GrafoLista::adicionaAresta(int src, int dest){
    listaAdjacente[src].push_front(dest);
}
void GrafoLista::removeAresta(int src, int dest){
    listaAdjacente[src]=NULL;
    listaAdjacente[dest].push_back(NULL);
}
