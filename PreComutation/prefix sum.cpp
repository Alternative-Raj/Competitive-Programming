#include <bits/stdc++.h>
using namespace std;

// prefix sum of an array
void fillPrefixSum(int arr[], int n, int prefixSum[]) {
    prefixSum[0] = arr[0];
    for (int i = 1; i < n; i++)
        prefixSum[i] = prefixSum[i - 1] + arr[i];
}

int main() {
    int n;
    cin >> n;

    int arr[n];
    int prefixSum[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    fillPrefixSum(arr, n, prefixSum);

    for (int i = 0; i < n; i++) {
        cout << prefixSum[i] << " ";
    }

    return 0;
}
