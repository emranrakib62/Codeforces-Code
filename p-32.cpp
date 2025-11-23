#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    if (cin >> n);

    string s;
    for (int i=0;i<n;++i) {
        cin >> s;
        reverse(s.begin(),s.end());
        cout<<s;
        if(i+1< n)cout <<' ';
    }

    return 0;
}

