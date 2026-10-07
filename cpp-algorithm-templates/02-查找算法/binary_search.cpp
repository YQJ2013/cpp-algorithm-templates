#include <bits/stdc++.h>
using namespace std;

int bsearch(vector<int>& a, int target) {
    int l = 0, r = a.size() - 1;
    while (l <= r) {
        int mid = l + r >> 1;
        if (a[mid] == target) return mid;
        else if (a[mid] < target) l = mid + 1;
        else r = mid - 1;
    }
    return -1;
}

int main() {
    vector<int> a = {1, 3, 5, 7, 9, 11, 13};
    cout << "数组: ";
    for (int x : a) cout << x << " ";
    cout << "\n查找 7: 下标 " << bsearch(a, 7) << "\n";
    cout << "查找 6: 下标 " << bsearch(a, 6) << " (不存在)\n";
    return 0;
}
