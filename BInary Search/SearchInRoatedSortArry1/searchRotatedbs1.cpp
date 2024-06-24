#include <iostream>
#include <vector>

using namespace std;

/**
 * @brief Searches for the target value k in a rotated sorted array.
 *
 * This function uses a modified binary search to find the index of the target
 * value k in the rotated sorted array arr. If the target value is found, it
 * returns the index. Otherwise, it returns -1.
 *
 * @param arr The rotated sorted array to search in.
 * @param n The size of the array.
 * @param k The target value to search for.
 * @return The index of the target value if found, otherwise -1.
 */
int search(vector<int> &arr, int n, int k) {
    int i = 0, j = n - 1;
    while (i <= j) {
        int mid = i + (j - i) / 2;
        if (arr[mid] == k) return mid;
        if (arr[mid] >= arr[i]) {
            if (k >= arr[i] && k < arr[mid]) {
                j = mid - 1;
            } else {
                i = mid + 1;
            }
        } else {
            if (k > arr[mid] && k <= arr[j]) {
                i = mid + 1;
            } else {
                j = mid - 1;
            }
        }
    }
    return -1;
}

int main() {
    vector<int> arr = {4, 5, 6, 7, 0, 1, 2}; // Example rotated sorted array
    int k = 0; // Example value to find in the array
    int n = arr.size();

    int result = search(arr, n, k);
    if (result != -1) {
        cout << "Element " << k << " found at index: " << result << endl;
    } else {
        cout << "Element " << k << " not found in the array." << endl;
    }

    return 0;
}
