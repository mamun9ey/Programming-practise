#include <bits/stdc++.h>
using namespace std;
#define V 6
#define E 9
void BellmanFord(int graph[][3],int src)
{
    char str;
    int dis[V];
    for (int i = 0; i < V; i++)
        dis[i] = INT_MAX;
    dis[src] = 0;
    for (int i = 0; i < V - 1; i++)
    {
        for (int j = 0; j < E; j++)
        {
            if (dis[graph[j][0]] != INT_MAX && dis[graph[j][0]] + graph[j][2] <dis[graph[j][1]])
                dis[graph[j][1]] =dis[graph[j][0]] + graph[j][2];
        }
    }
    for (int i = 0; i < E; i++)
    {
        int x = graph[i][0];
        int y = graph[i][1];
        int weight = graph[i][2];
        if (dis[x] != INT_MAX && dis[x] + weight < dis[y])
        {
            cout << "Graph contains negative weight cycle"<< endl;
            exit(0);
        }
    }
    cout << "Vertex\t\tDistance from Source" << endl;
    for (int i = 0; i < V; i++)
        {
            str=i+65;
            cout << str << "\t\t" << dis[i] << endl;
        }
}
int main()
{
    int i=0,j=0,s;
    int graph[E][3]= {0};
    cout<<"Enter the elements of adjacency matrix of given graph:"<<endl;
    for(i=0; i<E; i++)
    {
        for(j=0; j<3; j++)
        {
            cin>>graph[i][j];
        }
    }
    cout<<"Enter Source node:"<<endl;
    cin>>s;
    BellmanFord(graph, s);
    return 0;
}
