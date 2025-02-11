// page 28 in book
// problem url: https://vjudge.net/problem/Aizu-ALDS1_1_D
// Language: C++

#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> v;
    int n;
    cin >> n;
    int x;
    for(int i=0;i<n;i++) {
        cin >> x;
        v.push_back(x);
    }
    int min_val = v[0];
    int max_profit = -2e9;
    for(int i=1;i<n;i++) {
        max_profit = max(max_profit, v[i]-min_val);
        min_val = min(min_val, v[i]);
    }
    cout << max_profit << endl;
    return 0;
}
