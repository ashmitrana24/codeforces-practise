#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;
    if (!(cin >> T)) return 0;
    while (T--) {
        int n, k;
        cin >> n >> k;
        vector<vector<int>> adj(n+1);
        for (int i = 0; i < n-1; ++i) {
            int u, v; cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        // Build parent + DFS order (iterative)
        vector<int> parent(n+1, -1);
        vector<int> order; order.reserve(n);
        vector<int> st; st.reserve(n);
        st.push_back(1);
        parent[1] = 0;
        while (!st.empty()) {
            int u = st.back(); st.pop_back();
            order.push_back(u);
            for (int v : adj[u]) if (v != parent[u]) {
                parent[v] = u;
                st.push_back(v);
            }
        }

        // subtree sizes
        vector<int> sub(n+1, 0);
        for (int i = (int)order.size() - 1; i >= 0; --i) {
            int u = order[i];
            sub[u] = 1;
            for (int v : adj[u]) if (v != parent[u]) sub[u] += sub[v];
        }

        ll ans = 0;
        // For each node u, count how many roots r make u appear in S_r
        for (int u = 1; u <= n; ++u) {
            // root = u case
            if (n >= k) ans += 1; // when rooted at u, subtree size = n so if n>=k we can pick x + k-1 nodes

            // For each neighbor component (remove u), component size s:
            for (int v : adj[u]) {
                int s;
                if (v == parent[u]) s = n - sub[u];
                else s = sub[v];
                // If root r is in this component of size s, then available nodes for making LCA = u
                // are n - s (includes u itself). Condition n - s >= k means we can choose x + k-1 others.
                if (n - s >= k) ans += s;
            }
        }

        cout << ans << '\n';
    }
    return 0;
}
