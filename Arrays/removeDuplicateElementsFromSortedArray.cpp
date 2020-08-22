/*
https://practice.geeksforgeeks.org/problems/remove-duplicate-elements-from-sorted-array/1/?track=ppc-arrays&batchId=221
*/

int remove_duplicate(int A[],int N)
{
    int B[N];
    int loc = 0;
    B[0] = A[0];
    loc = 1;
    for (int i = 1; i < N; i++) {
        if (A[i] == B[loc - 1]) continue;
        else {
            B[loc] = A[i];
            loc++;
        }
    }
    for (int i = 0; i < loc; i++) A[i] = B[i];
    return loc;
}
