#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    vector<char> code_101 = {'A','B','B','A','D','C','C','A','B','D','C','C','A','B','D'};
    vector<char> code_102 = {'A','C','C','A','B','C','D','D','B','B','C','D','D','B','B'};
    
    while (T--) {
        string code;
        cin >> code;

        vector<char> myAnswer(15);
        for (int i = 0; i < 15; i++) {
            cin >> myAnswer[i];
        }

        vector<char> testAnswer;
        if (code == "101") testAnswer = code_101;
        else if (code == "102") testAnswer = code_102;

        double mark = 0;
        for (int i = 0; i < 15; i++) {
            if (myAnswer[i] == testAnswer[i]) {
                mark += 10.0 / 15.0; 
            }
        }

        cout << fixed << setprecision(2) << mark << "\n";
    }

    return 0;
}
