/*
https://practice.geeksforgeeks.org/problems/find-transition-point-1587115620/1/?track=ppc-arrays&batchId=221
*/

int transitionPoint(int arr[], int n) {
    int top = n - 1;
    int mid;
    int bot = 0;
    if(arr[0]) return 0;
    while(top >= bot) {
        mid = (top + bot) / 2;
        
        if (!arr[mid]) bot = mid + 1;
        else {
            if(!arr[mid - 1]) return mid;
            top = mid - 1;
        }
    }
    return -1;
}
