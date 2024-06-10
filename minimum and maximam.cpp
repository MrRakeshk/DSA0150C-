#include <iostream>
#include <algorithm> // Include the algorithm header for min_element and max_element

int main() {
    int arr[] = {12, 1234, 45, 67, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Find the minimum and maximum elements
    int minValue = *std::min_element(arr, arr + n);
    int maxValue = *std::max_element(arr, arr + n);

    std::cout << "Minimum element of array: " << minValue << "\n";
    std::cout << "Maximum element of array: " << maxValue << "\n";

    return 0;
}
