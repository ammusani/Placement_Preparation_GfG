/*
https://practice.geeksforgeeks.org/problems/validate-an-ip-address-1587115621/1/?track=ppc-strings&batchId=221
*/

int isValid(char *ip) {
    // your code here
    int i = 0;
    int numb = -1;
    int count = 0;
    while (ip[i] != '\0') {
        if (ip[i] == '.') {
            if (numb <= 255 && numb >= 0 && count < 3) {
                numb = -1;
                count++;
                
            }
            else return 0;
            
        }
        else {
            if (numb == 0) return 0;
            if (ip[i] > '9' || ip[i] < '0') return 0;
            if (numb == -1) numb = 0;
            numb = (numb * 10 + (ip[i] - '0')) % 100000007;
        }
        i++;
    }
    //cout << numb << endl;
    if (numb <= 255 && count == 3) return 1;
    return 0;
}
