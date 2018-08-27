#include "GrafoMatriz.h"
#include <iostream>
using namespace std;
GrafoMatriz::GrafoMatriz(int qtdVertices){
    quantidadeVertices = qtdVertices;
    mat = new int [quantidadeVertices*quantidadeVertices];
    for (int i = 0; i < quantidadeVertices; i++){
        for (int j = 0; j < quantidadeVertices; j++){
            mat[i*j] = 0;
        }
    }
}

bool GrafoMatriz::inserirAresta(int v1, int v2){
    if (v1 < quantidadeVertices && v2 < quantidadeVertices && v1 != v2){
        mat[v1*v2] = 1;
        mat[v2*v1] = 1;
        return true;
    }
    else{
        return false;
    }
}

bool GrafoMatriz::removerAresta(int v1, int v2){
    if (v1 < quantidadeVertices && v2 < quantidadeVertices && v1 != v2){
        mat[v1*v2] = 0;
        mat[v2*v1] = 0;
        return true;
    }
    else{
        return false;
    }
}

int GrafoMatriz:: grau(int vertice){
    int grau = 0;
    for (int i = 0; i < quantidadeVertices; i++){
        grau += mat[vertice*i];
    }
    return grau;
}

GrafoMatriz::~GrafoMatriz(){
    delete [] mat;
}
void GrafoMatriz:: imprimeMatriz(){
    for(int i=0;i<quantidadeVertices;i++){
        for(int j=0; j<quantidadeVertices;j++){
            cout<<mat[i*j];
        }
        cout<<endl;
    }
}
