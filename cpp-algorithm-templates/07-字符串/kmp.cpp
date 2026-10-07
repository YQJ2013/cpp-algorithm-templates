#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "ABABABABCABABABCAB";
    string p = "ABABC";
    int n = s.size(), m = p.size();

    // 求 next 数组
    vector<int> ne(m, 0);
    for (int i = 1, j = 0; i < m; i++) {
        while (j && p[i] != p[j]) j = ne[j-1];
        if (p[i] == p[j]) j++;
        ne[i] = j;
    }

    // 匹配
    vector<int> res;
    for (int i = 0, j = 0; i < n; i++) {
        while (j && s[i] != p[j]) j = ne[j-1];
        if (s[i] == p[j]) j++;
        if (j == m) {
            res.push_back(i - m + 1);
            j = ne[j-1];
        }
    }

    cout << "主串: " << s << "\n";
    cout << "模式: " << p << "\n";
    cout << "匹配位置(下标): ";
    for (int x : res) cout << x << " ";
    cout << "\n";
    return 0;
}
