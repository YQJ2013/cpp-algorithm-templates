#include <bits/stdc++.h>
using namespace std;

long long qmi(long long a, long long k, long long p) {
    long long res = 1 % p;
    while (k) {
        if (k & 1) res = res * a % p;
        a = a * a % p;
        k >>= 1;
    }
    return res;
}

int main() {
    cout << "2^100 mod 1e9+7 = " << qmi(2, 100, 1000000007) << "\n";
    cout << "3^200 mod 1e9+7 = " << qmi(3, 200, 1000000007) << "\n";
    return 0;
}
