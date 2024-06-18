#include <iostream>
#include <vector>
#include <unordered_set>

int countValidParentheses(const std::string& s) {
    int n = s.length();
    std::vector<int> dp(n, 0);  // S? d?ng vector dp d? luu s? lu?ng xâu con k?t thúc t?i v? trí i là dãy ngo?c dúng

    int result = 0;

    for (int i = 1; i < n; i++) {
        if (s[i] == ')') {
            int prev = i - dp[i - 1] - 1;  // V? trí tru?c dó mà có th? k?t h?p v?i dãy ngo?c t?i i d? t?o thành dãy ngo?c dúng
            if (prev >= 0 && s[prev] == '(') {
                dp[i] = dp[i - 1] + 2 + (prev > 0 ? dp[prev - 1] : 0);  // Tính toán s? lu?ng xâu con k?t thúc t?i i là dãy ngo?c dúng
            }
        }
        result += dp[i];
    }

    return result;
}

int main() {
    std::string T;
    std::cout << "Nhap xau T: ";
    std::cin >> T;

    int result = countValidParentheses(T);

    std::cout << "So luong xau con phan biet cua T la mot day ngoac dung: " << result << std::endl;

    return 0;
}

