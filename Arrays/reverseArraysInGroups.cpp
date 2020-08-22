/*
https://practice.geeksforgeeks.org/problems/reverse-array-in-groups0255/1/?track=ppc-arrays&batchId=221
*/

vector<long long> reverseInGroups(vector<long long> mv, int n, int k){
    
    // your code here
    int arr[n];
    for (int i = 0; i < n; i += k) {
        if (i + k <= n) {
            for (int j = 0; j < k; j++) {
                arr[i  + j] = mv[i + k - j - 1];
            }
        }
        else {
            for (int j = 0; j < n - i; j++) {
                arr[i  + j] = mv[n - j - 1];
            }
        }
    }
    for (int i = 0; i < n; i++) mv[i] = arr[i];
    return mv;
}
