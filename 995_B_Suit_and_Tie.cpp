                                                            // بسم الله الرحمن الرحيم
                                                            //============================
/*
Problem name : B. Suit and Tie
Problem link : https://codeforces.com/problemset/problem/995/B
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

int partasena(vector<int> &v, int f_indx) 
{
    int s_indx = -1;
    for(int i = f_indx+1; i < v.size(); i++) 
    {
        if(v[i] == v[f_indx]) 
        {
            s_indx = i;
            break;
        }
    }
    if(s_indx != -1) 
    {
        int val = v[s_indx];
        v.erase(v.begin() + s_indx);
        v.insert(v.begin() + f_indx + 1, val);
    }
    return s_indx - (f_indx + 1);
}
void raju()
{
    int n;
    cin>>n;
    vector<int>v(2*n);
    for(int i=0; i<2*n; i++)
    {
        cin>>v[i];
    }

    int cnt=0;
    for(int i=0; i<2*n; i+=2)
    {
        if(v[i]==v[i+1])continue;
        cnt += (partasena(v,i));
    }
    cout<<cnt<<endl;
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