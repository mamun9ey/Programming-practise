#include<iostream>
using namespace std;
int x[10];
void SumofSubset(int s,int k,int r,int w[],int m)
{
    x[k]=1;
    if(s+w[k]==m)
    {
        for(int i=0;i<=k;i++)
        {
            cout<<x[i]<<" ";
        }
        cout<<endl;
    }
    else if(s+w[k]+w[k+1]<=m)
    {
        SumofSubset(s+w[k],k+1,r-w[k],w,m);
    }
    if(((s+r-w[k])>=m)&&((s+w[k+1])<=m))
    {
        x[k]=0;
        SumofSubset(s,k+1,r-w[k],w,m);

    }
}
int main()
{
    int i,m,n,sum=0;
    cout<<"Enter Sum:\n";
    cin>>m;
    cout<<"Enter Total Number:\n";
    cin>>n;
    int w[n];
    cout<<"Enter Numbers:\n";
    for(i=0;i<n;i++)
    {
        cin>>w[i];
    }
    for(i=0;i<n;i++)
    {
        sum=sum+w[i];
    }
    cout<<"\nOutput: \n";
    SumofSubset(0,0,sum,w,m);
    return 0;
}
