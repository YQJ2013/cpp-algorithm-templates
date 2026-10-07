#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 50;
    vector<int> primes;
    vector<bool> st(n + 1, false);
    for (int i = 2; i <= n; i++) {
        if (!st[i]) primes.push_back(i);
        for (int j = 0; primes[j] <= n / i; j++) {
            st[primes[j] * i] = true;
            if (i % primes[j] == 0) break;
        }
    }
    cout << "50以内的素数: ";
    for (int p : primes) cout << p << " ";
    cout << "\n共 " << primes.size() << " 个\n";
    return 0;
}
