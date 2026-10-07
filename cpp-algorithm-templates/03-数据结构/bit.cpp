#include <bits/stdc++.h>
using namespace std;

int n = 5;
int tr[100];

int lowbit(int x) { return x & -x; }

void add(int x, int c) {
    for (int i = x; i <= n; i += lowbit(i)) tr[i] += c;
}

int sum(int x) {
    int s = 0;
    for (int i = x; i; i -= lowbit(i)) s += tr[i];
    return s;
}

int main() {
    for (int i = 1; i <= 5; i++) add(i, i);
    cout << "数组: [1,2,3,4,5]\n";
    cout << "前3个元素之和: " << sum(3) << "\n";
    add(2, 10);
    cout << "把第2个元素加10后, 前3个元素之和: " << sum(3) << "\n";
    return 0;
}
