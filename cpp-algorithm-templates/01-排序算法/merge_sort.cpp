#include <bits/stdc++.h>
using namespace std;

long long merge_sort(vector<int>& q, int l, int r) {
    if (l >= r) return 0;
    int mid = l + r >> 1;
    long long res = merge_sort(q, l, mid) + merge_sort(q, mid + 1, r);
    vector<int> tmp;
    int i = l, j = mid + 1;
    while (i <= mid && j <= r) {
        if (q[i] <= q[j]) tmp.push_back(q[i++]);
        else { res += mid - i + 1; tmp.push_back(q[j++]); }
    }
    while (i <= mid) tmp.push_back(q[i++]);
    while (j <= r) tmp.push_back(q[j++]);
    for (int k = l; k <= r; k++) q[k] = tmp[k - l];
    return res;
}

int main() {
    vector<int> a = {5, 4, 3, 2, 1};
    cout << "原数组: ";
    for (int x : a) cout << x << " ";
    cout << "\n";
    long long inv = merge_sort(a, 0, a.size() - 1);
    cout << "排序后: ";
    for (int x : a) cout << x << " ";
    cout << "\n逆序对数量: " << inv << "\n";
    return 0;
}
