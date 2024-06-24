Here, in this problem the only new thing is dupilicates and also that only creates a diffrence of previous solution
let us take an example:
    arr = [3, 1, 3, 3, 3] here in this case we arr[mid]==arr[low]==arr[high]
since this we can not able to identify the sorted part 
inorder to eleminate this sitation we use simple technique "trim"
so we just add a new block code :
if (arr[i] == arr[mid] && arr[j] == arr[mid]) {
            i++;
            j--;
            continue;
        }
remaining is all same


we also imagine like :

  while (i < j && arr[i] == arr[j]) {
        if (arr[i] == k) return true;
        i++;
        j--;
    }
but it will takes slightly more time complexity since we need not trim the array if  arr[mid]==arr[low]==arr[high]
due to we can able to identify sorted part
but it definately takes same worst time complexity


Time compiexity: in worst case if all elements are equal we end up taking O(n/2)