                                                            // بسم الله الرحمن الرحيم
                                                            //============================
/*
Problem name : F. 3SUM
Problem link : https://codeforces.com/problemset/problem/1692/F
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

void hehe()
{
    int n;
    cin>>n;
    vector<int>vec1;
    map<int, int>mp;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        mp[x%10]++;
    }

    for(auto it : mp) 
    {
        int d = it.first;
        int c = it.second;
        for(int i = 0; i < min(3, c); i++) 
        {
            vec1.push_back(d);
        }
    }

    bool t = false;
    int sz = vec1.size();
    for(int i=0; i<sz; i++)
    {
        for(int j=i+1; j<sz; j++)
        {
            for(int k=j+1; k<sz; k++)
            {
                int sum = (vec1[i]+vec1[j]+vec1[k]);
                if(sum%10==3)
                {
                    t = true;
                    break;
                }
            }
            if(t)break;
        }
        if(t)break;
    }
    if(t)
    {
        cout<<"YES"<<endl;
        return;
    }
    cout<<"NO"<<endl;
}

int main()
{
    Raju;
    int t;
    cin>>t;
    while(t--)
    {
        hehe();
    }
  return 0;
}
                                                                //ٱلْحَمْدُ لِلَّٰهِ