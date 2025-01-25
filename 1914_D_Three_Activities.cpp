                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : D. Three Activities
Problem link : https://codeforces.com/problemset/problem/1914/D
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
    ll n;
    cin>>n;
    vector<pair<ll,ll>>v1, v2, v3;
    for(int i=0; i<n; i++)
    {
        ll x;
        cin>>x;
        v1.push_back(make_pair(x, i));
    }

    for(int i=0; i<n; i++)
    {
        ll x;
        cin>>x;
        v2.push_back(make_pair(x, i));
    }

    for(int i=0; i<n; i++)
    {
        ll x;
        cin>>x;
        v3.push_back(make_pair(x, i));
    }

    sort(v1.rbegin(), v1.rend());
    sort(v2.rbegin(), v2.rend());
    sort(v3.rbegin(), v3.rend());

    ll ans=0;
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            for(int k=0; k<3; k++)
            {
                if((v1[i].second!=v2[j].second) && (v1[i].second!=v3[k].second) && (v2[j].second!=v3[k].second))
                {
                    ans = max(ans, (v1[i].first + v2[j].first + v3[k].first));
                }
            } 
        }
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