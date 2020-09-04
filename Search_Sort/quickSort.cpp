/*
https://practice.geeksforgeeks.org/problems/quick-sort/1/?track=ppc-search-sort&batchId=221
*/

/* The main function that implements QuickSort
 arr[] --> Array to be sorted,    low  --> Starting index,   high  --> Ending index
void quickSort(int arr[], int low, int high) {
    if (low < high)     {
        // pi is partitioning index, arr[p] is now  at right place
        int pi = partition(arr, low, high);
        // Separately sort elements before / partition and after partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}*/
/* This function takes last element as pivot, places  the pivot element 
   at its correct position in sorted  array, and places all smaller (smaller
   than pivot) to left of pivot and all greater elements to right  of pivot */
int partition (int arr[], int low, int high)
{
   // Your code here
   int j = low;
   for (int i = low; i < high; i++) {
       if (arr[i] < arr[high]) {
           if (i != j) {
            arr[j] = arr[j] + arr[i];
            arr[i] = arr[j] - arr[i];
            arr[j] = arr[j] - arr[i];
           }
           j++;
       }
   }
   if (j != high) {
    arr[j] = arr[j] + arr[high];
    arr[high] = arr[j] - arr[high];
    arr[j] = arr[j] - arr[high];
   }
   return j;
}
