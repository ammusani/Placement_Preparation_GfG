/*
https://practice.geeksforgeeks.org/problems/union-of-two-sorted-arrays-1587115621/1/?track=ppc-search-sort&batchId=221
*/

vector<int> findUnion(int a[], int b[], int n, int m)
{
    //Your code here
    //return vector with correct order of elements
    vector<int> v;
    int i = 0;
    int j = 0;
    
    int k = 0;
    int arr[n + m];
    //vector<int> v;
    while (i < n && j < m) {
        if (a[i] < b[j]) {
            arr[k] = a[i];
            //v.push_back(a[i]);
            i++;
            k++;
        }
        else if (a[i] > b[j]) {
            arr[k] = b[j];
            //v.push_back(b[j]);
            j++;
            k++;
        }
        else {
            arr[k] = a[i];
            //v.push_back(a[i]);
            i++;
            j++;
            k++;
        }
        while (i < n && arr[k - 1] >= a[i]) i++;
        while (j < m && arr[k - 1] >= b[j]) j++;
    }
    while (i < n) {
        if (k) {
            if (a[i] != arr[k - 1]) {
                arr[k] = a[i];
                //v.push_back(a[i]);
                k++;
            }
        }
        else {
            arr[k] = a[i];
            //v.push_back(a[i]);
            k++;
        }
        i++;
    }
    while (j < m) {
        if (k) {
            if (b[j] != arr[k - 1]) {
                arr[k] = b[j];
                //v.push_back(b[j]);
                k++;
            }
        }
        else {
            arr[k] = b[j];
            //v.push_back(b[j]);
            k++;
        }
        j++;
    }
    for (int i = 0; i < k; i++) v.push_back(arr[i]);
    return v;
}
