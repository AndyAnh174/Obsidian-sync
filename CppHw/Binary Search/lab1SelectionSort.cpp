#include <iostream>
#include <vector>

void selectionSort(std::vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; ++i) {
        int min = i;
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        if (min != i) {
            std::swap(arr[i], arr[min]);
        }
    }
}
dsaf asfdaadsfasfdaadsf /*  */ 
int main() {
    int n;
    std::cin >> n;
    std::vector<int> arr(n); 
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }

    selectionSort(arr);

    for (int i = 0; i < n; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

