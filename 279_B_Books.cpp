                                                            // بسم الله الرحمن الرحيم
                                                            //============================
/*
Problem name : B. Books
Problem link : https://codeforces.com/problemset/problem/279/B
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
    int n, x;
    cin>>n>>x;
    vector<int>v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }

    ll sum=0,left=0, ans=0, cnt=0;
    for(int right=0; right<n; right++)
    {
        sum+=v[right];
        cnt++;

        while(left<=right && sum>x)
        {
            sum-=v[left];
            left++;
            cnt--;
        }
        ans = max(ans, cnt);
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