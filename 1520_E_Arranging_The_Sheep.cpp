                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : E. Arranging The Sheep
Problem link : https://codeforces.com/problemset/problem/1520/E
Platform     : Codeforces
Author       : Md. Raju Miah
*/
#include<bits/stdc++.h>
using namespace std;


#define Raju ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define pb push_back
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define zero cout<<0<<endl
#define all(x) (x).begin(), (x).end()


int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};
int dx8[] = {0, 0, 1, 1, 1, -1, -1, -1};
int dy8[] = {1,-1, 1, -1, 0, 0, -1, 1};
const int N = 1e3;
char maze[N][N];
int visited[N][N];


void solve()
{
    int n;
    string s;
    cin>>n>>s;
    vector<int>v;
    for(int i=0; i<n; i++)
    {
        if(s[i]=='*')
        {
            v.pb(i+1);
        }
    }
    if(v.size()<=1)
    {
        cout<<0<<endl;
        return;
    }
    int midIdx = v.size()/2;
    int mid = v[midIdx];
    ll ans = 0;
    for(int i=0; i<midIdx; i++)
    {
        ans+= (mid - i-1-v[i]);
    }
    // cout<<ans<<" ";
    int j=1;
    for(int i=midIdx+1; i<v.size(); i++)
    {
        ans+= (v[i]-mid - j);
        j++;
    }
    cout<<ans<<endl;

}


int main()
{
    Raju;
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
return 0;
}


                                                                     ///ALHAMDULILLAH