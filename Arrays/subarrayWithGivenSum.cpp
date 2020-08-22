/*
https://practice.geeksforgeeks.org/problems/subarray-with-given-sum-1587115621/1/?track=ppc-arrays&batchId=221
*/

vector<int> subarraySum(int arr[], int n, int s){
    vector<int> v;
    int t = 0;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
        //printf ("%d %d %d\n", sum, i, t);
        if (sum == s) {
            v.push_back(t + 1);
            v.push_back(i + 1);
            return v;
        }
        else if (sum > s) {
            while (sum > s && t <= i) {
                sum -= arr[t];
                //printf("%d %d %d\n", sum, i, t);
                t++;
                if (sum == s) {
                    v.push_back(t + 1);
                    v.push_back(i + 1);
                    return v;
                }
            }
        }
    }
    v.push_back(-1);
    return v;
}
