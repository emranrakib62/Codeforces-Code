
#include <iostream>
using namespace std;

int main(){
    long long A,B,K;
    cin >>A>>B>>K;
    long long tom_eat=min(A, K);
    A=A-tom_eat;

    long long remaining=K-tom_eat;
    long long jerry_eat=min(B,remaining);
    B =B-jerry_eat;

    cout<<A<<" "<<B<<"\n";
    return 0;
}
