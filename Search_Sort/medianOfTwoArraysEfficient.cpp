/*
https://practice.geeksforgeeks.org/problems/median-of-two-sorted-arrays1618/1/?track=ppc-search-sort&batchId=221
*/

int median (int b[], int m) {
    if (m == 0) return -1;
    if (m % 2) return b[m / 2];
    return (b[m / 2] + b[m / 2 - 1]) / 2;
}


int mo2 (int a, int b) {
    return (a + b) / 2;
}


int mo3 (int a, int b, int c) {
    return a + b + c - max(a, max(b, c)) - min(a, min(b, c));
}


int mo4 (int a, int b, int c, int d) {
    return (a + b + c + d - max(a, max(b, max(c, d))) - min(a, min(b, min(c, d)))) / 2;
}

int findMedianU (int a[], int n, int b[], int m) {
    if (n == 0) return median (b, m);
    
    if (n == 1) {
        if (m == 1) return mo2 (a[0], b[0]);
        if (m % 2) return mo2 (mo3(a[0], b[m / 2 - 1], b[m / 2 + 1]), b[m / 2]);
        return mo3 (a[0], b[m / 2], b[m / 2 - 1]);
    }
    
    if (n == 2) {
        if (m == 2) return mo4 (a[0], b[0], a[1], b[1]);
        if (m % 2) return mo3 (max(a[0], b[m / 2 - 1]), b[m / 2], min(a[1], b[m / 2 + 1]));
        return mo4 (max(a[0], b[m / 2 - 2]), b[m / 2], b[m / 2 - 1], min(a[1], b[m / 2 + 1]));
    }
    
    int idxa = (n - 1) / 2;
    int idxb = (m - 1) / 2;
    if (a[idxa] <= b[idxb]) return findMedianU (a + idxa, n / 2 + 1, b, m - idxa);
    return findMedianU (a, n / 2 + 1, b + idxa, m - idxa);
}
    

int findMedian (int a[], int n, int b[], int m) {
    if (n > m) return findMedianU (b, m, a, n);
    return findMedianU (a, n, b, m);
}
