/*
https://practice.geeksforgeeks.org/problems/leaders-in-an-array-1587115620/1/?track=ppc-arrays&batchId=221
*/

vector<int> leaders(int arr[], int n){
    
    // Your code here
    vector<int> v;
    stack<int> s;
    s.push(arr[n - 1]);
    for (int i = n - 2; i > -1; i--) {
        if (arr[i] >= s.top()) s.push(arr[i]);
    }
    
    while(!s.empty()) {
        v.push_back(s.top());
        s.pop();
    }
     return v;
    
}
