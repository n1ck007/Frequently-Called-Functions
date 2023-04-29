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

// Selection Sort - Iterative
void selectionSort(vector<int> &vec) {
	int i;
	int j;
	int min;
	for (i = 0; i < vec.size() - 1; i++) {
		min = i;
		// fin the minimum value in the unsorted array
		for (j = i+1; j < vec.size(); j++) {
			if ( (vec.at(j)) <= (vec.at(min)) ) {
				min = j;
			}
			if (min != i) {
				// swap values at indices i and min
				int temp = vec.at(min);
				vec.at(min) = vec.at(i);
				vec.at(i) = temp;
			}
		}
	}
}
