
#include <iostream>
#include <fstream>
#include <cmath>
 
using namespace std;
 
// Hàm kiểm tra số nguyên dương n có phải là số nguyên tố hay không
bool is_prime(int n) {
    if (n < 2) {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}
 
int main() {
    int m, k;
 
    cin >> m;
 
    for (int i = 0; i < m; i++) {
        cin >> k;
        for (int n = k - 1; n > 1; n--) {
            if (is_prime(n) && k % n == 0) {
                cout << n << endl;
                break;
            }
        }
    }
    return 0;
}