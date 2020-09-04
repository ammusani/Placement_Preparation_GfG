/*
https://practice.geeksforgeeks.org/problems/intersection-of-two-sorted-array-1587115620/1/?track=ppc-search-sort&batchId=221
*/

vector<int> printIntersection(int arr1[], int arr2[], int N, int M) 
{ 
    //Your code here
    vector<int> v;
    int i = 0;
    int j = 0;
    while (i < N && j < M) {
        if (arr1[i] > arr2[j]) {
            //cout << arr1[i] << " " << arr2[j] << " " << i << " " << j << endl;
            j++;
        }
        else if (arr1[i] < arr2[j]) {
            //cout << arr1[i] << " " << arr2[j] << " " << i << " " << j << endl;
            i++;
        }
        else if (arr1[i] == arr2[j]) {
            if (v.empty()) v.push_back(arr1[i]);
            else if (v[v.size() - 1] != arr1[i]) v.push_back(arr1[i]);
            //cout << arr1[i] << endl;
            i++;
            j++;
        }
    }
    //cout << 99 << endl;
    return v;
}
