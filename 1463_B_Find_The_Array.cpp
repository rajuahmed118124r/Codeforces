                                                            // بسم الله الرحمن الرحيم
                                                            //============================
/*
Problem name : B. Find The Array 
Problem link : https://codeforces.com/problemset/problem/1463/B
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

ll lcm(ll a, ll b) 
{
    return a / __gcd(a, b) * b;
}

void raju()
{
    ll n;
    cin>>n;
    vector<int>v(n);
    ll odd=0, even=0;
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
        if(i%2==0)
        {
            even+=v[i];
        }
        else{
            odd+=v[i];
        }
    }

    if(even<odd)
    {
        for(int i=0; i<n; i++)
        {
            if(i%2==0)
            {
                cout<<1<<" ";
            }
            else{
                cout<<v[i]<<" ";
            }
        }
        cout<<endl;
    }
    else{
        for(int i=0; i<n; i++)
        {
            if(i%2==1)
            {
                cout<<1<<" ";
            }
            else{
                cout<<v[i]<<" ";
            }
        }
        cout<<endl;
    } 
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