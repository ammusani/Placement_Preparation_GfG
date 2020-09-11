/*
https://practice.geeksforgeeks.org/problems/remainder-with-7/1/?track=ppc-strings&batchId=221
*/

int remainderWith7(string n)
{
    //Your code here
    int l = n.length();
    int num = 0;
    for (int i = 0; i < l; i++) {
        num = (num * 10 + (n[i] - '0')) % 7;
    }
    return num;
}
