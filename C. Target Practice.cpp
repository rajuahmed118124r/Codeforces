                                                            ///BISMILLAHIR RAHMANIR RAHIM
                                                           ///============================
/*
Problem name :
Problem link :
Platform     : Codeforces
Author       : Md. Raju Miah
*/
#include<bits/stdc++.h>
using namespace std;


#define Raju ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define pb push_back
#define all(x) (x).begin(), (x).end()


void solve()
{
        char arr[10][10];
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; ++j) {
                cin >> arr[i][j];
            }
        }

        int k = 0;

        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; ++j) {
                if (arr[i][j] == 'X') {
                    int r = min(min(i, 9 - i), min(j, 9 - j));
                    if (r == 0)
                    {     
                        k += 1;
                    }
                        
                    else if (r == 1)
                    {
                        k += 2;
                    }
                        
                    else if (r == 2)
                    {
                        k += 3;
                    }
                        
                    else if (r == 3)
                    {
                        k += 4;
                    }
                        
                    else if (r == 4)
                    {
                        k += 5;
                    }
                        
                }
            }
        }

        cout << k << endl;

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





















