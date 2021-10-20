#ifndef __GRAPH__
#define __GRAPH__

#define SIZE 30
#include <iostream>
#include <string>
using namespace std;

class Graph {
public:
    Graph();

    // добавление ребра
    void addEdge(int v1, int v2, int weight);

    // добавление вершины
    void addName(string vName);
 
    // удаление вершины
    void delName(string vName);
    // удаление ребра
    void delEdge(int v1, int v2);
    // показать граф
    void showGraph();
    // показать список
    int showList();
    // поиск знакомств (stage - "stage рукопожатий")
    void findFriends(int stage);

 private:
    bool edgeExists(int v1, int v2);
    bool vertexExists(string v);

    int matrix[SIZE][SIZE]; // матрица смежности

    string names[SIZE]; // хранилище имен 
    int vertexCount; // количество добавленных вершин
};
#endif