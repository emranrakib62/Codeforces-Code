#include <iostream>
using namespace std;

int main() {
    long long l, w, h;
    cin >> l >> w >> h;

    long long perimeter = 2 * (w + h);
    long long rectangles = l / perimeter;

    cout << rectangles << endl;
}

