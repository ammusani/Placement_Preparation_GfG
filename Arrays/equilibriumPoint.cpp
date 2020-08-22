/*
https://practice.geeksforgeeks.org/problems/equilibrium-point-1587115620/1/?track=ppc-arrays&batchId=221
*/

int equilibriumPoint(long long a[], int n) {
    if (n == 1) return 1;
    int leftSum = 0;
    int rightSum = 0;
    for (int i = 1; i < n; i++) rightSum += a[i];
    
    
    for (int i = 1; i < n; i++) {
        leftSum += a[i - 1];
        rightSum -= a[i];
        if (leftSum == rightSum) return i + 1;
    }
    return -1;
}
