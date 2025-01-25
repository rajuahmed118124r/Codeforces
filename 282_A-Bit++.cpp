#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,cntp=0,cntm=0;
    cin>>n;
    vector<string> v(n);
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        if(s=="++X" || s=="X++")
        {
            v.push_back(s);
            cntp++;
        }
        if(s=="--X" || s=="X--")
        {
            v.push_back(s);
            cntm++;
        }
    }

    cout<<cntp-cntm<<"\n";

    return 0;
}
