/*
https://practice.geeksforgeeks.org/problems/minimum-swaps/1/?track=ppc-search-sort&batchId=221
*/

int minSwaps(int arr[], int N){
    /*Your code here */
    vector<pair<int, int>> p;
    for (int i = 0; i < N; i++) {
        p.push_back(make_pair(arr[i], i));
    }
    sort (p.begin(), p.end());
    bool a[N];
    memset(a, false, N);
    int count = 0;
    int cycle;
    for (int i = 0; i < N; i++) {
        
        if (!a[i] && p[i].second != i) {
            cycle = 0;
            int j = i;
            while (!a[j]) {
                a[j] = 1;
                cycle++;
                j = p[j].second;
                
            }
            count += (cycle - 1);
        }
        
    }
    return count;
}
