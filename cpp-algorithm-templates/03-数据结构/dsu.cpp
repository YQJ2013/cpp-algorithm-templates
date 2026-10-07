#include <bits/stdc++.h>
using namespace std;

int p[100];

int find(int x) {
    return p[x] == x ? x : p[x] = find(p[x]);
}

void unite(int a, int b) { p[find(a)] = find(b); }
bool same(int a, int b) { return find(a) == find(b); }

int main() {
    for (int i = 1; i <= 5; i++) p[i] = i;
    unite(1, 2);
    unite(2, 3);
    cout << "合并(1,2), 合并(2,3)\n";
    cout << "1和3是否同一组: " << (same(1, 3) ? "是" : "否") << "\n";
    cout << "1和4是否同一组: " << (same(1, 4) ? "是" : "否") << "\n";
    return 0;
}
