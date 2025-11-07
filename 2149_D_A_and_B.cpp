                                                            // بسم الله الرحمن الرحيم
                                                            //============================
/*
Problem name : D. A and B
Problem link : https://codeforces.com/problemset/problem/2149/D
Platform     : Codeforces
Author       : Md. Raju Miah
*/
#include<bits/stdc++.h>
using namespace std;
#define Raju ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define pb push_back
#define yes cout<<'YES'<<endl
#define no cout<<'NO'<<endl
#define zero cout<<0<<endl
#define all(x) (x).begin(), (x).end()

int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};
int dx8[] = {0, 0, 1, 1, 1, -1, -1, -1};
int dy8[] = {1,-1, 1, -1, 0, 0, -1, 1};
const int N = 1e3;
char maze[N][N];
int visited[N][N];

ll getAns(vector<ll>&v)
{
    if(v.empty())
    {
        return 0;
    }
    ll mid=(ll)v.size()/2, val=0;
    
    for(ll i=0; i<v.size(); i++)
    {
        val+= abs((v[mid]-v[i])-(mid-i));
    }
    return val;
}

void raju()
{
    ll n;
    cin>>n;
    vector<ll>a,b;
    for(ll i=1; i<=n; i++)
    {
        char ch;
        cin>>ch;
        if(ch=='a'){
            a.pb(i);
        }
        else{
            b.pb(i);
        }
    }
    cout<<min(getAns(a), getAns(b))<<endl;
}

int main()
{
    Raju;
    int t;
    cin>>t;
    while(t--)
    {
        raju();
    }
  return 0;
}
                                                                //ٱلْحَمْدُ لِلَّٰهِ