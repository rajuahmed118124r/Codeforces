                                                            // بسم الله الرحمن الرحيم
                                                            //============================
/*
Problem name : B. Sort the Array
Problem link : https://codeforces.com/problemset/problem/451/B
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
    vector<int>v(n), v1;
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    v1 = v;
    sort(v1.begin(), v1.end());
    
    int x=-1, y=-1;
    for(int i=0; i<n; i++)
    {
        if(v[i]!=v1[i])
        {
            if(x==-1)
            {
                x = i;
            }
            y=i;
        }
    }
    
    if(x==-1)
    {
        cout<<"yes"<<endl;
        cout<<"1 1"<<endl;
        return;
    }
    reverse(v.begin()+x, v.begin()+y+1);
    // swap(v[x],v[y]);
    if(v==v1)
    {
        cout<<"yes\n"<<x+1<<" "<<y+1<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
    
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