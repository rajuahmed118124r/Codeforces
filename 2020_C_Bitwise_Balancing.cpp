                                                            // بسم الله الرحمن الرحيم
                                                            //============================
/*
Problem name : C. Bitwise Balancing
Problem link : https://codeforces.com/contest/2020/problem/C
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
    ll a=0,b,c,d;
    cin>>b>>c>>d;

    bool impossible = false;
    
    for(int i=0; i<62; i++)
    {
        int bb = (b>>i)&1;
        int cc = (c>>i)&1;
        int dd = (d>>i)&1;

        vector<ll>v;
        for(int x=0; x<=1; x++)
        {
            if((x|bb)-(x&cc)==dd)
            {
                v.pb(x);
            }
        }
        if(v.size()==0)
        {
            impossible= true;
            break;
        }
        a|=v[0]<<i;
    }
    if(impossible)
    {
        cout<<-1<<endl;
        return;
    }
    cout<<a<<endl;
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