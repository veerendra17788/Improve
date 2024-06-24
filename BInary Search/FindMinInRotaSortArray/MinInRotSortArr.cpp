#include <iostream>
#include <vector>
#include <climits> // For INT_MAX

using namespace std;

/**
 * @brief Finds the minimum element in a rotated sorted array.
 *
 * This function uses a modified binary search to find the minimum element
 * in the rotated sorted array arr.
 *
 * @param arr The rotated sorted array.
 * @return The minimum element in the array.
 */
int findMin(vector<int>& arr) {
    int n = arr.size(), i = 0, j = n - 1;
    int ans = INT_MAX;
    
    while (i <= j) {
        int mid = i + (j - i) / 2;
        
        // If the array segment is already sorted
        if (arr[i] < arr[j]) {
            ans = min(ans, arr[i]);
            break;
        }
        
        ans = min(ans, arr[mid]);
        
        // Determine which part to search next
        if (arr[mid] <= arr[j]) {
            j = mid - 1;
        } else {
            i = mid + 1;
        }
    }
    
    return ans;
}

int main() {
    vector<int> arr = {4, 5, 6, 7, 0, 1, 2}; // Example rotated sorted array
    int minElement = findMin(arr);
    
    cout << "The minimum element in the array is: " << minElement << endl;
    
    return 0;
}
// this is the end of the file
