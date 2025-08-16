                                                            // بسم الله الرحمن الرحيم
                                                            //============================
/*
Problem name : C. Two Movies
Problem link : https://codeforces.com/contest/1989/problem/C
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
    vector<int>a(n), b(n);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<n; i++)
    {
        cin>>b[i];
    }

    int A=0, B=0, C=0;
    for(int i=0; i<n; i++)
    {
        if(a[i]>b[i])
        {
            A+=a[i];
        }
        else if(a[i]<b[i])
        {
            B+=b[i];
        }
        else if(a[i]==1)
        {
            C++;
        }
        else if(a[i]==-1){
            C++;
            A--;
            B--;
        }
    }

    int ans = min({A+C, B+C, (A+B+C)>>1});
    cout<<ans<<endl;
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