#include <iostream>
#include <vector>

using namespace std;

int lowerBound(vector<int> arr, int n, int x) {
    int i = 0, j = n - 1;
    while (i <= j) {
        int mid = i + (j - i) / 2;
        if (arr[mid] >= x) j = mid - 1;
        else i = mid + 1;
    }
    return i;
}

int main() {
    vector<int> arr = {1, 2, 4, 4, 5, 6, 8}; // Example array
    int x = 4; // Example value to find lower bound for
    int n = arr.size();

    int result = lowerBound(arr, n, x);
    cout << "The lower bound for " << x << " is at index: " << result << endl;

    return 0;
}
