#include <bits/stdc++.h>
using namespace std;

const int INF = 0x3f3f3f3f;

int dijkstra(int n, vector<vector<pair<int,int>>>& g, int start, int end) {
    vector<int> dist(n + 1, INF);
    vector<bool> vis(n + 1, false);
    dist[start] = 0;
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<>> pq;
    pq.push({0, start});
    while (!pq.empty()) {
        auto [d, u] = pq.top(); pq.pop();
        if (vis[u]) continue;
        vis[u] = true;
        for (auto [v, w] : g[u]) {
            if (dist[v] > dist[u] + w) {
                dist[v] = dist[u] + w;
                pq.push({dist[v], v});
            }
        }
    }
    return dist[end] == INF ? -1 : dist[end];
}

int main() {
    int n = 4;
    vector<vector<pair<int,int>>> g(5);
    // 1=A, 2=B, 3=C, 4=D
    g[1].push_back({2, 10});
    g[1].push_back({3, 5});
    g[2].push_back({3, 3});
    g[2].push_back({4, 2});
    g[3].push_back({4, 7});
    cout << "图: A-B(10), A-C(5), B-C(3), B-D(2), C-D(7)\n";
    cout << "A到D最短距离: " << dijkstra(n, g, 1, 4) << "\n";
    return 0;
}
