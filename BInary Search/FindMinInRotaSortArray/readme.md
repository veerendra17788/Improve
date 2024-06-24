`Find Minimum in Rotated Sorted Array`

This can be solved in many ways the way i am comfortable is :
    `take the min in sorted part of array`

optimization:
    if arr[low] < arr[high]:
        update ans by checking with arr[low] and break
    this will slightly optimizes

explanation:
    actually in our previous problems we can find the sorted part in an rotated sort array
    after finding we have to update the `ans` by taking min between ans and arr[mid](smallest in sorted part)
