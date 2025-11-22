#include <bits/stdc++.h>
using namespace std;

int main() {

    string n;
    if (cin>> n);

    int count = 0;
    for (char c : n) {
        if(c =='2'||c=='3'||c=='5'||c=='7')
            count++;
    }

    cout << count << '\n';
    return 0;
}

