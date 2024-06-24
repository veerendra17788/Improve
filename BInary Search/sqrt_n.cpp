#include <iostream>
using namespace std;

int floorSqrt(int n)
{
    // If n is 0 or 1, the floor square root of n is n itself
    if (n == 0 || n == 1) return n;

    int i = 1, j = n / 2; // Initialize the binary search range
    while (i <= j) {
        int m = i + (j - i) / 2; // Calculate the mid value
        if (1LL * m * m > n) { // Use 1LL to ensure multiplication is in long long
            j = m - 1; // If m^2 is greater than n, search the left half
        } else {
            i = m + 1; // If m^2 is less than or equal to n, search the right half
        }
    }
    return j; // Return the floor value of the square root
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "The floor square root of " << n << " is " << floorSqrt(n) << endl;
    return 0;
}
