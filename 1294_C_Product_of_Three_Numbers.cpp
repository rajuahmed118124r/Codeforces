                                                            // بسم الله الرحمن الرحيم
                                                            //============================
/*
Problem name : C. Product of Three Numbers
Problem link : https://codeforces.com/problemset/problem/1294/C
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

void raju()
{
    int n, a=-1,b=-1,c=-1,m;
    cin>>n;

    for(int i=2; i*i<=n; i++)
    {
        if(n%i==0)
        {
            a = i;
            break;
        }
    }

    if(a==-1)
    {
        cout<<"NO"<<endl;
        return;
    }

    m = n/a;
    for(int i=2; i*i<=m; i++)
    {
        if(m%i==0 && i!=a)
        {
            b = i;
            break;
        }
    }

    if(b==-1)
    {
        cout<<"NO"<<endl;
        return;
    }

    c = n/(a*b);
    if(c>1 && (c!=a) && (c!=b))
    {
        cout<<"YES\n"<<a<<" "<<b<<" "<<c<<endl;
    }
    else{
        cout<<"NO"<<endl;
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