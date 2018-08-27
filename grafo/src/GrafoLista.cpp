#include "GrafoLista.h"
#include <list>
#include <algorithm>
#include <iostream>
using namespace std;

GrafoLista::GrafoLista(int v){
    numeroDeVertices=v;
    listaAdjacente = new list<int>[numeroDeVertices];
}

GrafoLista::~GrafoLista(){
}

void GrafoLista::adicionaAresta(int v1, inte v2){
    listaAdjacente[v1].push_back(v2);
}
void GrafoLista::removeAresta(int v1, int v2){
    listaAdjacente[v1]=NULL;
    listaAdjacente[v2].push_back(NULL);
}
