#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    cin >> a >> b >> c;

    int maxsum = max(a+b, max(a+c, b+c));

    cout << maxsum << endl;
    return 0;
}
