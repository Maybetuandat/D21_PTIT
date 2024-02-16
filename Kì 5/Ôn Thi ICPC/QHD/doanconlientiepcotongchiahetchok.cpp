#include <iostream>
#include <unordered_map>
using namespace std;

int countSubarraysWithSumDivisibleByK(int arr[], int n, int k) {
    unordered_map<int, int> sumCount;
    int prefixSum = 0;
    int count = 0;

    for (int i = 0; i < n; i++) {
        prefixSum = (prefixSum + arr[i]) % k;
        if (prefixSum < 0) {
            prefixSum += k;  // Đảm bảo prefixSum không âm
        }

        if (prefixSum == 0) {
            count++;
        }

        if (sumCount.find(prefixSum) != sumCount.end()) {
            count += sumCount[prefixSum];
        }

        sumCount[prefixSum]++;
    }

    return count;
}

int main() {
    int arr[] = {4, 5, 0, -2, -3, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 5;

    int result = countSubarraysWithSumDivisibleByK(arr, n, k);
    cout << "Số lần dãy con có tổng chia hết cho " << k << " là: " << result << endl;

    return 0;
}
