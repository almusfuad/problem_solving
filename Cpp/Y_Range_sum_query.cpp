#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    vector<long long> prefixSum(n);
    prefixSum[0] = arr[0];
    for (int i = 1; i < n; ++i) {
        prefixSum[i] = prefixSum[i - 1] + arr[i];
    }

    while (q--) {
        int l, r;
        cin >> l >> r;

        long long sum = prefixSum[r - 1] - (l > 1 ? prefixSum[l - 2] : 0);
        cout << sum << endl;
    }

    return 0;
}