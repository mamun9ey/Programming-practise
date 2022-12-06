#include<bits/stdc++.h>
using namespace std;
int n,m;

int main()
{
    vector<pair<int,pair<int,int>>>v;

    for(int i=0; i<5; i++)
    {
        int vv;
        int d;
        cin >> vv >> d;
        v.push_back({vv,{d,i+1}});
    }
    sort(v.rbegin(),v.rend());

    int ar[10]= {0};
    int arr[10]= {0};

    for(int i=0; i<5; i++)
    {
        int deadline = v[i].second.first;

        for(int j= deadline ; j>=1; j--)
        {
            if(ar[j]==0)
            {
                ar[j]=v[i].first;
                arr[j]=v[i].second.second;
                break;
            }
        }
    }
    int to=0;
    for(auto i:arr)
    {
        if(i)cout<<i<<" ->";
    }
    cout<<endl;
    for(auto i:ar)to+=i;
    cout<<to<<endl;
}
