/*
https://practice.geeksforgeeks.org/problems/merge-sort/1/?track=ppc-search-sort&batchId=221
*/

/* The task is to complete merge() which is used
   in below mergeSort() */
/*   l is for left index and r is right index of the
   sub-array of arr to be sorted
void mergeSort(int arr[], int l, int r) {
    if (l < r)   {
        int m = l+(r-l)/2;
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
        merge(arr, l, m, r);
    }
} */

// Merges two subarrays of arr[].  First subarray is arr[l..m]
// Second subarray is arr[m+1..r]
void merge(int arr[], int l, int m, int r)
{
     // Your code here
     int c = (r - l) / 2 + 1;
     int a[c];
     int b[c];
     for (int i = 0; i <= m - l; i++) a[i] = arr[l + i];
     for (int i = 0; i < r - m; i++) b[i] = arr[m + i + 1];
     
     int i = 0;
     int j = 0;
     int k = l;
     while (i <= m - l && j < r - m && k <= r) {
         if (a[i] > b[j]) {
             arr[k] = b[j];
             k++;
             j++;
         }
         else {
             arr[k] = a[i];
             k++;
             i++;
         }
     }
     while (i <= m - l && k <= r) {
         arr[k] = a[i];
         k++;
         i++;
     }
     while (j < r - m && k <= r) {
         arr[k] = b[j];
         k++;
         j++;
     }
}
