                                                            ///BISMILLAHIR RAHMANIR RAHIM
                                                            //============================
/*
Problem name : C. Brr Brrr Patapim
Problem link : https://codeforces.com/contest/2094/problem/C
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

void solve()
{
    int n;
    cin >> n;
    vector<int> v(2 * n + 1, 0);

    for (int i = 1; i <= n; i++) 
    {
        for (int j = 1; j <= n; j++) 
        {
            int vl;
            cin >> vl;
            v[i + j] = vl; 
        }
    }
    
    vector<bool> v1(2 * n + 1, false);
    for (int k = 2; k <= 2 * n; k++) 
    {
        v1[v[k]] = true;
    }

    int ms= 0;
    for (int num = 1; num <= 2 * n; num++) 
    {
        if (!v1[num]) 
        {
            ms= num;
            break;
        }
    }

    v[1] = ms;  

    for (int i = 1; i <= 2 * n; i++) 
    {
        cout << v[i] << " ";
    }
    cout << "\n";

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
                                                                //ALHAMDULILLAH