#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin>> T;
    while (T--)
    {
        double xA, yA, xB, yB;
        cin>> xA >> yA >> xB >> yB;
        double dist = sqrt((xA-xB)*(xA-xB) + (yA-yB)*(yA-yB));
        cout<< fixed <<setprecision(4) << dist << "\n";
    }
    return 0;
}