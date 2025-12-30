#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;

    int bill = 0;

    bill =bill + n / 100;
    n=n%100;

    bill =bill + n / 20;
    n =n % 20;

    bill += n / 10;
    n =n % 10;

    bill += n / 5;
    n =n % 5;

    bill += n;

    cout << bill<< endl;
    return 0;
}

