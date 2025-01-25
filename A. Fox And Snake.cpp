#include<bits/stdc++.h>
using namespace std;

#define Raju ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<vector<char>> v(n, vector<char>(m));

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if(i%2==1)
            {
                cout<<"#";
            }
            else{
                if(i%4==0 && j==1)
                {
                    cout<<"#";
                }
                else if(i%4==2 && j==m)
                {
                    cout<<"#";
                }
                else{
                    cout<<".";
                }
            }
        }
        cout<<endl;
    }
}

int main()
{
    Raju;
    solve();
    return 0;
}
