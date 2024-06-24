#include<bits/stdc++.h>
using namespace std;

int binary_search(vector<int> arr, int t, int i, int j){
    if(i<=j){
        int mid=i+(j-i)/2;
        if(arr[mid]==t) return mid;
        else if(arr[mid]>t) return binary_search(arr, t, i, mid-1);
        else return binary_search(arr, t, i=mid+1, j);
    }return -1;
}
int main(){
    int n;cout << "enter size of an array: ";
    cin >> n;
    vector<int> arr(n, 0);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    cout << "Enter the target: ";
    int t;cin >> t;
    int x = binary_search(arr, t, 0, n);
    cout << "index of target: " << x;

}