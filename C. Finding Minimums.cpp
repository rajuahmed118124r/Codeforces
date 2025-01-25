#include <bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
void solve()
{
     int N, K;
    cin >> N >> K;

    vector<int> numbers(N);
    for (int i = 0; i < N; i++) {
      cin >> numbers[i];
    }

    int group_Count = N / K;
    int last_Group_Size = N % K;

    for (int i = 0; i < group_Count; i++) {
        int group_Start_Index = i * K;
        int group_End_Index = group_Start_Index + K;
        int minNumber = *min_element(numbers.begin() + group_Start_Index, numbers.begin() + group_End_Index);
        cout << minNumber << " ";
    }

    if (last_Group_Size > 0) {
        int last_Group_Start_Index = group_Count * K;
        int minNumber = *min_element(numbers.begin() + last_Group_Start_Index, numbers.end());
        cout << minNumber << " ";
    }
}
int main() {
   solve();
    return 0;
}

