                                                            // بسم الله الرحمن الرحيم
                                                            //============================
/*
Problem name : B. I Hate 1111
Problem link : https://codeforces.com/contest/1526/problem/B
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
    int n, ans1, ans2, ans3;
    cin>>n;
    if(n%11==0)
    {
        cout<<"YES"<<endl;
        return;
    }
    ans1 = n/111;
    for(int i=ans1; i>=1; i--)
    {
        ans2 = n-(i*111);
        if(ans2%11==0)
        {
            cout<<"YES"<<endl;
            return;
        }
    }   
    cout<<"NO"<<endl;
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