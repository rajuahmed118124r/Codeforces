                                                            // بسم الله الرحمن الرحيم
                                                            //============================
/*
Problem name : C. Maximum Median
Problem link : https://codeforces.com/contest/1201/problem/C
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

bool possible(int mid, vector<int>&v, int k)
{
    ll dorkar = 0, n=v.size();
    for(int i=n/2; i<n; i++)
    {
        if(v[i]<mid)
        {
            dorkar+=(mid-v[i]);
            if(dorkar>k)
            {
                return false;
            }
        }
        
    }
    return dorkar<=k;
}

void raju()
{
    ll n,k;
    cin>>n>>k;
    vector<int>v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    
    sort(v.begin(), v.end());

    int low=v[n/2], high=v[n/2]+k, ans = v[n/2];
    while(low<=high)
    {
        ll mid = low + (high-low)/2;
        if(possible(mid,v,k))
        {
            ans = mid;
            low = mid + 1;
        }
        else{
            high = mid-1;
        }
    }
    cout<<ans<<endl;
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