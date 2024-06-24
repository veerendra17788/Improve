#include <iostream>
#include <vector>

using namespace std;

int lowerbound(vector<int> &arr, int x, int n) {
    int i = 0, j = n - 1;
    while (i <= j) {
        int mid = i + (j - i) / 2;
        if (arr[mid] >= x) j = mid - 1;
        else i = mid + 1;
    }
    return i;
}

int upperBound(vector<int> &arr, int x, int n) {
    int i = 0, j = n - 1;
    while (i <= j) {
        int mid = i + (j - i) / 2;
        if (arr[mid] > x) j = mid - 1;
        else i = mid + 1;
    }
    return i;
}

pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int x) {
    int ft = lowerbound(arr, x, n);
    int lt = upperBound(arr, x, n) - 1;
    
    if (ft >= n || arr[ft] != x) ft = -1;
    if (lt >= n || lt < 0 || arr[lt] != x) lt = -1;
    
    return {ft, lt};
}

int main() {
    vector<int> arr = {1, 2, 4, 4, 5, 6, 8}; // Example array
    int x = 4; // Example value to find positions for
    int n = arr.size();

    pair<int, int> result = firstAndLastPosition(arr, n, x);
    cout << "The first and last positions of " << x << " are: (" << result.first << ", " << result.second << ")" << endl;

    return 0;
}
