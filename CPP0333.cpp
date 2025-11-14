#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    for (char &c:s) {
        c = tolower(c);
    }
    stringstream ss(s);
    vector <string> fullName;
    string word;
    while (ss >> word)
    {
        fullName.push_back(word);
    }
    string result = "";
    int len = fullName.size();
    for (int i=0; i<len-1; i++) {
        fullName[i][0] = toupper(fullName[i][0]);
        result+=fullName[i];
        if (i == len-2) {
            result+=",";
        }
        result+=" ";
    }
    string last = fullName[len - 1];
    for (char &c : last) c = toupper(c);
    result += last;
    cout<< result;
    return 0;
}
