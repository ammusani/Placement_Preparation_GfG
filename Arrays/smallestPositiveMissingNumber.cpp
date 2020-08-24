/*
https://practice.geeksforgeeks.org/problems/smallest-positive-missing-number3051/1/?track=ppc-arrays&batchId=221
*/

int findMissing(int arr[], int n) { 
    if (n == 0) return 1;
    // Your code here
    int j = n;
    for (int i = j - 1; i >= 0; i--) {
        if (arr[i] <= 0) {
            arr[i] = arr[i] + arr[j - 1];
            arr[j - 1] = arr[i] - arr[j - 1];
            arr[i] = arr[i] - arr[j - 1];
            j--;
        }
    }
    for (int i = 0; i < j; i++) {
        if (abs(arr[i]) <= n) arr[abs(arr[i]) - 1] = -abs(arr[abs(arr[i]) - 1]);
    }

    for (int i = 0; i < j; i++) {
        if (arr[i] >= 0) {
            return i + 1;
        }
    }
    return j + 1;    
}
