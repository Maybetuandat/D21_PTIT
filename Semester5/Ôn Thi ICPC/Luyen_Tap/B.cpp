#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int count_trailing_zeros(long long num) {
    int count = 0;
    while (num % 10 == 0) {
        count++;
        num /= 10;
    }
    return count;
}

int max_trailing_zeros_product(int N, int K, vector<long long>& A) {
    sort(A.begin(), A.end());
    vector<int> max_zeros;
    for (int i = 0; i < N; i++) {
        max_zeros.push_back(count_trailing_zeros(A[i]));
    }
    sort(max_zeros.rbegin(), max_zeros.rend());
    for(int x : max_zeros)
      cout<<x<<endl;
    long long result = 1;
    for (int i = 0; i < K; i++) {
        result *= A[i];
    }
    return count_trailing_zeros(result);
}

int main() {
    int N, K;
    cin >> N >> K;
    vector<long long> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    
    int result = max_trailing_zeros_product(N, K, A);
    cout << result << endl;

    return 0;
}
