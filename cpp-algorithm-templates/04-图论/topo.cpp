#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 4;
    vector<vector<int>> g(n);
    vector<int> indeg(n, 0);
    // 0=高数, 1=编程, 2=线代, 3=机器学习
    g[0].push_back(2); indeg[2]++;
    g[2].push_back(3); indeg[3]++;
    g[1].push_back(3); indeg[3]++;

    queue<int> q;
    for (int i = 0; i < n; i++) if (indeg[i] == 0) q.push(i);
    vector<int> res;
    while (!q.empty()) {
        int u = q.front(); q.pop();
        res.push_back(u);
        for (int v : g[u]) if (--indeg[v] == 0) q.push(v);
    }
    if (res.size() != n) cout << "存在环，无拓扑序\n";
    else {
        cout << "课程: 0=高数, 1=编程, 2=线代, 3=机器学习\n";
        cout << "合法修课顺序: ";
        for (int x : res) cout << x << " ";
        cout << "\n";
    }
    return 0;
}
