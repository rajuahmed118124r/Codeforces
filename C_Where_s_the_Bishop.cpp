                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : C. Where's the Bishop?
Problem link : https://codeforces.com/problemset/problem/1692/C
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
    int t, count=0;
    cin>>t;
    while(t--)
    {
        vector<vector<char>>v(8,vector<char>(8));
        for(int i=0; i<8; i++)
        {
            for(int j=0; j<8; j++)
            {
                cin>>v[i][j];
            }
        }
        int x=-1, y=-1;
        for(int i=0; i<8; i++)
        {
            for(int j=0; j<8; j++)
            {
                if(v[i][j]=='#')
                {
                    if(i>0 && j>0 && i<7 && j<7 && v[i-1][j-1]=='#' && v[i-1][j+1]=='#' && v[i+1][j-1]=='#' && v[i+1][j+1]=='#')
                    {
                        x = i+1,y = j+1;
                    }
                }
                
            }
        }
        cout<<x<<" "<<y<<endl;
    }
}


int main()
{
    Raju;
    solve();
return 0;
}


                                                                     ///ALHAMDULILLAH