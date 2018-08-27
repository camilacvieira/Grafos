#ifndef GRAFOLISTA_H
#define GRAFOLISTA_H


class GrafoLista
{
    public:
        GrafoLista(int v);
        ~GrafoLista();
        void adicionaAresta(int v1, int v2);
        void removeAresta(int v1, int v2);
        bool saoVizinhos(int v1, int v2);



    private:
        int numeroDeVertices;
        list<int> *listaAdjacente;
};

#endif // GRAFOLISTA_H
