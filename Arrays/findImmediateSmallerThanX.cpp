/*
https://practice.geeksforgeeks.org/problems/find-immediate-smaller-than-x/1/?track=ppc-arrays&batchId=221
*/

int immediateSmaller(int arr[], int n, int x)
{
    // your code here
    int minD = INT_MAX;
    int minV = INT_MAX;
    int flag = 0;
    for (int i = 0; i < n; i++) {
        if (x > arr[i]) {
            int l = x - arr[i]; 
            if (l < minD) {
                minD = l;
                minV = arr[i];
                flag = 1;
            }
        }
    }
    if (flag) return minV;
    return -1;
}
