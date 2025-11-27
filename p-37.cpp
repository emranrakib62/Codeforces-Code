#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n,m,k;
    if(cin >> n >> m >> k);
    long long ans = min( k, min(n, (n + m) / 2 ) );
    cout<<ans<<'\n';
    return 0;
}

