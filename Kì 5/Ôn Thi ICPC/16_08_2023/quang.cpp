#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int INF = INT_MAX;

int n; // Số lượng thành phố

// Hàm đệ quy để thử tất cả các hành trình có thể
int tsp(vector<vector<int>>& graph, vector<int>& path, vector<bool>& visited, int current, int cost, int count) {
    if (count == n && graph[current][0] != INF) {
        return cost + graph[current][0]; // Kết thúc hành trình, quay về thành phố đầu tiên
    }

    int minCost;

    for (int next = 0; next < n; ++next) {
        if (!visited[next] && graph[current][next] != INF) {
            visited[next] = true;
            path[count] = next;
            int newCost = tsp(graph, path, visited, next, cost + graph[current][next], count + 1);
            minCost = min(minCost, newCost);
            visited[next] = false;
        }
    }

    return minCost;
}

// Hàm chính để giải bài toán người du lịch
int solveTSP(vector<vector<int>>& graph) {
    vector<int> path(n);
    vector<bool> visited(n, false);

    visited[0] = true; // Bắt đầu từ thành phố đầu tiên

    return tsp(graph, path, visited, 0, 0, 1);
}

int main() {
    int m; // Số lượng cạnh (chi phí giữa các thành phố)
    cin >> n >> m;

    // Khởi tạo ma trận chi phí và gán giá trị mặc định là INF
    vector<vector<int>> graph(n, vector<int>(n, INF));

    // Nhập chi phí giữa các thành phố
    for (int i = 0; i < m; ++i) {
        int from, to, cost;
        cin >> from >> to >> cost;
        graph[from - 1][to - 1] = cost;
    }

    // Giải bài toán người du lịch
    int minCost = solveTSP(graph);

    // In ra kết quả
    cout << minCost << endl;

    return 0;
}
