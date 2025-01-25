                                                            ///BISMILLAHIR RAHMANIR RAHIM 
                                                           ///============================
/*
Problem name : C. Inhabitant of the Deep Sea
Problem link : https://codeforces.com/contest/1955/problem/C
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
    ll n, k, sum=0, remove=0;
    cin>>n>>k;
    vector<ll>v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
        sum+=v[i];
    }
    if(k>=sum)
    {
        cout<<n<<endl;
        return;
    }

    ll first = k/2 + k%2;
    ll last = k/2;
    for(int i=0; i<n; i++)
    {
        if(first>=v[i])
        {
            first-=v[i];
            remove++;
        }
        else{
            break;
        }
    }

    for(int i=n-1; i>=0; i--)
    {
        if(last>=v[i])
        {
            last-=v[i];
            remove++;
        }
        else{
            break;
        }
    }
    cout<<remove<<endl;
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
