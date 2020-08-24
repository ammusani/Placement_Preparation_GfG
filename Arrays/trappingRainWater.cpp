/*
https://practice.geeksforgeeks.org/problems/trapping-rain-water-1587115621/1/?track=ppc-arrays&batchId=221
*/

int trappingWater(int arr[], int n){

    // Your code here
    int left[n];
    left[0] = arr[0];
    int right[n];
    right[n - 1] = arr[n - 1];
    for (int i = 1; i < n; i++) {
        left[i] = max(left[i - 1], arr[i]);
    }
    for (int i = n - 2; i >= 0; i--) {
        right[i] = max(right[i + 1], arr[i]);
    }
    int sum = 0;
    for (int i = 0; i < n; i++) {
        int j = min(right[i], left[i]);
        if (j > arr[i]) sum = sum + j - arr[i];
    }
    return sum;
}
