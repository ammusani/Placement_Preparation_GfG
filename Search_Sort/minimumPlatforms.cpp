/*
https://practice.geeksforgeeks.org/problems/minimum-platforms-1587115620/1/?track=ppc-search-sort&batchId=221
*/

int findPlatform(int arr[], int dep[], int n)
{
	// Your code here
	int i = 0;
	int j = 0;
	int count = 0;
	sort (arr, arr + n);
	sort (dep, dep + n);
	int max = 0;
	while (i < n && j < n) {
	    if (arr[i] > dep[j]) {
	        count--;
	        j++;
	    }
	    else if (arr[i] <=  dep[j]) {
	        count++;
	        i++;
	    }
	    if (max < count) max = count;
	}
	return max;
}
