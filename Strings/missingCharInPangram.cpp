/*
https://practice.geeksforgeeks.org/problems/missing-characters-in-panagram/1/?track=ppc-strings&batchId=221
*/

string missingPanagram(string str){

    //Your code here
    int l = str.length();
    int a[26] = {0};
    for (int i = 0; i < l; i++) {
        char n = str[i];
        if (n >= 'A' && n <= 'Z') a[n - 'A'] = 1;
        else a[n - 'a'] = 1;
    }
    string S;
    for (int i = 0; i < 26; i++) if (!a[i]) S.push_back('a' + i);
    if (S.empty()) return to_string(-1);
    return S;
}
