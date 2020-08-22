/*
https://practice.geeksforgeeks.org/problems/rotate-array-by-n-elements-1587115621/1/?track=ppc-arrays&batchId=221
*/

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

void rotateArr(int arr[], int d, int n){
    // code here
    int g = gcd(d, n);
    int temp;
    int j;
    int k;
    for (int i = 0; i < g; i++) {
        temp = arr[i];
        j = i;
        
        while (1) {
          k = (j + d) % n;
          if (k == i) break;
          arr[j] = arr[k];
          j = k;
        }
        arr[j] = temp;
    }
}
