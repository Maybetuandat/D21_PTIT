#include <bits/stdc++.h>

using namespace std;

// Hàm cập nhật giá trị tại index trong cây BIT
void update(vector<int>& bit, int index, int value) {
    while (index < bit.size()) {
        bit[index] = max(bit[index], value);
        index += index & -index;
    }
}

// Hàm truy vấn giá trị lớn nhất trong phạm vi [1, index] của cây BIT
int query(const vector<int>& bit, int index) {
    int max_value = 0;
    while (index > 0) {
        max_value = max(max_value, bit[index]);
        index -= index & -index;
    }
    return max_value;
}

int findLongestIncreasingSubsequence(vector<int>& nums) {
    if (nums.empty()) {
        return 0;
    }

    int max_num = *max_element(nums.begin(), nums.end());
    vector<int> bit(max_num + 1, 0);
    int lis_length = 0;

    for (int num : nums) {
        int prev_max = query(bit, num - 1);
        int new_value = prev_max + 1;
        update(bit, num, new_value);
        lis_length = max(lis_length, new_value);
    }

    return lis_length;
}

int main() {
    int n ; cin>>n;
    vector<int> nums;
    for(int i=0; i<n; i++)
    {
        int x; cin>>x;
        nums.push_back(x);
    }
    int result = findLongestIncreasingSubsequence(nums);
    cout << "Length of Longest Increasing Subsequence: " << result << endl;
    return 0;
}
