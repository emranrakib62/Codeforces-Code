#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin>>N;
    vector<int>a(N);
    for(int i=0;i<N;i++) cin>>a[i];

    sort(a.begin(),a.end());

    int X,p,q;
    cin >>X>>p>>q;
    long long ans;
    if(X==1) ans=(long long)a[p-1]+a[q-1];
    else if(X==2) ans = (long long)a[p-1]-a[q-1];
    else ans =(long long)a[p-1]*a[q-1];

    for(int x:a) cout << x << ' ';
    cout <<"\n"<< ans <<"\n";
}

