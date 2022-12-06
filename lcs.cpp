#include <bits/stdc++.h>
using namespace std;
void lcs(string X, string Y)
{

    int m =X.size();
    int n =Y.size();
    int L[m + 1][n + 1];
    for (int i = 0; i <= m; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if (i == 0 || j == 0)
                L[i][j] = 0;

            else if (X[i - 1] == Y[j - 1])
                L[i][j] = L[i - 1][j - 1] + 1;

            else
                L[i][j] = max(L[i - 1][j], L[i][j - 1]);
        }
    }//ABCBDAB
    //BDCABA
    cout<<"Length of Subsequence:"<<L[m][n]<<endl;
    int boot = L[m][n];
    char lcs[boot+1];
    lcs[boot] = '\0';
    int i = m, j = n;
    while (i > 0 && j > 0)
    {
        if (X[i-1] == Y[j-1])
        {
            lcs[boot - 1]
                = X[i-1];
            i--;
            j--;
            boot--;
        }
        else if (L[i-1][j] > L[i][j - 1])
            i--;
        else
            j--;
    }
    cout << "LCS of " << X << " and " << Y << " is " << lcs;
}
int main()
{
    string X,Y;
    cout<<"Enter String:\n";
    cin>>X;
    cout<<"Enter checking string:\n";
    cin>>Y;
    lcs(X, Y);
    return 0;
}
