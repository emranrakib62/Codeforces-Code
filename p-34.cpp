
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    if (cin >> n);

    vector<long long>a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    vector<long long> evens, odds;
    evens.reserve(n / 2);
    odds.reserve(n / 2);


    for (int i = 0; i < n; ++i) {
        if (a[i] % 2 == 0) evens.push_back(a[i]);
        else odds.push_back(a[i]);
    }


    sort(evens.begin(), evens.end());
    sort(odds.begin(), odds.end());


    vector<long long> ans(n);
    int ei = 0, oi = 0;
    for (int i = 0; i < n; ++i) {
        if (i % 2 == 0) {
            ans[i] = evens[ei++];
        } else {
            ans[i] = odds[oi++];
        }
    }

    for (int i = 0; i < n; ++i) {
        cout << ans[i] << ' ';
    }
    cout << '\n';

    return 0;
}
