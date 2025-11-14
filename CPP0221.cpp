#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin>> T;
    while (T--)
    {
        int n, m;
        cin>> n >> m;
        vector<vector<int>> A(n, vector<int>(m, 0));
        for (int i=0; i<n; i++) {
            for (int j=0;j<m; j++) {
                cin>> A[i][j];
            }
        }
        int top=0, bottom=n-1;
        int left=0, right=m-1;
        vector<int> res(1, 0);
        while (left<=right && top<=bottom)
        {
            for (int i=left; i<=right; i++) {
                res.push_back(A[top][i]);
            }
            top++;

            for (int i=top; i<=bottom; i++) {
                res.push_back(A[i][right]);
            }
            right--;
            
            if (left<=right) {
                for (int i=right; i>=left; i--) {
                    res.push_back(A[bottom][i]);
                }
                bottom--;
            }
            
            if (top<=bottom) {
                for (int i=bottom; i>=top; i--) {
                    res.push_back(A[i][left]);
                }
                left++;
            }
        }
        // int size = res.size();
        // res[0] = res[size-1];
        // res.pop_back();
        for (int i=0; i<res.size(); i++) {
            cout<< res[i] << " ";
        }
        cout<< endl;
    }
    
    return 0;
}