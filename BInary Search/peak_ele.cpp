#include <vector>
#include <iostream>
using namespace std;

int findPeakElement(vector<int> &arr) {
    int n = arr.size();
    
    // Edge cases: single element or peak at the boundaries
    if (n == 1 || arr[0] > arr[1]) return 0;
    if (arr[n-1] > arr[n-2]) return n-1;

    int i = 1, j = n-2;
    while (i <= j) {
        int mid = i + (j - i) / 2;

        // Check if the middle element is a peak
        if (arr[mid] > arr[mid + 1] && arr[mid] > arr[mid - 1]) {
            return mid;
        } 
        // If the element at mid is greater than the next element, move left
        else if (arr[mid] > arr[mid + 1]) {
            j = mid - 1;
        } 
        // Otherwise, move right
        else {
            i = mid + 1;
        }
    }
    return -1; // This line should never be reached if input constraints guarantee a peak exists
}

int main() {
    vector<int> arr = {1, 2, 3, 1};
    int peakIndex = findPeakElement(arr);
    cout << "Peak element is at index: " << peakIndex << endl;
    return 0;
}
