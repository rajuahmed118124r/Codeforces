                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : B. Choosing Cubes
Problem link : https://codeforces.com/contest/1980/problem/B
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
    int n, f, k, cnt=0, cn=0;
    cin>>n>>f>>k;
    f--;
    vector<int>v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    int fv = v[f];
    for(int i=0; i<n; i++)
    {
        if(v[i]==fv)cnt++;
    }

    sort(v.begin(), v.end(), greater<int>());
    //v.erase(v.begin(), v.begin()+k);
    for(int i=0; i<k; i++)
    {
        if(v[i]==fv)cn++;
    }
    if(cnt==cn)
    {
        yes;
    }
    else if(cn==0)
    {
        no;
    }
    else{
        cout<<"MAYBE"<<endl;
    }


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