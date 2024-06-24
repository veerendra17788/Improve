int the code int search(vector<int> &arr, int n, int k) {
    int i=0, j=n-1;
    while(i<=j){
        int mid=i+(j-i)/2;
        if(arr[mid]==k) return mid;
        if(arr[mid]>=arr[i]){
            if(k<arr[mid] && k>=arr[i]){
                j=mid-1;
                
            }else{
                i=mid+1;
            }
        }else{
            if(k>arr[mid] && k<=arr[j]){
                i=mid+1;
            }else{
                j=mid-1;
            }
        }
    }
    return -1;
}

in line 6         if(arr[mid]>=arr[i])
we have to write >= instead of > since lets take test case arr = [8, 2], target=2
if we place > it fails
it thinks mid is in lower level so it checks it checks "k>arr[mid] && k<=arr[j]" but it never give right
since actually id is in upper part
so in oder to solve this problem we have to shift the mid upper if arr[mid]>=arr[i] then it will check and gives right answer
