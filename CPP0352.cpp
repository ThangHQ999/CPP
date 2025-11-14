#include <bits/stdc++.h>
using namespace std;

void toLowerStr(string &s) {
    for (char &c : s) c = tolower(c);
}

int main() {
    int N;
    cin >> N;
    cin.ignore();

    map<string, int> freq;

    for (int i = 0; i < N; i++) {
        string line;
        getline(cin, line);

        toLowerStr(line);

        stringstream ss(line);
        vector<string> words;
        string word;

        while (ss >> word) words.push_back(word);

        if (words.empty()) {
            cout << "@ptit.edu.vn\n";
            continue;
        }

        string email = words.back();
        for (int j = 0; j < (int)words.size() - 1; j++) {
            email += words[j][0];
        }

        freq[email]++;
        if (freq[email] > 1) {
            email += to_string(freq[email]);
        }

        cout << email << "@ptit.edu.vn\n";
    }

    return 0;
}
