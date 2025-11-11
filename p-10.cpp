#include <iostream>
using namespace std;

int main(){
    long long N,X,Y;
    cin>>N>>X>>Y;

    long long files_drive = X/Y;
    long long drive=(N+files_drive - 1)/files_drive;

    cout<<drive<< endl;
    return 0;
}
