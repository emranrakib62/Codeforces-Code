#include <bits/stdc++.h>
using namespace std;
int main() {
     long long N;
    if(cin >> N);
     long long ans = 0;
    int pos=0;
    while (N) {
        if (N & 1ULL) ans += pos;
        N >>= 1;
        ++pos;
    }
    cout << ans <<'\n';
    return 0;
}

