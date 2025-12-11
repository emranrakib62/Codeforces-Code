#include<iostream>
using namespace std;

int main(){
    int k,n,w;
    cin>>k>>n>>w;

    int total=k*w*(w+1)/2;
    int borrow=total>n?total-n:0;

    cout<<borrow<<endl;
    return 0;
}

