#include <bits/stdc++.h>
using namespace std;

void quick_sort(vector<int>& q, int l, int r) {
    if (l >= r) return;
    int i = l - 1, j = r + 1, x = q[l + r >> 1];
    while (i < j) {
        do i++; while (q[i] < x);
        do j--; while (q[j] > x);
        if (i < j) swap(q[i], q[j]);
    }
    quick_sort(q, l, j);
    quick_sort(q, j + 1, r);
}

int main() {
    vector<int> a = {85, 62, 91, 45, 78, 62};
    cout << "原数组: ";
    for (int x : a) cout << x << " ";
    cout << "\n";
    quick_sort(a, 0, a.size() - 1);
    cout << "排序后: ";
    for (int x : a) cout << x << " ";
    cout << "\n";
    return 0;
}
