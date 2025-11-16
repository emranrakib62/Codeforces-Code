#include <bits/stdc++.h>
using namespace std;
int main(){
vector<long long>a(5);
for(int i=0;i<5;i++)
    cin>>a[i];

    long long n;
    cin>>n;

    n=n%5;
    vector<long long>result(5);
    for(int i=0;i<5;i++)
        result[i]=a[(i+n)%5];

    for(int x:result)
        cout<<x<<" ";
    cout<<endl;


return 0;
}
