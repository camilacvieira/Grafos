#ifndef GRAFOLISTA_H
#define GRAFOLISTA_H


class GrafoLista
{
    public:
        GrafoLista(int vertices);
        ~GrafoLista();
        void adicionaAresta(int src, int dest);
        void removeAresta(int src, int dest);
        bool saoVizinhos(int src, int dest);



    private:
        int numeroDeVertices;
        list<int> *listaAdjacente;
};

#endif // GRAFOLISTA_H
