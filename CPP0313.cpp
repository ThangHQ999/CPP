#include <bits/stdc++.h>
using namespace std;

int main() {
    string str1, str2;
    getline(cin, str1);
    getline(cin, str2);
    vector <string> s1, s2;
    stringstream ss1(str1);
    stringstream ss2(str2);
    string word;
    while (ss1 >> word)
    {
        s1.push_back(word);
    }
    while (ss2 >> word)
    {
        s2.push_back(word);
    }
    vector <string> newStr;
    for (int i=0; i<s1.size(); i++) {
        if (s1[i] != s2[0]) {
            newStr.push_back(s1[i]);
        }
    }
    for (int i=0; i<newStr.size(); i++) {
        cout<< newStr[i] << " ";
    }
    return 0;
}