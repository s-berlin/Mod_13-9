#ifndef __GRAPH__
#define __GRAPH__

#define SIZE 20
#include <iostream>
#include <string>
using namespace std;

class Graph {
public:
    Graph();

    // ���������� �������
    void addName(string vName);
    // ���������� �����
    void addEdge(int v1, int v2, int weight);
    // �������� �������
    void delName(string vName);
    // �������� �����
    void delEdge(int v1, int v2);
    // �������� ����
    void showGraph();
    // �������� ������
    int showList();
    // ����� ��������� (stage - "stage �����������")
    void findFriends(int stage);

 private:
    bool edgeExists(int v1, int v2);
    bool vertexExists(string v);

    int matrix[SIZE][SIZE]; // ������� ���������

    string names[SIZE]; // ��������� ���� 
    int vertexCount; // ���������� ����������� ������
};
#endif

