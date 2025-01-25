                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : A. Primary Task
Problem link : https://codeforces.com/contest/2000/problem/A
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
#define zero cout<<0<<endl
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
    string s;
    cin>>s;
    if(s.size()<=2)
    {
        no;
        return;
    }
    if(s[0]=='1' && s[1]=='0')
    {
        if(s[2]=='1' && s.size()==3)
        {
            no;
            return;
        }
        if(s[2]!='0')
        {
            yes;
        }
        else{
            no;
        }
    }
    else{
        no;
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