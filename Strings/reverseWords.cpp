/*
https://practice.geeksforgeeks.org/problems/reverse-words-in-a-given-string5459/1/?track=ppc-strings&batchId=221
*/

string reverseWords(string s) 
{ 
    // code here
    string x;
    stack<string> z;
    auto y = s.begin();
    while (y != s.end()) {
        if (*y == '.') {
            z.push(x);
            x = "";
        }
        else {
            x = x + *y;
        }
        y++;
    }
    while (!z.empty()) {
        x = x + "." + z.top();
        z.pop();
    }
    return x;
}
