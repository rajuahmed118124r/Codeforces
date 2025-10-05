                                                            // بسم الله الرحمن الرحيم
                                                            //============================
/*
Problem name : B. Spreadsheets
Problem link : https://codeforces.com/contest/1/problem/B
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

string ss;
void numTOStr(ll num)
{
    if(num)
    {
        numTOStr((num-1)/26);
        ss+=('A'+(num-1)%26);
    }
}

ll ans = 0;
void strToNum(string s)
{
    for(ll i=0;i<s.size();i++)
    {
        ans = ans*26 + s[i]-'A'+1;
    }
}
 
void raju()
{
    ss="";
    ans = 0;
 
    string s;
    cin>>s;
    vector<string> v;
    vector<string> v2;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        {
            string s1;
            while(s[i]>='A' && s[i]<='Z')
            {
                s1 += s[i];
                i++;
            }
            v.push_back(s1);
        }
        else {
            string s1;
            while(s[i]>='0' && s[i]<='9')
            {
                s1 += s[i];
                i++;
            }
            v2.push_back(s1);
        }
        i--;
    }
    if(v.size()>1 && v2.size()>1)
    {
        string s1, s2;
        s1 = v2[0];
        s2 = v2[1];
        ll x = stoi(s2);
        numTOStr(x);
        cout<<ss<<s1<<endl;
    }
    else {
        string s1,s2;
        s1 = v[0];
        s2 = v2[0];
        strToNum(s1);
        cout<<'R'<<s2<<'C'<<ans<<endl;
    }
}

int main()
{
    Raju;
    int t;
    cin>>t;
    while(t--)
    {
        raju();
    }
  return 0;
}
                                                                //ٱلْحَمْدُ لِلَّٰهِ