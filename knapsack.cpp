#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,m=0,n=0,profit=0;
    cout<<"Enter Total Number of Things:\n";
    cin>>n;
    cout<<"Enter Size of knapsack:\n";
    cin>>m;
    float w[n]= {0};
    float p[n]= {0};
    float x[n]={0};
    float unit[n]={0};
    cout<<"Enter Things Weight:\n";
    for(i=0; i<n; i++)
        cin>>w[i];
    cout<<"Enter Things Price:\n";
    for(i=0; i<n; i++)
        cin>>p[i];
    for(i=0; i<n; i++)
    {
        unit[i]=(p[i]/w[i]);
    }
    for(i=0; i<n-1; i++)
    {
        for(j=0; j<n-1; j++)
        {
            if(unit[j]<unit[j+1])
            {
                swap(unit[j],unit[j+1]);
                swap(w[j],w[j+1]);
                swap(p[j],p[j+1]);
            }
        }
    }
    int U=m;
    for(i=0; i<n; i++)
    {
        if(w[i]>U)
            break;
        x[i]=1;
        U=U-w[i];
    }
    if(i<=n)
    {
        x[i]=U/w[i];
    }
    cout<<"Output:\n\n";
    for(i=0;i<n;i++)
    {
        cout<<w[i]<<" KGs "<<x[i]<<" Times."<<endl;
    }
    cout<<endl;
    for(i=0;i<n;i++)
    {
        profit=profit+p[i]*x[i];
    }
    cout<<"profit="<<profit<<endl;
    return 0;
}
