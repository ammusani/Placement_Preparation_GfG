/*
https://practice.geeksforgeeks.org/problems/find-transition-point-1587115620/1/?track=ppc-arrays&batchId=221
*/

int transitionPoint(int arr[], int n) {
    int i = n / 2;
    int bot = 0;
    int top = n;
    while (1) {
        if (i == n) return -1;
        if (i == 0 && arr[i] == 1) return 0;
        if (arr[i] == 1) {
            if (arr[i - 1] == 0) return i;
            else {
                top = i - 1;
                i = (i + bot) / 2;
            }
        }
        else {
            if (arr[i + 1] == 1) return i + 1;
            else {
                bot = i + 1;
                i = (i + top) / 2;
                if (i < bot) return -1;
            }
        }
    }
    return -1;
}
