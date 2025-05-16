#include <iostream>
#include <vector>
#include <queue>
using namespace std;

const int MAX_N = 200005;
vector<int> adj[MAX_N];
int subtreeSize[MAX_N];
bool visited[MAX_N];

void dfs(int node) {
    visited[node] = true;
    subtreeSize[node] = 1;
    for (int neighbor : adj[node]) {
        if (!visited[neighbor]) {
            dfs(neighbor);
            subtreeSize[node] += subtreeSize[neighbor];
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    for (int i = 0; i < n - 1; ++i) {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    int q;
    cin >> q;
    vector<int> queries(q);
    for (int i = 0; i < q; ++i) {
        cin >> queries[i];
    }

    // Calculate the size of each subtree
    dfs(1);

    for (int i = 0; i < q; ++i) {
        int si = queries[i];
        if (subtreeSize[si] > n / 2) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
    }

    return 0;
}
