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
    string email = "";
    email+=fullName[fullName.size()-1];
    for (int i=0; i<fullName.size()-1; i++) {
        char c = fullName[i][0];
        email.push_back(c);
    }
    email += "@ptit.edu.vn";
    cout<< email;
    return 0;
}
