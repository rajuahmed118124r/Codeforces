                                                            // بسم الله الرحمن الرحيم
                                                            //============================
/*
Problem name : C. Divisibility by Eight
Problem link : https://codeforces.com/problemset/problem/550/C
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
    string s;
    cin>>s;
    s = "00"+s;
    int n=s.size();
    
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            for(int k=j+1; k<n; k++)
            {
                int ans = (s[i]-'0')*100+(s[j]-'0')*10+(s[k]-'0');
                if(ans%8==0)
                {
                    cout<<"YES\n"<<ans<<endl;
                    return;
                }
                // cout<<ans<<" ";
            }
        }
    } 
    cout<<"NO"<<endl;
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