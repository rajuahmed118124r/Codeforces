#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int first_digit = n / 10;
    int second_digit = n % 10;

    if (first_digit == 0)
    {
        cout << "NO" <<"\n";
    }
    if(second_digit==0 && second_digit%first_digit==0)
    {
        cout << "YES" << "\n";
    }
    else if (first_digit % second_digit == 0 || second_digit % first_digit == 0)
    {
        cout << "YES" << "\n";
    }
    else
    {
        cout << "NO" << "\n";
    }

    return 0;
}

