/*
https://practice.geeksforgeeks.org/problems/median-of-two-sorted-arrays1618/1/?track=ppc-search-sort&batchId=221
*/

int findMedian(int a[], int n, int b[], int m){
    // code here
    int i = 0;
    int j = 0;
    int m1;
    int m2;
    int l = m + n;
    if (l % 2) {
        for (int k = 0; k <= l / 2; k++) {
            if (i !=n && j != m) {
                m1 = a[i] < b[j] ? a[i++] : b[j++];
            }
            else if (i < n) m1 = a[i++];
            else if (j < m) m1 = b[j++];
        }
        return m1;
    }
    else {
        for (int k = 0; k <= l / 2; k++) {
            m2 = m1;
            if (i != n && j != m) m1 = a[i] < b[j] ? a[i++] : b[j++];
            else if (i < n) m1 = a[i++];
            else if (j < m) m1 = b[j++];
        }
        return (m1 + m2) / 2;
    }
}
