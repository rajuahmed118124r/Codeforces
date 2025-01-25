#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);cin.tie(NULL);
    string input;
    cin>>input;
    set<char> charSet;
    for (char c : input)
    {
        charSet.insert(c);
    }
    int count=charSet.size();
    if(count%2==0)
    {
        cout<<"CHAT WITH HER!"<<"\n";
    }
    else
    {
        cout<<"IGNORE HIM!"<<"\n";
    }
    return 0;
}
