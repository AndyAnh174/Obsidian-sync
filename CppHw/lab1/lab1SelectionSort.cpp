#include <iostream>


void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        int minIndex = i;
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            std::swap(arr[i], arr[minIndex]);
        }
    }
}

int main() {
    int n;
    std::cin >> n;

    int arr[n];
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }
    selectionSort(arr, n);
    for (int i = 0; i < n; ++i) {
        std::cout << arr[i] << " ";
    }
    return 0;
}
