#include <bits/stdc++.h>
using namespace std;
int main() {

    int n;
    if(cin >> n);
    int m =2 * n;
    vector<long long> a(m);
    for (int i = 0; i < m; ++i) cin >> a[i];
    sort(a.begin(), a.end());
    long long mn = LLONG_MAX, mx = LLONG_MIN;
    for (int i = 0; i < n; ++i) {
        long long sum = a[i]+a[m-1-i];
        mn = min(mn, sum);
        mx = max(mx, sum);
    }
    cout <<(mx-mn)<<'\n';
    return 0;
}

