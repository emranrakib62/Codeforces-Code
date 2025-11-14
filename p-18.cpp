#include <iostream>
using namespace std;

int main() {
    long long id;
    cin>>id;

    long long row=id / 4;
    long long pos=id % 4;

    long long col;
    if (row%2==0)
        col=pos;
    else
        col=3-pos;

    cout<<row<<" "<<col<< endl;
    return 0;
}
