/*
https://practice.geeksforgeeks.org/problems/wave-array-1587115621/1/?track=ppc-arrays&batchId=221
*/

void convertToWave(int *arr, int n){
    int temp;
    for (int i = 0; i < n - 1; i += 2) {
        temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
    }
}
