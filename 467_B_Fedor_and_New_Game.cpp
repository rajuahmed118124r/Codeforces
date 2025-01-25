                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : B. Fedor and New Game
Problem link : https://codeforces.com/contest/467/problem/B
Platform     : Codeforces
Author       : Md. Raju Miah
*/
#include<bits/stdc++.h>
using namespace std;

#define Raju ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve()
{
    int n,m,k;
    cin>>n>>m>>k;
    vector<int>v(m+2);
    for(int i=0; i<=m; i++)
    {
        cin>>v[i];
    }
    
    int x = 0;
    for(int i=0; i<m; i++)
    {
        int cnt = 0;
        for(int j=0; j<n; j++)
        {
            int p = ((v[i]>>j) & 1);
            int q = ((v[m]>>j) & 1);  
            if(p!=q) cnt++;
        }
        if(cnt<=k) x+=1;
    }
    cout<<x<<endl;
}

int main()
{
    Raju;
    solve();
    return 0;
}



                                                                     ///ALHAMDULILLAH