                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : C. Longest Good Array
Problem link : https://codeforces.com/contest/2008/problem/C
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

bool is_good(ll l, ll r, ll mid)
{
    ll sum = mid*(mid+1)/2;
    return (l+sum<=r);
}

void solve()
{
    ll l, r;
    cin>>l>>r;
    ll low = 0, high = r-l+1, ans=0;

    while(low<=high)
    {
        ll mid = (low+high)/2;
        if(is_good(l,r,mid))
        {
            ans = mid;
            low = mid + 1;
        }
        else{
            high = mid-1;
        }
    }
    cout<<ans+1<<endl;
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