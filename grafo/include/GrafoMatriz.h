#ifndef GRAFOMATRIZ_H
#define GRAFOMATRIZ_H


class GrafoMatriz
{
    public:
        GrafoMatriz(int qtdVertices);
        ~GrafoMatriz();
        bool inserirAresta(int v1, int v2);
        bool removerAresta(int v1, int v2);
        int grau(int vertice);
        void imprimeMatriz();
    private:
        int *mat;
        int quantidadeVertices;
};

#endif // GRAFOMATRIZ_H
