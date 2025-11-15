
#include <bits/stdc++.h>
using namespace std;

int main(){
    int A1, L1, A2, L2;
    if (!(cin >> A1 >> L1))return 0;
    if (!(cin >> A2 >> L2))return 0;

    if (A2>L2) {
        cout << "Win\n";
        if (A1<L1&&A2>L2) {
            cout<<"Yes Rimontada\n";
        } else {
            cout<<"No Rimontada\n";
        }
    } else if (A2 < L2) {
        cout<<"Lose\n";
    } else {
        cout<<"Tie\n";
    }

    return 0;
}
