#include <iostream>
#include <vector>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool isPossible(const vector<ll>& arr, ll n, ll k, ll targetSum) {
    ll subarrayCount = 1;
    ll currentSum = 0;

    for (ll i = 0; i < n; ++i) 
    {
        if (arr[i] > targetSum) 
            return false;
        

        if (currentSum + arr[i] > targetSum) 
        {
            subarrayCount++;
            currentSum = arr[i];
        } 
        else 
            currentSum += arr[i];
        
    }

    return subarrayCount <= k;
}

ll findOptimalMaxSum(const vector<ll>& arr, ll n, ll k) {
    ll low = *max_element(arr.begin(), arr.end());
    ll high = accumulate(arr.begin(), arr.end(), 0);

    while (low < high) {
        ll mid = (high + low) / 2;

        if (isPossible(arr, n, k, mid)) {
            high = mid;
        } else {
            low = mid + 1;
        }
    }

    return low;
}

int main()
 {
    ll n, k;
    cin >> n >> k;

    vector<ll> arr(n);
    for (ll i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    ll result = findOptimalMaxSum(arr, n, k);
    cout << result << endl;

    return 0;
}
