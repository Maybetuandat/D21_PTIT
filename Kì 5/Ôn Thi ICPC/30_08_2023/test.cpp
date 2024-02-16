#include <iostream>
#include <vector>
#include <stack>
using namespace std;

void dfs(int node, vector<bool>& visited, vector<vector<int>>& graph, stack<int>& order) {
    visited[node] = true;
    for (int neighbor : graph[node]) {
        if (!visited[neighbor]) {
            dfs(neighbor, visited, graph, order);
        }
    }
    order.push(node);
}

void dfs_reverse(int node, vector<bool>& visited, vector<vector<int>>& graph_reverse) {
    visited[node] = true;
    for (int neighbor : graph_reverse[node]) {
        if (!visited[neighbor]) {
            dfs_reverse(neighbor, visited, graph_reverse);
        }
    }
}

int minVisitsToCoverGraph(int N, vector<vector<int>>& graph, vector<vector<int>>& graph_reverse) {
    vector<bool> visited(N + 1, false);
    stack<int> order;

    for (int node = 1; node <= N; ++node) {
        if (!visited[node]) {
            dfs(node, visited, graph, order);
        }
    }

    int count = 0;
    visited.assign(N + 1, false);

    while (!order.empty()) {
        int node = order.top();
        order.pop();
        if (!visited[node]) {
            dfs_reverse(node, visited, graph_reverse);
            ++count;
        }
    }

    return count;
}

int main() {
    int N, M;
    cin >> N >> M;
    vector<vector<int>> graph(N + 1);
    vector<vector<int>> graph_reverse(N + 1);

    for (int i = 0; i < M; ++i) {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph_reverse[v].push_back(u);
    }

    int result = minVisitsToCoverGraph(N, graph, graph_reverse);
    cout << result << endl;

    return 0;
}
