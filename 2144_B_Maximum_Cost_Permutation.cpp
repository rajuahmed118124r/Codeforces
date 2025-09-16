                                                            // بسم الله الرحمن الرحيم
                                                            //============================
/*
Problem name : B. Maximum Cost Permutation
Problem link : https://codeforces.com/contest/2144/problem/B
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
    int n; 
    cin>>n;
    vector<int> p(n+1);
    vector<char> present(n+1,0);
    int zeros=0, zpos=-1;
    for(int i=1;i<=n;i++)
    {
        cin>>p[i];
        if(p[i]==0)
        { 
            zeros++; zpos=i; 
        }
        else if(p[i]>=1 && p[i]<=n)
        {
            present[p[i]]=1;
        }
    }
    int miss = -1;
    if(zeros==1)
    {
        for(int x=1;x<=n;x++)
        {
            if(!present[x])
            { 
                miss = x; break; 
            }
        }
    }

    auto forced = [&](int i)->bool
    {
        if (p[i]>0 && p[i]==i) return true;     
        if (zeros==1 && p[i]==0 && miss==i) return true; 
        return false;
    };

    int L=1; 
    while(L<=n && forced(L)) ++L;
    if(L>n)
    { 
        cout<<0<<"\n";
        return; 
    }
    int R=n; 
    while(R>=1 && forced(R))--R;
    cout<<(R-L+1)<<"\n";
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