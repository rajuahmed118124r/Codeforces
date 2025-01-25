                                   ///BISMILLAHIR RAHMANIR RAHIM
                                  ///============================


#include <bits/stdc++.h>
using namespace std;

#define Raju ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int

void solve()
{
    int n, k, count = 0;
    cin >> n >> k;
    string s;
    cin >> s;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'B')
        {
            count++;
            i = i + k - 1;
        }
    }

    cout << count << endl;
}

int main()
{
    Raju;
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}

                                                            ///ALHAMDULILLAH
