#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double area_circle, AB;
    cin >> area_circle >> AB;

    const double pi = 3.14159265359;
    double r = sqrt(area_circle / pi);
    double triangle_area = AB * r * sqrt(2) / 2.0;

    cout.precision(6);
    cout << fixed << triangle_area << endl;
}
