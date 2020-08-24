/*
https://practice.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/1/?track=ppc-arrays&batchId=221
*/

// Maximum Sub Array Sum
int maxSubarraySum(int arr[], int n){
    
    // Your code here
    int sum = 0;
    int maxSum = arr[0];
    for (int i = 0; i < n; i++) {
        sum += arr[i];
        if (sum > maxSum) maxSum = sum;
        if (sum < 0) sum = 0;
    }
    return maxSum;
}
