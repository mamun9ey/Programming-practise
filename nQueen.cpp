#include<bits/stdc++.h>
using namespace std;

int x[20],countt;

int main()
{
    int n,i,j;
    void queen(int k,int n);
    cout<<"Enter Number of Queen:\n";
    cin>>n;
    queen(1,n);
    return 0;
}
void print(int n)
{
    int i,j;
    cout<<"\n\nSolution"<<++countt<<":\n\n";
    for(i=1; i<=n; ++i)
        cout<<"\t"<<i;
    for(i=1; i<=n; ++i)
    {
        cout<<"\n\n"<<i;
        for(j=1; j<=n; ++j)
        {
            if(x[i]==j)
                cout<<"\t1";
            else
                cout<<"\t-";
        }
    }
}
int place(int k,int i)
{
    for(int j=1; j<=k-1; ++j)
    {
        if(x[j]==i)
            return 0;
        else
        {
            if(abs(x[j]-i)==abs(j-k))
                return 0;
        }
    }
    return 1;
}
void queen(int k,int n)
{
    int i;
    for(i=1; i<=n; ++i)
    {
        if(place(k,i))
        {
            x[k]=i;
            if(k==n)
                print(n);
            else
                queen(k+1,n);
        }
    }
}
