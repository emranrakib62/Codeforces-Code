#include <iostream>
using namespace std;

int main(){


    int t;
    cin>>t;
    while(t--){
        long long L,R;

        cin>>L>>R;

        long long total=0;

        for(long long i=L;i<=R;i++){

            total =total+i;

        }

        cout<<total<<endl;
    }

    return 0;

}
