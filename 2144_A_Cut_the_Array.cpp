                                                            // بسم الله الرحمن الرحيم
                                                            //============================
/*
Problem name : A. Cut the Array
Problem link : https://codeforces.com/contest/2144/problem/A
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
    vector<int>v(n+1,0), pre(n+1,0);
    for(int i=1; i<=n; i++)
    {
        cin>>v[i];
        pre[i] = pre[i-1]+v[i];
    }

    bool fnd=false;
    int L=0, R=0;

    for(int l=1; l<n && !fnd; l++)
    {
        for(int r=l+1; r<n; r++)
        {
            int s1 = (pre[l]-pre[0])%3;
            int s2 = (pre[r]-pre[l])%3;
            int s3 = (pre[n]-pre[r])%3;
            
            if(s1<0)s1+=3;
            if(s2<0)s2+=3;
            if(s3<0)s3+=3;

            if((s1==s2 && s2==s3) || (s1!=s2 && s2!=s3 && s1!=s3))
            {
                L=l;
                R = r;
                fnd = true;
                break;
            }
        }
    }
    if(fnd)
    {
        cout<<L<<" "<<R<<endl;
        return;
    }
    cout<<0<<" "<<0<<endl;

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

