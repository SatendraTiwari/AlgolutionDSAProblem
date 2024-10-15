#include <iostream>
using namespace std;

const int MIN_VALUE = -1000000;

int findKthLargest(int arr[], int n, int k) {
    int maxElement;

    for (int i = 0; i < k; i++) {
        maxElement = MIN_VALUE;

        for (int j = 0; j < n; j++) {
            if (arr[j] > maxElement) {
                maxElement = arr[j];
            }
        }

        // After finding the max element, mark it as a very small number
        // so it is ignored in the next iteration
        for (int j = 0; j < n; j++) {
            if (arr[j] == maxElement) {
                arr[j] = MIN_VALUE;
                break;
            }
        }
    }

    return maxElement;
}

int main() {
    int arr[] = {3, 2, 1, 5, 6, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2;
    
    int result = findKthLargest(arr, n, k);
    cout << "The " << k << "th largest element is: " << result << endl;
    
    return 0;
}