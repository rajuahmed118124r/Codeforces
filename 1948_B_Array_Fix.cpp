                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : B. Array Fix
Problem link : https://codeforces.com/problemset/problem/1948/B
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
    int n;
    cin>>n;
    vector<int>v(n), vec;
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }

    if(is_sorted(v.begin(),v.end()))
    {
        yes;
        return;
    }

    int last =0;
    for(int i=0; i<n; i++)
    {
        int num1 = v[i]/10;
        int num2 = v[i]%10;
        if(num1>=last && num2>=num1)
        {
            last = num2;
            vec.pb(num1);
            vec.pb(num2);
        }
        else{
            vec.pb(v[i]);
            last = v[i];
        }
    }
    if(is_sorted(vec.begin(), vec.end()))
    {
        yes;
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