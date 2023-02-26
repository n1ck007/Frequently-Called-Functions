// Check is list is sorted from least to greatest
int isSorted(int arr[], int n){
  // https://www.geeksforgeeks.org/program-check-array-sorted-not-iterative-recursive/
  // Base case
    if (n == 1 || n == 0)
        return true;
     
    // Check if present index and index
    // previous to it are in correct order
    // and rest of the array is also sorted
    // if true then return true else return false
    return arr[n-1] >= arr[n-2] && isSorted(arr, n - 1);
}




