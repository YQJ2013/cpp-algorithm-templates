#include <bits/stdc++.h>
using namespace std;

int main() {
    int W = 10;
    vector<int> w = {5, 4, 6, 3};
    vector<int> v = {10, 40, 30, 50};
    vector<int> dp(W + 1, 0);
    for (size_t i = 0; i < w.size(); i++)
        for (int j = W; j >= w[i]; j--)
            dp[j] = max(dp[j], dp[j - w[i]] + v[i]);
    cout << "物品(重,价): (5,10) (4,40) (6,30) (3,50), 容量10\n";
    cout << "最大价值: " << dp[W] << "\n";
    return 0;
}
