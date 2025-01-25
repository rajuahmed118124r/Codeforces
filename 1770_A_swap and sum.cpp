#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int m,n;
        cin>>m>>n;
        list<int>l;
        long long sum=0;
        for(int i=0;i<m;i++)
        {
            int inp;
            cin>>inp;
            l.push_back(inp);
            sum=sum+inp;
        }
        l.sort();
        for(int i=0;i<n;i++)
        {
            int in;
            cin>>in;
            sum=sum-l.front(); //ager array er 1st ta bad dilam
            sum+=in;           //ei array er 1st ta add korlam
            l.pop_front();     //ager array er 1st ta pop kore dilam
            l.push_front(in);  //ei array er 1st ta push kore dilam
            l.sort();          // pop push korar por ulta palta hote pare. tai sort kore nilam....
        }
        cout<<sum<<"\n";
    }
    return 0;
}
