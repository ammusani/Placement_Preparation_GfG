/*
https://practice.geeksforgeeks.org/problems/reverse-array-in-groups0255/1/?track=ppc-arrays&batchId=221
*/
// Another solution, speed to type then the previous but has execution overheads.
vector<long long> reverseInGroups(vector<long long> mv, int n, int k){
    
    // your code here
    for (long i = 0; i < n;) {
        if (i + k < n) {
            reverse(mv.begin() + i, mv.begin() + i + k);
            i += k;
        }
        else {
            reverse(mv.begin() + i, mv.end());
            i += k;
        }
    }
    return mv;
}
