/*
https://practice.geeksforgeeks.org/problems/first-repeating-element4018/1/?track=ppc-arrays&batchId=221
*/

int firstRepeated(int arr[], int n) {
    map<int, int> m;
    m[arr[0]] = 0;
    vector<int> v;
    
    for (int i = 1; i < n; i++) {
        if (m.find(arr[i]) == m.end()) m[arr[i]] = i;
        else {
            //printf("%d %d\n", arr[i], i);
            v.push_back(arr[i]);
        }
    }
    
    if (v.empty()) return -1;
    int min = m.find(v[0]) -> second;
    
    //printf("%d %d\n", v[0], min);
    
    for (int i = 1; i < v.size(); i++) {
        int t = m.find(v[i]) -> second;
        if (min > t) min = t;
    }
    return min + 1;
}
