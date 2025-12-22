#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;

    string pre,cur;
    cin >>pre;

    int group=1;

    for (int i=2;i<=n;i++) {
        cin>>cur;
        if (cur!=pre) {
            group++;
        }
        pre=cur;
    }

    cout <<group<< endl;
    return 0;
}

