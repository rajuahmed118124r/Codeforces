
                                                                                                                            // بسم الله الرحمن الرحيم
                                                            //============================
/*
Problem name : C. Given Length and Sum of Digits... 
Problem link : https://codeforces.com/contest/489/problem/C
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
    int m,s;
    cin>>m>>s;
    if(m==1 && s==0)
    {
        cout<<"0 0"<<endl;
        return;
    }
    if(s>9*m || s<1)
    {
        cout<<"-1 -1"<<endl;
        return;
    }  

    string mx, mn;
    for(int i=0; i<m; i++)
    {
        int k = min(9, s);
        mx.pb('0'+k);
        s-=k;
    }
    mn = mx;
    reverse(mn.begin(), mn.end());

    for(int i=0; i<mn.size(); i++)
    {
        if(mn[i]!='0')
        {
            mn[0]++;
            mn[i]--;
            break;
        }
    }
    cout<<mn<<" "<<mx<<endl;
}

int main()
{
    Raju;
    int t=1;
    // cin>>t;
    while(t--)
    {
        raju();
    }
  return 0;
}
                                                                //ٱلْحَمْدُ لِلَّٰهِ