#include <iostream>
#include <vector>

using namespace std;

/**
 * @brief Searches for the target value k in a rotated sorted array that may contain duplicates.
 *
 * This function uses a modified binary search to find the target value k in the rotated
 * sorted array arr. If the target value is found, it returns true. Otherwise, it returns false.
 *
 * @param arr The rotated sorted array to search in.
 * @param k The target value to search for.
 * @return True if the target value is found, otherwise false.
 */
bool searchInARotatedSortedArrayII(vector<int>& arr, int k) {
    int n = arr.size();
    int i = 0, j = n - 1;

    while (i <= j) {
        int mid = i + (j - i) / 2;
        if (arr[mid] == k) return true;

        // Handle duplicates
        if (arr[i] == arr[mid] && arr[j] == arr[mid]) {
            i++;
            j--;
            continue;
        }

        // If left half is sorted
        if (arr[mid] >= arr[i]) {
            if (k >= arr[i] && k < arr[mid]) {
                j = mid - 1;
            } else {
                i = mid + 1;
            }
        }
        // If right half is sorted
        else {
            if (k > arr[mid] && k <= arr[j]) {
                i = mid + 1;
            } else {
                j = mid - 1;
            }
        }
    }
    return false;
}

int main() {
    vector<int> arr = {2, 5, 6, 0, 0, 1, 2}; // Example rotated sorted array with duplicates
    int k = 0; // Example value to find in the array

    bool result = searchInARotatedSortedArrayII(arr, k);
    if (result) {
        cout << "Element " << k << " is found in the array." << endl;
    } else {
        cout << "Element " << k << " is not found in the array." << endl;
    }

    return 0;
}
