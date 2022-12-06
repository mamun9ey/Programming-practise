#include<bits/stdc++.h>
using namespace std;
#define N 6
int miniDist(int distance[], bool Tset[])
{
    int minimum=INT_MAX,ind;
    for(int k=0;k<N;k++)
    {
        if(Tset[k]==false && distance[k]<=minimum)
        {
            minimum=distance[k];
            ind=k;
        }
    }
    return ind;
}
void DijkstraAlgo(int graph[N][N],int src)
{
    int i,j;
    char str;
    int distance[N];
    bool Tset[N];
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            if(graph[i][j]<0)
            {
                cout<<"Negative Edge Detected."<<endl;
                exit(0);
            }
        }
    }
    for(int k = 0; k<N; k++)
    {
        distance[k] = INT_MAX;
        Tset[k] = false;
    }
    distance[src] = 0;
    for(int k = 0; k<N; k++)
    {
        int m=miniDist(distance,Tset);
        Tset[m]=true;
        for(int k = 0; k<N; k++)
        {
            if(!Tset[k] && graph[m][k] && distance[m]!=INT_MAX && distance[m]+graph[m][k]<distance[k])
                distance[k]=distance[m]+graph[m][k];
        }
    }
    cout<<"Vertex\t\tDistance from source vertex"<<endl;
    for(int k = 0; k<N; k++)
    {
        str=k+65;
        cout<<str<<"\t\t\t"<<distance[k]<<endl;
    }
}
int main()
{
    int i,j,s;
    int graph[N][N]={0};
    cout<<"Enter the elements of adjacency matrix of given graph:"<<endl;
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            cin>>graph[i][j];
        }
    }
    cout<<"Enter Source node:"<<endl;
    cin>>s;
    DijkstraAlgo(graph,s);
    return 0;
}
