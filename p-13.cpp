#include <iostream>
using namespace std;

int main() {
    long long X, Y, N;
    cin >> X >> Y >> N;

    if (X >= Y) {
        cout << 0;
        return 0;
    }

    long long needed = Y - X;
    if (needed <= N)
        cout << needed;
    else
        cout << "The dogs will bite Sh7ata.";

    return 0;
}

