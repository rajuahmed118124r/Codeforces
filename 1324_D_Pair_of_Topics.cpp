                                                            // بسم الله الرحمن الرحيم
                                                            //============================
/*
Problem name : D. Pair of Topics
Problem link : https://codeforces.com/problemset/problem/1324/D
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
    vector<int>a(n), b(n), c(n);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<n; i++)
    {
        cin>>b[i];
        c[i]=a[i]-b[i];
    }

    sort(c.begin(), c.end());

    ll cnt=0;
    for(int i=0; i<n; i++)
    {
        int low=i+1, high=n-1, pos=n;
        while(low<=high)
        {
            int mid = low + (high-low)/2;
            if(c[i]+c[mid]>0)
            {
                pos = mid;
                high = mid - 1;
            }
            else{
                low = mid+1;
            }
        }
        cnt+=(n-pos);
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