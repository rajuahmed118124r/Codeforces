                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : B. Make It Ugly
Problem link : https://codeforces.com/contest/1954/problem/B
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
    cin>>n;
    vector<int>v(n);
    set<int>st;
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
        st.insert(v[i]);
    }
    if(st.size()==1)
    {
        cout<<-1<<endl;
        return;
    }
    
    int cur = 1, ans = n, x = v[0];
    for(int i=1; i<n; i++)
    {
        if(x!=v[i])
        {
            ans = min(ans, cur);
            cur = 0;
        }
        else{
            cur++;
        }
    }
    cout<<min(ans,cur)<<endl;
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
