#include <iostream>
#include <vector>

using namespace std;

bool hasPairWithSum(vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;

    while (left < right) {
        int currentSum = arr[left] + arr[right];
        if (currentSum == target) {
            cout << "Pair found: " << arr[left] << " and " << arr[right] << endl;
            return true;
        } else if (currentSum < target) {
            left++; // Move the left pointer to increase the sum
        } else {
            right--; // Move the right pointer to decrease the sum
        }
    }

    cout << "No pair found with the given sum." << endl;
    return false;
}

int main() {
    int n, targetSum;
    cin >> n >> targetSum;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    hasPairWithSum(arr, targetSum);

    return 0;
}
