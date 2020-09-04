/*
https://practice.geeksforgeeks.org/problems/search-in-a-rotated-array0959/1/?track=ppc-search-sort&batchId=221
*/

int findP (vector<int> v, int l, int r) {
    if (l > r) return -1;
    
    int mid = (l + r) / 2;
    if (mid < r && v[mid] > v[mid + 1]) return mid;
    if (mid > l && v[mid - 1] > v[mid]) return mid - 1;
    if (v[l] > v[mid]) return findP(v, l, mid - 1);
    return findP(v, mid + 1, r);
}

int binSearch (vector<int> v, int l, int r, int k) {
    if (l > r) return -1;
    
    int mid = (l + r) / 2;
    
    if (v[mid] == k) return mid;
    if (v[mid] > k) return binSearch (v, l, mid - 1, k);
    return binSearch (v, mid + 1, r,  k);
}

int Search(vector<int> vec, int K) {
    //code here
    int l = 0;
    int r = vec.size() - 1;
    int pivot = findP(vec, l, r);
    
    if (pivot == -1) return binSearch (vec, l, r, K);
    if (vec[pivot] == K) return pivot;
    if (vec[l] > K) return binSearch (vec, pivot + 1, r, K);
    return binSearch (vec, l, pivot, K);
}
