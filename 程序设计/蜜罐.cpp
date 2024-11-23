#include <bits/stdc++.h>
using namespace std;

const int MAXN = 2005;
int N, M;
int p[MAXN];

struct Edge {
    int u, v, w;
    bool operator<(const Edge &e) const { return w < e.w; }
};
vector<Edge> edges;

int find(int x) {
    if (p[x] == x) return x;
    return p[x] = find(p[x]);
}

bool unite(int x, int y) {
    int px = find(x), py = find(y);
    if (px == py) return false;
    p[px] = py;
    return true;
}

int kruskal() {
    sort(edges.begin(), edges.end());
    for (int i = 1; i <= N; i++) p[i] = i;
    int cnt = 0, res = 0;
    for (auto &e : edges) {
        if (unite(e.u, e.v)) {
            res += e.w;
            if (++cnt == N - 1) break;
        }
    }
    if (cnt != N - 1) return -1;
    return res;
}
int main() {
    int T;
    cin >> T;
    while (T--) {
        cin >> N >> M;
        edges.clear();
        for (int i = 0; i < M; i++) {
            int u, v, w;
            cin >> u >> v >> w;
            if (u > v) swap(u, v); 
            edges.push_back({u, v, w});
        }
        cout << kruskal() << endl;
    }
    return 0;
}
