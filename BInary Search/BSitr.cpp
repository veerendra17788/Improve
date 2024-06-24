#include<bits/stdc++.h>
using namespace std;

int binary_search(vector<int> arr, int t){
    int n=arr.size();
    int i=0, j=n-1;
    while(i<=j){
        int mid=i+(j-i)/2;
        if(arr[mid]==t) return mid;
        else if(arr[mid]>t) j=mid-1;
        else i=mid+1;
    }
    return -1;
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
    int x = binary_search(arr, t);
    cout << "index of target: " << x;

}