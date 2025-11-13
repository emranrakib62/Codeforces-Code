#include <bits/stdc++.h>
using namespace std;

int main() {
    char piece;
    int N, M;
    cin >> piece >> N >> M;

    int ans = 0;
    if(piece == 'Q') {
        ans = min(N, M);
    } else if(piece == 'N') {
        ans = (N * M + 1) / 2;
    } else if(piece == 'K') {
        ans = ((N + 1) / 2) * ((M + 1) / 2);
    }

    cout << ans << endl;
    return 0;
}

