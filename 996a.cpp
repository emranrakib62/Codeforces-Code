#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;

    int bills = 0;

    bills =bills + n / 100;
    n=n%100;

    bills =bills + n / 20;
    n =n % 20;

    bills += n / 10;
    n =n % 10;

    bills += n / 5;
    n =n % 5;

    bills += n;

    cout << bills << endl;
    return 0;
}

