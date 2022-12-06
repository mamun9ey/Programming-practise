#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,k,profit=0,Count=0,M=0;
    cout<<"Enter Number of Jobs:\n";
    cin>>n;
    int job[n]= {0};
    int d[n]= {0};
    int p[n]= {0};
    for(i=1; i<=n; i++)
    {
        job[i]=i;
    }
    cout<<"Enter Deadlines:\n";
    for(i=1; i<=n; i++)
    {
        cin>>d[i];
    }
    cout<<"Enter Profits:\n";
    for(i=1; i<=n; i++)
    {
        cin>>p[i];
    }
    for(i=1; i<=n-1; i++)
    {
        for(j=1; j<=n-1; j++)
        {
            if(p[j]<p[j+1])
            {
                swap(d[j],d[j+1]);
                swap(p[j],p[j+1]);
                swap(job[j],job[j+1]);
            }
        }
    }
    cout<<"Jobs:\n";
    for(i=1; i<=n; i++)
        cout<<job[i]<<"\t";
    cout<<endl;
    cout<<"Deadlines:\n";
    for(i=1; i<=n; i++)
        cout<<d[i]<<"\t";
    cout<<endl;
    cout<<"Profits:\n";
    for(i=1; i<=n; i++)
        cout<<p[i]<<"\t";
    cout<<endl;
    M=d[0];
    for(i=1;i<=n;i++)
    {
        if(M<d[i])
        {
            M=d[i];
        }
    }
    int seq[M]= {0};
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(d[j]==i)
            {
                Count++;
                if(Count==1)
                {
                    seq[i]=job[j];
                    profit=profit+p[j];
                }
                else if(Count>1)
                {
                    for(k=i;k>=1;k--)
                    {
                        if(seq[i]==NULL||(p[i]>p[k]&&d[i]>d[k]))
                        {
                            seq[i]=job[j];
                            profit=profit+p[j];
                        }
                    }
                }
            }
        }
        Count=0;
    }



    for(i=1;i<=M;i++)
        cout<<seq[i]<<endl;
    cout<<"\nProfit:\n";
    cout<<profit;
    return 0;
}
