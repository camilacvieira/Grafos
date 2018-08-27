#include <iostream>
#include "GrafoMatriz.h"
#include <list>
#include <algorithm>
using namespace std;

int main()
{
    GrafoMatriz grafoMatriz(5);
    grafoMatriz.inserirAresta(2,0);
    grafoMatriz.inserirAresta(1,2);
    grafoMatriz.inserirAresta(0,1);
    grafoMatriz.inserirAresta(4,3);
    grafoMatriz.inserirAresta(0,3);
    grafoMatriz.inserirAresta(0,4);


    grafoMatriz.imprimeMatriz();
    cout << "fim" << endl;
    return 0;
}
