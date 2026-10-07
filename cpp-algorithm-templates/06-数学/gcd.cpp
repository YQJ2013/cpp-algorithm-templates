#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) { return b ? gcd(b, a % b) : a; }
int lcm(int a, int b) { return a / gcd(a, b) * b; }

int main() {
    cout << "gcd(12, 18) = " << gcd(12, 18) << "\n";
    cout << "gcd(100, 75) = " << gcd(100, 75) << "\n";
    cout << "lcm(12, 18) = " << lcm(12, 18) << "\n";
    return 0;
}
