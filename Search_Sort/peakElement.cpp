/*
https://practice.geeksforgeeks.org/problems/peak-element/1/?track=ppc-search-sort&batchId=221
*/

int peakElement(int arr[], int n)
{
   // Your code here
   int l = 0;
   int r = n - 1;
   int mid = l + (r - l) / 2;
   while (l <= r) {
       //cout << 0 << endl;
       if (mid == 0 && arr[mid] > arr[mid + 1]) {
           //cout << 1 << endl;
           return mid;
       }
       if (mid == n - 1 && arr[mid] > arr[mid - 1]) {
           //cout << 2 << endl;
           return mid;
       }
       if (arr[mid] > arr[mid - 1]) {
           if (arr[mid] > arr[mid + 1]) {
               //cout << 3 << endl;
               return mid;
           }
           else {
               //cout << 4 << endl;
               l = mid + 1;
               mid = l + (r - l) / 2;
           }
       }
       else {
           //cout << 5 << endl;
           r = mid - 1;
           mid = l + (r - l) / 2;
       }
   }
}
