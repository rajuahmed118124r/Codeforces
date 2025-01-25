                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : A. Simple Palindrome
Problem link : https://codeforces.com/contest/2005/problem/A
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
    int n;
    cin>>n;
    string s="aeiou",s1="";
    if(n<=5)
    {
        for(int i=0; i<n; i++)
        {
            cout<<s[i];
        }
        cout<<endl;
    }
    else{
        int md = n%5, div = n/5;
        char A='a',E='e',I='i', O='o',U='u';
        s1.append(div,A);
        s1.append(div,E);
        s1.append(div,I);
        s1.append(div,O);
        s1.append(div,U);
        for(int i=0; i<md; i++)
        {
            s1+=s[i];
        }
        sort(s1.begin(),s1.end());
        cout<<s1<<endl;
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