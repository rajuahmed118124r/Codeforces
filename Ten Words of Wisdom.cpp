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
        int n;
        cin >> n;

        vector<pair<pair<int, int>, int>> responses;
        for (int i = 0; i < n; ++i) {
            int words, quality;
            cin >> words >> quality;
            responses.push_back({{quality, words}, i + 1});
        }

        sort(responses.rbegin(), responses.rend());

        int winner_index = 0;
        for (const auto& response : responses) {
            if (response.first.second <= 10) {
                winner_index = response.second;
                break;
            }
        }

        cout << winner_index <<endl;

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
