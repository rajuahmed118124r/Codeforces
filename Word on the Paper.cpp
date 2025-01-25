                                                            ///BISMILLAHIR RAHMANIR RAHIM
                                                           //============================

/*
 Problem name :
 Problem link :
 Platform     :
 Author       : Md. Raju Miah
*/
#include<bits/stdc++.h>
using namespace std;

#define Raju ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define pb push_back


void solve()
{
    vector<vector<char>> grid(8, vector<char>(8));

    // Read the grid
    for (int i = 0; i < 8; ++i)
    {
        for (int j = 0; j < 8; ++j)
        {
            cin >> grid[i][j];
        }
    }

    vector<char> v;
    for (int i = 0; i < 8; ++i)
    {
        for (int j = 0; j < 8; ++j)
        {
            if (grid[i][j] != '.')
            {
                v.push_back(grid[i][j]);
            }
        }
    }

    for (int i = 0; i < v.size(); ++i)
    {
        cout << v[i];
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
