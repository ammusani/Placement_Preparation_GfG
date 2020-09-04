/*
https://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/1/?track=ppc-search-sort&batchId=221
*/

void sort012(int a[], int n)
{
    // coode here
    int i = 0;
    int j = 0;
    int k = n - 1;
    while (j <= k) {
    	if (!a[j]) {
    		if (i != j) {
	    		a[j] = a[j] + a[i];
    			a[i] = a[j] - a[i];
    			a[j] = a[j] - a[i];
    		}
    		i++;
    		j++;
    	}
    	else if (a[j] == 1) j++;
    	else {
    		if (j != k) {
    			a[j] = a[j] + a[k];
    			a[k] = a[j] - a[k];
    			a[j] = a[j] - a[k];
    		}
    		k--;
    	}
    }
}
