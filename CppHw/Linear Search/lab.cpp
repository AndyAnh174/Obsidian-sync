#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Linear search function
int linear_search(const vector<int>& arr, int x) {
    for (int i = 1; i <= arr.size(); ++i) {
        if (arr[i] == x) {
            return i;
        }
    }
    return -1;
}

// Binary search function
int binary_search(const vector<int>& arr, int x) {
    int low = 1;
    int high = arr.size() - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == x) {
            return mid;
        } else if (arr[mid] < x) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;
}

int main() {
    int n;
    cin >> n;
    
    vector<int> arr(n);
    for (int i = 1; i <= n; ++i) {
        cin >> arr[i];
    }

    int x;
    cin >> x;

    // Linear search
    int linear_result = linear_search(arr, x);
    cout << linear_result << endl;

    // Sort binary search
    sort(arr.begin(), arr.end());

    // Binary search
    int binary_result = binary_search(arr, x);
    cout << binary_result << endl;

    return 0;
}
