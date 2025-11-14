#include <iostream>
using namespace std;

int main(){
    char X;
    int Y;
    cin >>X>>Y;

    int col=X-'A'+1;
    int row=Y;

    if ((col+row)%2==0)
        cout<<"Black square";
    else
        cout<<"White square";

    return 0;
}

