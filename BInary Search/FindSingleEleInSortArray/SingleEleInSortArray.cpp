#include <iostream>
#include <vector>

using namespace std;

/**
 * @brief Finds the single non-duplicate element in a sorted array where every other element appears twice.
 *
 * This function uses a modified binary search to find the single non-duplicate element
 * in the sorted array arr.
 *
 * @param arr The sorted array with one element that appears only once.
 * @return The single non-duplicate element in the array.
 */
int singleNonDuplicate(vector<int>& arr) {
    int n = arr.size();
    
    // Edge cases
    if (n == 1) return arr[0];
    if (arr[0] != arr[1]) return arr[0];
    if (arr[n - 1] != arr[n - 2]) return arr[n - 1];

    int i = 1, j = n - 2; // We start from the second and second last elements
    
    while (i <= j) {
        int mid = i + (j - i) / 2;
        
        // Check if the mid element is the single element
        if (arr[mid] != arr[mid - 1] && arr[mid] != arr[mid + 1]) {
            return arr[mid];
        }
        
        // Determine which side to continue the search on
        if (mid % 2 == 0) {
            if (arr[mid] == arr[mid + 1]) {
                i = mid + 2;
            } else {
                j = mid - 2;
            }
        } else {
            if (arr[mid] == arr[mid - 1]) {
                i = mid + 1;
            } else {
                j = mid - 1;
            }
        }
    }
    
    return -1; // This return is to satisfy the compiler; the function should never reach here.
}

int main() {
    vector<int> arr = {1, 1, 2, 2, 3, 4, 4, 5, 5}; // Example sorted array
    int result = singleNonDuplicate(arr);
    
    if (result != -1) {
        cout << "The single non-duplicate element is: " << result << endl;
    } else {
        cout << "No single non-duplicate element found." << endl;
    }
    
    return 0;
}
